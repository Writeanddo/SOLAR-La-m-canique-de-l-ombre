﻿using System;
using System.Collections;
using System.Collections.Generic;
using BeardedManStudios.Forge.Networking;
using BeardedManStudios.Forge.Networking.Generated;
using UnityEngine;
using UnityEngine.UI;

public class ControllerSun : MonoBehaviour
{
    [Header("Sun control")]
    private LightController _sun;
    
    [SerializeField, Range(0,100)] public float _maxRotateSpeed = 100f;
    [SerializeField, Range(0,100)] private float _speedVelocity = 5;
    private float _rotateInput;
    private float _rotateWheel;
    private bool _directionWheel;
    private float _time;
    [HideInInspector]
    public float _gotoAngle = 0;
    [SerializeField] private GameObject _gotoAngleInfo;
    private float _angle = 0;
    [SerializeField] private GameObject _angleInfo;
    private float _angleVelocity = 0;
    
    [Header("Player Reaction with Sun")]
    private float _life = 1;
    public float Life => _life;
    [SerializeField] private List<Point> _points;
    [SerializeField] private Gradient fx;
    [SerializeField] private AnimationCurve _pulsate;
    private float _pulsateSpeed = 2;
    [SerializeField] private Image _fxUI;

    private Controller _controller;
    
    // Start is called before the first frame update
    void Awake()
    {
        _sun = FindObjectOfType<LightController>();
        _controller = GetComponent<Controller>();
        _points = new List<Point>();
        GetPoints(this.gameObject);
        
        _gotoAngle = _sun.transform.eulerAngles.y;
        _angle = _gotoAngle;
    }

    // Update is called once per frame

    void Update()
    {
        if (_controller.IsDead()) return;
        float rotateSpeed = DefineSpeed();
        _angle += rotateSpeed * Time.deltaTime;

        AkSoundEngine.SetRTPCValue("RTPC_Sun_Velocity", Mathf.Abs(rotateSpeed / _maxRotateSpeed));

        Vector3 sunEuler = _sun.transform.eulerAngles;
        sunEuler.y = _angle;
        _sun.transform.eulerAngles = sunEuler;

        _angleInfo.transform.localEulerAngles = new Vector3(0, -_angle, 0);
        _gotoAngleInfo.transform.localEulerAngles = new Vector3(0, -_gotoAngle, 0);

        SetLife();

    }

    float DefineSpeed()
    {
        if (Mathf.Abs(_gotoAngle - _angle) > _maxRotateSpeed * Time.deltaTime)
            _angleVelocity = Mathf.Min(_maxRotateSpeed, Mathf.Max(-_maxRotateSpeed, _angleVelocity + _speedVelocity * Mathf.Sign(_gotoAngle-_angle)));
        else _angleVelocity = 0;
        return _angleVelocity;
    }


    private int _testPoint;
    private void SetLife()
    {
        _life = _points.Count;
        foreach (Point p in _points)
        {
            _life -= p.TestLight(_sun);
        }

        for (int i = 0; i < _points.Count; ++i)
        {
            _life -= _points[i].TestLight(_sun,_testPoint == i);
        }
        
        _life /= _points.Count;
        AkSoundEngine.SetRTPCValue("RTPC_Distance_Sun", Mathf.Abs(_life * 100));

        _time = (_time + Time.deltaTime * _pulsateSpeed * (1 - _life)) % 1;
        _fxUI.color = fx.Evaluate(1 - _life) * new Color(1, 1, 1, 0.8f + _pulsate.Evaluate(_time) * 0.2f);
        if (_life <= 0)
        {
            _controller.Dying();
        }

        ++_testPoint;
        if (_testPoint == _points.Count) _testPoint = 0;

    }
    private void GetPoints(GameObject obj)
    {
        
        if(obj.TryGetComponent<Point>(out var p)) _points.Add(p);
        for (int i = 0; i < obj.transform.childCount; ++i)
        {
            GetPoints(obj.transform.GetChild(i).gameObject);
        }
    }


    public void ResetPoints()
    {
        _life = 1;
        foreach (Point p in _points)
        {
            p.ResetPoint();
        }
    }

    public void ResetRotate(float angle)
    {
        _gotoAngle = angle;
        _angle = angle;
    }
}
