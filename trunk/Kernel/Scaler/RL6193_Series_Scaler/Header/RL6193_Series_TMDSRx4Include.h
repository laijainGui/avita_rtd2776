/********************************************************************************/
/*   The  Software  is  proprietary,  confidential,  and  valuable to Realtek   */
/*   Semiconductor  Corporation  ("Realtek").  All  rights, including but not   */
/*   limited  to  copyrights,  patents,  trademarks, trade secrets, mask work   */
/*   rights, and other similar rights and interests, are reserved to Realtek.   */
/*   Without  prior  written  consent  from  Realtek,  copying, reproduction,   */
/*   modification,  distribution,  or  otherwise  is strictly prohibited. The   */
/*   Software  shall  be  kept  strictly  in  confidence,  and  shall  not be   */
/*   disclosed to or otherwise accessed by any third party.                     */
/*   c<2003> - <2012>                                                           */
/*   The Software is provided "AS IS" without any warranty of any kind,         */
/*   express, implied, statutory or otherwise.                                  */
/********************************************************************************/

//----------------------------------------------------------------------------------------------------
// ID Code      : RL6193_Series_TMDSRx4Include.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------

#if(_D4_TMDS_SUPPORT == _ON)
//****************************************************************************
// LAYER DEFINITIONS / MACROS
//****************************************************************************
#if(_D4_HDMI_2_0_SUPPORT == _ON)
//--------------------------------------------------
// Macro of HDMI 2.0 Format Reset Check Wait
//--------------------------------------------------
#define GET_TMDS_RX4_HDMI_2_0_FORMAT_RESET_WAITING()    (g_stTMDSRx4CtrlInfo.b1HDMI2FormatResetWaiting)
#define SET_TMDS_RX4_HDMI_2_0_FORMAT_RESET_WAITING()    (g_stTMDSRx4CtrlInfo.b1HDMI2FormatResetWaiting = _TRUE)
#define CLR_TMDS_RX4_HDMI_2_0_FORMAT_RESET_WAITING()    (g_stTMDSRx4CtrlInfo.b1HDMI2FormatResetWaiting = _FALSE)

//--------------------------------------------------
// Macro of HDMI 2.0 Read Request Enable Flag
//--------------------------------------------------
#define GET_HDMI_2_0_RX4_RR_ENABLE()                    (g_stTMDSRx4CtrlInfo.b1HDMI2RREnable)
#define SET_HDMI_2_0_RX4_RR_ENABLE()                    (g_stTMDSRx4CtrlInfo.b1HDMI2RREnable = _TRUE)
#define CLR_HDMI_2_0_RX4_RR_ENABLE()                    (g_stTMDSRx4CtrlInfo.b1HDMI2RREnable = _FALSE)

//--------------------------------------------------
// Macro of HDMI 2.0 High Speed Mode
//--------------------------------------------------
#define GET_TMDS_RX4_HIGH_SPEED_MODE()                  (g_stTMDSRx4CtrlInfo.b1HDMI2HighSpeedMode)
#define SET_TMDS_RX4_HIGH_SPEED_MODE()                  (g_stTMDSRx4CtrlInfo.b1HDMI2HighSpeedMode = _TRUE)
#define CLR_TMDS_RX4_HIGH_SPEED_MODE()                  (g_stTMDSRx4CtrlInfo.b1HDMI2HighSpeedMode = _FALSE)
#endif

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// VARIABLE EXTERN
//****************************************************************************
#if(_TMDS_HDCP_2_2_SUPPORT == _ON)
extern BYTE g_pucTmdsRx4Caps[3];
#endif

//****************************************************************************
// FUNCTION EXTERN
//****************************************************************************
extern void ScalerTMDSRx4InterruptInitial(void);
extern WORD ScalerTMDSRx4MeasureClk(BYTE ucMeasureClk);
extern WORD ScalerTMDSRx4MeasureClk_EXINT0(BYTE ucMeasureClk);

#if(_D4_HDMI_SUPPORT == _ON)
#if(_D4_INPUT_PORT_TYPE != _D4_DUAL_DVI_PORT)
extern bit ScalerTMDSRx4HdmiSetDeepColorPll(WORD usTMDSClkCount, BYTE ucColorDepth);
#endif
#endif

extern void ScalerTMDSRx4HotPlugEvent(void);

#if(_D4_INPUT_PORT_TYPE == _D4_DUAL_DVI_PORT)
extern bit ScalerTMDSRx4GetDualDVIMode(void);
#endif

#endif // End of #if(_D4_TMDS_SUPPORT == _ON)

