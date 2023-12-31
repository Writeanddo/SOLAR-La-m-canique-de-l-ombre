/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID AMB_DESERT_PLAY = 2160078966U;
        static const AkUniqueID AMB_EXT_LVL01_DESERT_GLOBAL = 26480583U;
        static const AkUniqueID AMB_EXT_LVL01_DESERT_KIOSK = 1449773595U;
        static const AkUniqueID AMB_EXT_LVL01_DESERT_VIEW = 3505954145U;
        static const AkUniqueID AMB_INT_LVL01 = 3602364923U;
        static const AkUniqueID ASTRO_MOVING_PLAY = 3822072736U;
        static const AkUniqueID ASTRO_MOVING_STOP = 2165331746U;
        static const AkUniqueID CHA_BREATH_PLAY = 182011575U;
        static const AkUniqueID CHA_DEATH_PLAY = 872937223U;
        static const AkUniqueID CHA_FOOTSTEPS_PLAY = 1343142182U;
        static const AkUniqueID CHA_HURT = 1546453947U;
        static const AkUniqueID CHA_IDLE = 3135834134U;
        static const AkUniqueID CHA_RESPAWN = 1215500860U;
        static const AkUniqueID CHA_RUN = 3845266727U;
        static const AkUniqueID CHA_WALK = 300025675U;
        static const AkUniqueID MUSIC_DROP = 2212149258U;
        static const AkUniqueID MUSIC_PLAY = 202194903U;
        static const AkUniqueID MUSIC_POSTINTRO = 3194768471U;
        static const AkUniqueID MUSIC_STOP = 3227181061U;
        static const AkUniqueID SUN_FEEDBACK_PLAY = 2337456342U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace AMB_LVL01
        {
            static const AkUniqueID GROUP = 416592333U;

            namespace STATE
            {
                static const AkUniqueID EXT_LVL01_DESERT_GLOBAL = 2890487870U;
                static const AkUniqueID EXT_LVL01_DESERT_KIOSK = 3857277276U;
                static const AkUniqueID EXT_LVL01_DESERT_VIEW = 3003725028U;
                static const AkUniqueID INT_LVL01 = 3139526458U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace AMB_LVL01

        namespace GENERALSTATES
        {
            static const AkUniqueID GROUP = 874109109U;

            namespace STATE
            {
                static const AkUniqueID ISHURTING = 1898407218U;
                static const AkUniqueID ISIDLE = 2139983939U;
                static const AkUniqueID ISWALKING = 3629409974U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace GENERALSTATES

        namespace MUSIC_STATE
        {
            static const AkUniqueID GROUP = 3826569560U;

            namespace STATE
            {
                static const AkUniqueID DROP = 1878686274U;
                static const AkUniqueID INTRO = 1125500713U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OUTRO = 4184794294U;
                static const AkUniqueID POST_INTRO = 2098910396U;
            } // namespace STATE
        } // namespace MUSIC_STATE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace BREATH_SWITCH
        {
            static const AkUniqueID GROUP = 1231199118U;

            namespace SWITCH
            {
                static const AkUniqueID ISHURTING = 1898407218U;
                static const AkUniqueID ISIDLE = 2139983939U;
                static const AkUniqueID ISRUNNING = 4119476486U;
                static const AkUniqueID ISWALKING = 3629409974U;
            } // namespace SWITCH
        } // namespace BREATH_SWITCH

        namespace FOOTSTEP_FLOOR
        {
            static const AkUniqueID GROUP = 997064848U;

            namespace SWITCH
            {
                static const AkUniqueID SAND = 803837735U;
                static const AkUniqueID STONE = 1216965916U;
            } // namespace SWITCH
        } // namespace FOOTSTEP_FLOOR

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID AMB_RTPC = 2682991203U;
        static const AkUniqueID BREATH_RTPC = 748151351U;
        static const AkUniqueID RTPC_DISTANCE_SUN = 2257099397U;
        static const AkUniqueID RTPC_SUN_VELOCITY = 582120507U;
        static const AkUniqueID RTPC_WINDGAIN = 1687410496U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID ALL = 1100754030U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID INT_LVL01_ACOUSTIC = 1571012312U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID INT_LVL01_FX = 2514557383U;
        static const AkUniqueID TEMPLE = 2323193050U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
