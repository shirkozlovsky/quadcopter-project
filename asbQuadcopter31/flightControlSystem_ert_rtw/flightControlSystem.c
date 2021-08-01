/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.c
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 1.88
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Nov 28 10:02:54 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/controller' */
uint8_T flag_outport;                  /* '<S6>/Merge' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystem_T flightControlSystem_Y;

/* Real-time model */
RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;

/*
 * Output and update for action system:
 *    '<S6>/Geofencing error'
 *    '<S6>/estimator//Optical flow error'
 *    '<S6>/Normal condition'
 */
void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP)
{
  /* SignalConversion: '<S16>/OutportBufferForOut1' incorporates:
   *  Constant: '<S16>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* Start for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging_Start(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW)
{
  /* Start for ToWorkspace: '<S8>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace2";
    localDW->ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "estim",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 10 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 10 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace6";
    localDW->ToWorkspace6_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "sensor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace3' */
  {
    static int_T rt_ToWksWidths[] = { 9 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 9 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace3";
    localDW->ToWorkspace3_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "cmd",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace4";
    localDW->ToWorkspace4_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "optical",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "calib",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "posref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S8>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace";
    localDW->ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "motor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], const real32_T
  rtu_posRef[8], const statesEstim_t *rtu_states_estim, const CommandBus
  *rtu_ReferenceValueServerBus, const SensorsBus *rtu_Sensors, real32_T
  rtu_sensordata_datin, real32_T rtu_sensordata_datin_d, real32_T
  rtu_sensordata_datin_e, real32_T rtu_sensordata_datin_c, real32_T
  rtu_sensordata_datin_cg, real32_T rtu_sensordata_datin_i, real32_T
  rtu_sensordata_datin_h, real32_T rtu_sensordata_datin_b, real32_T
  rtu_sensordata_datin_dz, uint32_T rtu_sensordata_datin_n,
  B_Logging_flightControlSystem_T *localB, DW_Logging_flightControlSystem_T
  *localDW)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion5[4];
  int32_T i;

  /* DataTypeConversion: '<S8>/Data Type Conversion4' */
  localB->DataTypeConversion4[0] = rtu_states_estim->X;
  localB->DataTypeConversion4[1] = rtu_states_estim->Y;
  localB->DataTypeConversion4[2] = rtu_states_estim->Z;
  localB->DataTypeConversion4[3] = rtu_states_estim->yaw;
  localB->DataTypeConversion4[4] = rtu_states_estim->pitch;
  localB->DataTypeConversion4[5] = rtu_states_estim->roll;
  localB->DataTypeConversion4[6] = rtu_states_estim->dx;
  localB->DataTypeConversion4[7] = rtu_states_estim->dy;
  localB->DataTypeConversion4[8] = rtu_states_estim->dz;
  localB->DataTypeConversion4[9] = rtu_states_estim->p;
  localB->DataTypeConversion4[10] = rtu_states_estim->q;
  localB->DataTypeConversion4[11] = rtu_states_estim->r;

  /* ToWorkspace: '<S8>/To Workspace2' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime, &localB->DataTypeConversion4[0]);
  }

  /* SignalConversion: '<S8>/TmpSignal ConversionAtTo Workspace6Inport1' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion'
   *  DataTypeConversion: '<S8>/Data Type Conversion13'
   *  DataTypeConversion: '<S8>/Data Type Conversion14'
   *  DataTypeConversion: '<S8>/Data Type Conversion15'
   *  DataTypeConversion: '<S8>/Data Type Conversion16'
   *  DataTypeConversion: '<S8>/Data Type Conversion17'
   *  DataTypeConversion: '<S8>/Data Type Conversion18'
   *  DataTypeConversion: '<S8>/Data Type Conversion19'
   *  DataTypeConversion: '<S8>/Data Type Conversion20'
   *  DataTypeConversion: '<S8>/Data Type Conversion21'
   */
  localB->TmpSignalConversionAtToWorkspace6Inport1[0] = rtu_sensordata_datin;
  localB->TmpSignalConversionAtToWorkspace6Inport1[1] = rtu_sensordata_datin_d;
  localB->TmpSignalConversionAtToWorkspace6Inport1[2] = rtu_sensordata_datin_e;
  localB->TmpSignalConversionAtToWorkspace6Inport1[3] = rtu_sensordata_datin_c;
  localB->TmpSignalConversionAtToWorkspace6Inport1[4] = rtu_sensordata_datin_cg;
  localB->TmpSignalConversionAtToWorkspace6Inport1[5] = rtu_sensordata_datin_i;
  localB->TmpSignalConversionAtToWorkspace6Inport1[6] = rtu_sensordata_datin_h;
  localB->TmpSignalConversionAtToWorkspace6Inport1[7] = rtu_sensordata_datin_b;
  localB->TmpSignalConversionAtToWorkspace6Inport1[8] = rtu_sensordata_datin_dz;
  localB->TmpSignalConversionAtToWorkspace6Inport1[9] = rtu_sensordata_datin_n;

  /* ToWorkspace: '<S8>/To Workspace6' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace6Inport1[0]);
  }

  /* SignalConversion: '<S8>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion3'
   *  DataTypeConversion: '<S8>/Data Type Conversion6'
   *  DataTypeConversion: '<S8>/Data Type Conversion7'
   *  DataTypeConversion: '<S8>/Data Type Conversion8'
   *  DataTypeConversion: '<S8>/Data Type Conversion9'
   */
  localB->TmpSignalConversionAtToWorkspace3Inport1[0] =
    rtu_ReferenceValueServerBus->controlModePosVSOrient;
  localB->TmpSignalConversionAtToWorkspace3Inport1[1] =
    rtu_ReferenceValueServerBus->pos_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[2] =
    rtu_ReferenceValueServerBus->pos_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[3] =
    rtu_ReferenceValueServerBus->pos_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[4] =
    rtu_ReferenceValueServerBus->takeoff_flag;
  localB->TmpSignalConversionAtToWorkspace3Inport1[5] =
    rtu_ReferenceValueServerBus->orient_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[6] =
    rtu_ReferenceValueServerBus->orient_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[7] =
    rtu_ReferenceValueServerBus->orient_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[8] =
    rtu_ReferenceValueServerBus->live_time_ticks;

  /* ToWorkspace: '<S8>/To Workspace3' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace3Inport1[0]);
  }

  /* SignalConversion: '<S8>/TmpSignal ConversionAtTo Workspace4Inport1' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion10'
   *  DataTypeConversion: '<S8>/Data Type Conversion11'
   *  DataTypeConversion: '<S8>/Data Type Conversion2'
   */
  localB->TmpSignalConversionAtToWorkspace4Inport1[0] =
    rtu_Sensors->VisionSensors.usePosVIS_flag;
  localB->TmpSignalConversionAtToWorkspace4Inport1[1] =
    rtu_Sensors->VisionSensors.opticalFlow_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[2] =
    rtu_Sensors->VisionSensors.opticalFlow_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[3] =
    rtu_Sensors->VisionSensors.opticalFlow_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[4] =
    rtu_Sensors->VisionSensors.posVIS_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[5] =
    rtu_Sensors->VisionSensors.posVIS_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[6] =
    rtu_Sensors->VisionSensors.posVIS_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[7] =
    rtu_Sensors->VisionSensors.posVIS_data[3];

  /* ToWorkspace: '<S8>/To Workspace4' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace4Inport1[0]);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion1' */
  for (i = 0; i < 8; i++) {
    localB->DataTypeConversion12[i] = rtu_Sensors->SensorCalibration[i];
  }

  /* End of DataTypeConversion: '<S8>/Data Type Conversion1' */

  /* ToWorkspace: '<S8>/To Workspace5' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime, &localB->DataTypeConversion12[0]);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion12' */
  for (i = 0; i < 8; i++) {
    localB->DataTypeConversion12[i] = rtu_posRef[i];
  }

  /* End of DataTypeConversion: '<S8>/Data Type Conversion12' */

  /* ToWorkspace: '<S8>/To Workspace1' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime, &localB->DataTypeConversion12[0]);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion5' */
  rtb_DataTypeConversion5[0] = rtu_motorCmds[0];
  rtb_DataTypeConversion5[1] = rtu_motorCmds[1];
  rtb_DataTypeConversion5[2] = rtu_motorCmds[2];
  rtb_DataTypeConversion5[3] = rtu_motorCmds[3];

  /* ToWorkspace: '<S8>/To Workspace' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtb_DataTypeConversion5[0]);
  }
}

/* Model step function */
void flightControlSystem_step(void)
{
  uint8_T rtb_DataTypeConversion;

  /* Step: '<S2>/X1' incorporates:
   *  Step: '<S2>/X2'
   *  Step: '<S2>/X3'
   *  Step: '<S2>/Y1'
   *  Step: '<S2>/Y2'
   *  Step: '<S2>/Y3'
   *  Step: '<S2>/Z1'
   *  Step: '<S2>/Z2'
   *  Step: '<S2>/Z3'
   */
  flightControlSystem_B.currentTime_tmp = flightControlSystem_M->Timing.t[0];

  /* Step: '<S2>/Z1' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Z1StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.Z1_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_Z1Value;
  }

  /* Step: '<S2>/Z2' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Z2StepTime) {
    flightControlSystem_B.currentTime_m = flightControlSystem_P.Z2_Y0;
  } else {
    flightControlSystem_B.currentTime_m = rtP_Z2Value;
  }

  /* Step: '<S2>/Z3' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Z3StepTime) {
    flightControlSystem_B.currentTime_c = flightControlSystem_P.Z3_Y0;
  } else {
    flightControlSystem_B.currentTime_c = rtP_Z3Value;
  }

  /* Sum: '<S2>/Sum3' */
  flightControlSystem_B.Z = (flightControlSystem_B.currentTime +
    flightControlSystem_B.currentTime_m) + flightControlSystem_B.currentTime_c;

  /* Step: '<S2>/Roll1' incorporates:
   *  Step: '<S2>/Pitch1'
   *  Step: '<S2>/Pitch2'
   *  Step: '<S2>/Pitch3'
   *  Step: '<S2>/Roll2'
   *  Step: '<S2>/Roll3'
   *  Step: '<S2>/Yaw1'
   *  Step: '<S2>/Yaw2'
   *  Step: '<S2>/Yaw3'
   */
  flightControlSystem_B.currentTime_m =
    ((flightControlSystem_M->Timing.clockTick1) * 0.005);
  if (flightControlSystem_B.currentTime_m < rtP_Roll1StepTime) {
    flightControlSystem_B.roll = flightControlSystem_P.Roll1_Y0;
  } else {
    flightControlSystem_B.roll = rtP_Roll1Value;
  }

  /* End of Step: '<S2>/Roll1' */

  /* Step: '<S2>/Roll3' */
  if (flightControlSystem_B.currentTime_m < rtP_Roll3StepTime) {
    flightControlSystem_B.pitch = flightControlSystem_P.Roll3_Y0;
  } else {
    flightControlSystem_B.pitch = rtP_Roll3Value;
  }

  /* Step: '<S2>/Roll2' */
  if (flightControlSystem_B.currentTime_m < rtP_Roll2StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.Roll2_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_Roll2Value;
  }

  /* Sum: '<S2>/Sum2' */
  flightControlSystem_B.roll = (flightControlSystem_B.roll +
    flightControlSystem_B.currentTime) + flightControlSystem_B.pitch;

  /* Step: '<S2>/Pitch1' */
  if (flightControlSystem_B.currentTime_m < rtP_Pitch1StepTime) {
    flightControlSystem_B.pitch = flightControlSystem_P.Pitch1_Y0;
  } else {
    flightControlSystem_B.pitch = rtP_Pitch1Value;
  }

  /* Step: '<S2>/Pitch3' */
  if (flightControlSystem_B.currentTime_m < rtP_Pitch3StepTime) {
    flightControlSystem_B.yaw = flightControlSystem_P.Pitch3_Y0;
  } else {
    flightControlSystem_B.yaw = rtP_Pitch3Value;
  }

  /* Step: '<S2>/Pitch2' */
  if (flightControlSystem_B.currentTime_m < rtP_Pitch2StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.Pitch2_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_Pitch2Value;
  }

  /* Sum: '<S2>/Sum1' */
  flightControlSystem_B.pitch = (flightControlSystem_B.pitch +
    flightControlSystem_B.currentTime) + flightControlSystem_B.yaw;

  /* Step: '<S2>/Yaw1' */
  if (flightControlSystem_B.currentTime_m < rtP_Yaw1StepTime) {
    flightControlSystem_B.yaw = flightControlSystem_P.Yaw1_Y0;
  } else {
    flightControlSystem_B.yaw = rtP_Yaw1Value;
  }

  /* Step: '<S2>/Yaw2' */
  if (flightControlSystem_B.currentTime_m < rtP_Yaw2StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.Yaw2_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_Yaw2Value;
  }

  /* Step: '<S2>/Yaw3' */
  if (flightControlSystem_B.currentTime_m < rtP_Yaw3StepTime) {
    flightControlSystem_B.currentTime_m = flightControlSystem_P.Yaw3_Y0;
  } else {
    flightControlSystem_B.currentTime_m = rtP_Yaw3Value;
  }

  /* Sum: '<S2>/Sum' */
  flightControlSystem_B.yaw = (flightControlSystem_B.yaw +
    flightControlSystem_B.currentTime) + flightControlSystem_B.currentTime_m;

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  flightControlSystem_B.DataTypeConversion3[0] = (real32_T)
    flightControlSystem_B.yaw;
  flightControlSystem_B.DataTypeConversion3[1] = (real32_T)
    flightControlSystem_B.pitch;
  flightControlSystem_B.DataTypeConversion3[2] = (real32_T)
    flightControlSystem_B.roll;

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  flightControlSystem_B.LogicalOperator3 = ((flightControlSystem_B.roll ==
    flightControlSystem_P.Constant_Value) && (flightControlSystem_B.pitch ==
    flightControlSystem_P.Constant_Value_c));

  /* UnitDelay: '<S7>/Output' */
  flightControlSystem_B.rtb_Output_k = flightControlSystem_DW.Output_DSTATE;

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  RateTransition: '<S1>/Rate Transition4'
   */
  flightControlSystem_B.BusCreator.controlModePosVSOrient =
    flightControlSystem_B.LogicalOperator3;

  /* Step: '<S2>/X1' */
  if (flightControlSystem_B.currentTime_tmp < rtP_X1StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.X1_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_X1Value;
  }

  /* Step: '<S2>/X2' */
  if (flightControlSystem_B.currentTime_tmp < rtP_X2StepTime) {
    flightControlSystem_B.currentTime_m = flightControlSystem_P.X2_Y0;
  } else {
    flightControlSystem_B.currentTime_m = rtP_X2Value;
  }

  /* Step: '<S2>/X3' */
  if (flightControlSystem_B.currentTime_tmp < rtP_X3StepTime) {
    flightControlSystem_B.currentTime_c = flightControlSystem_P.X3_Y0;
  } else {
    flightControlSystem_B.currentTime_c = rtP_X3Value;
  }

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  Sum: '<S2>/Sum5'
   */
  flightControlSystem_B.BusCreator.pos_ref[0] = (real32_T)
    ((flightControlSystem_B.currentTime + flightControlSystem_B.currentTime_m) +
     flightControlSystem_B.currentTime_c);

  /* Step: '<S2>/Y1' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Y1StepTime) {
    flightControlSystem_B.currentTime = flightControlSystem_P.Y1_Y0;
  } else {
    flightControlSystem_B.currentTime = rtP_Y1Value;
  }

  /* Step: '<S2>/Y2' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Y2StepTime) {
    flightControlSystem_B.currentTime_m = flightControlSystem_P.Y2_Y0;
  } else {
    flightControlSystem_B.currentTime_m = rtP_Y2Value;
  }

  /* Step: '<S2>/Y3' */
  if (flightControlSystem_B.currentTime_tmp < rtP_Y3StepTime) {
    flightControlSystem_B.currentTime_c = flightControlSystem_P.Y3_Y0;
  } else {
    flightControlSystem_B.currentTime_c = rtP_Y3Value;
  }

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  Clock: '<S1>/Clock'
   *  Constant: '<S3>/Constant'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  RateTransition: '<S1>/Rate Transition1'
   *  RelationalOperator: '<S3>/Compare'
   *  Sum: '<S2>/Sum4'
   */
  flightControlSystem_B.BusCreator.pos_ref[1] = (real32_T)
    ((flightControlSystem_B.currentTime + flightControlSystem_B.currentTime_m) +
     flightControlSystem_B.currentTime_c);
  flightControlSystem_B.BusCreator.pos_ref[2] = (real32_T)
    flightControlSystem_B.Z;
  flightControlSystem_B.BusCreator.takeoff_flag =
    (flightControlSystem_M->Timing.t[0] < rtP_takeOffDuration);
  flightControlSystem_B.BusCreator.orient_ref[0] =
    flightControlSystem_B.DataTypeConversion3[0];
  flightControlSystem_B.BusCreator.orient_ref[1] =
    flightControlSystem_B.DataTypeConversion3[1];
  flightControlSystem_B.BusCreator.orient_ref[2] =
    flightControlSystem_B.DataTypeConversion3[2];
  flightControlSystem_B.BusCreator.live_time_ticks =
    flightControlSystem_B.rtb_Output_k;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_estimator_at_inport_1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddx
    = sensor_inport.HALSensors.HAL_acc_SI.x;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddy
    = sensor_inport.HALSensors.HAL_acc_SI.y;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddz
    = sensor_inport.HALSensors.HAL_acc_SI.z;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.p
    = sensor_inport.HALSensors.HAL_gyro_SI.x;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.q
    = sensor_inport.HALSensors.HAL_gyro_SI.y;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.r
    = sensor_inport.HALSensors.HAL_gyro_SI.z;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.altitude_sonar
    = sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.prs
    = sensor_inport.HALSensors.HAL_pressure_SI.pressure;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_V
    = sensor_inport.HALSensors.HAL_vbat_SI.vbat_V;
  flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_percentage
    = sensor_inport.HALSensors.HAL_vbat_SI.vbat_percentage;

  /* ModelReference: '<S1>/estimator' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  stateEstimator_run(flightControlSystem_B.BusCreator.controlModePosVSOrient,
                     &flightControlSystem_B.BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1,
                     sensor_inport.VisionSensors.usePosVIS_flag,
                     &sensor_inport.VisionSensors.opticalFlow_data[0],
                     &sensor_inport.VisionSensors.posVIS_data[0],
                     &flightControlSystem_B.estimator,
                     &sensor_inport.SensorCalibration[0]);

  /* ModelReference: '<S1>/controller' */
  flightController_run(&flightControlSystem_B.BusCreator,
                       &flightControlSystem_B.estimator, &motors_outport[0],
                       &flightControlSystem_B.controller_o2[0]);

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */

  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_Logging(flightControlSystem_M, motors_outport,
    flightControlSystem_B.controller_o2, &flightControlSystem_B.estimator,
    &cmd_inport, &sensor_inport, sensor_inport.HALSensors.HAL_acc_SI.x,
    sensor_inport.HALSensors.HAL_acc_SI.y, sensor_inport.HALSensors.HAL_acc_SI.z,
    sensor_inport.HALSensors.HAL_gyro_SI.x,
    sensor_inport.HALSensors.HAL_gyro_SI.y,
    sensor_inport.HALSensors.HAL_gyro_SI.z,
    sensor_inport.HALSensors.HAL_ultrasound_SI.altitude,
    sensor_inport.HALSensors.HAL_pressure_SI.pressure,
    sensor_inport.HALSensors.HAL_vbat_SI.vbat_V,
    sensor_inport.HALSensors.HAL_vbat_SI.vbat_percentage,
    &flightControlSystem_B.Logging, &flightControlSystem_DW.Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* Outport: '<Root>/Actuators' */
  flightControlSystem_Y.Actuators[0] = motors_outport[0];
  flightControlSystem_Y.Actuators[1] = motors_outport[1];
  flightControlSystem_Y.Actuators[2] = motors_outport[2];
  flightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  Abs: '<S6>/Abs'
   *  Abs: '<S6>/Abs1'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   */
  flightControlSystem_B.LogicalOperator3 = (((real32_T)fabs
    (flightControlSystem_B.estimator.X) >
    flightControlSystem_P.CompareToConstant_const) || ((real32_T)fabs
    (flightControlSystem_B.estimator.Y) >
    flightControlSystem_P.CompareToConstant1_const));

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  rtb_DataTypeConversion = flightControlSystem_B.LogicalOperator3;

  /* Logic: '<S6>/Logical Operator3' incorporates:
   *  Abs: '<S6>/Abs2'
   *  Abs: '<S6>/Abs3'
   *  Abs: '<S6>/Abs4'
   *  Abs: '<S6>/Abs5'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  Gain: '<S6>/Gain'
   *  Gain: '<S6>/Gain1'
   *  Inport: '<Root>/Sensors'
   *  Logic: '<S6>/Logical Operator1'
   *  Logic: '<S6>/Logical Operator2'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  Sum: '<S6>/Subtract'
   *  Sum: '<S6>/Subtract1'
   */
  flightControlSystem_B.LogicalOperator3 = ((((real32_T)fabs
    (sensor_inport.VisionSensors.opticalFlow_data[0]) >
    flightControlSystem_P.CompareToConstant4_const) && ((real32_T)fabs
    (flightControlSystem_P.Gain_Gain *
     sensor_inport.VisionSensors.opticalFlow_data[0] -
     flightControlSystem_B.estimator.dx) >
    flightControlSystem_P.CompareToConstant2_const)) || (((real32_T)fabs
    (flightControlSystem_P.Gain1_Gain *
     sensor_inport.VisionSensors.opticalFlow_data[1] -
     flightControlSystem_B.estimator.dy) >
    flightControlSystem_P.CompareToConstant3_const) && ((real32_T)fabs
    (sensor_inport.VisionSensors.opticalFlow_data[1]) >
    flightControlSystem_P.CompareToConstant5_const)));

  /* If: '<S6>/If' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion1'
   */
  if (rtb_DataTypeConversion > 0) {
    /* Outputs for IfAction SubSystem: '<S6>/Geofencing error' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &flightControlSystem_P.Geofencingerror);

    /* End of Outputs for SubSystem: '<S6>/Geofencing error' */
  } else if (flightControlSystem_B.LogicalOperator3) {
    /* Outputs for IfAction SubSystem: '<S6>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &flightControlSystem_P.estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S6>/estimator//Optical flow error' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/Normal condition' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &flightControlSystem_P.Normalcondition);

    /* End of Outputs for SubSystem: '<S6>/Normal condition' */
  }

  /* End of If: '<S6>/If' */

  /* Sum: '<S19>/FixPt Sum1' incorporates:
   *  Constant: '<S19>/FixPt Constant'
   */
  flightControlSystem_B.rtb_FixPtSum1_c = flightControlSystem_B.rtb_Output_k +
    flightControlSystem_P.FixPtConstant_Value;

  /* Switch: '<S20>/FixPt Switch' incorporates:
   *  Constant: '<S20>/Constant'
   *  UnitDelay: '<S7>/Output'
   */
  if (flightControlSystem_B.rtb_FixPtSum1_c >
      flightControlSystem_P.WrapToZero_Threshold) {
    flightControlSystem_DW.Output_DSTATE =
      flightControlSystem_P.Constant_Value_p;
  } else {
    flightControlSystem_DW.Output_DSTATE = flightControlSystem_B.rtb_FixPtSum1_c;
  }

  /* End of Switch: '<S20>/FixPt Switch' */
  /* Outport: '<Root>/Flag' */
  flightControlSystem_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(flightControlSystem_M->rtwLogInfo,
                      (flightControlSystem_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystem_M)-flightControlSystem_M->Timing.t[0])
          > flightControlSystem_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  flightControlSystem_M->Timing.t[0] =
    (++flightControlSystem_M->Timing.clockTick0) *
    flightControlSystem_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.005s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    flightControlSystem_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&flightControlSystem_M->solverInfo,
                          &flightControlSystem_M->Timing.simTimeStep);
    rtsiSetTPtr(&flightControlSystem_M->solverInfo, &rtmGetTPtr
                (flightControlSystem_M));
    rtsiSetStepSizePtr(&flightControlSystem_M->solverInfo,
                       &flightControlSystem_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&flightControlSystem_M->solverInfo,
                          (&rtmGetErrorStatus(flightControlSystem_M)));
    rtsiSetRTModelPtr(&flightControlSystem_M->solverInfo, flightControlSystem_M);
  }

  rtsiSetSimTimeStep(&flightControlSystem_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&flightControlSystem_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(flightControlSystem_M, &flightControlSystem_M->Timing.tArray[0]);
  rtmSetTFinal(flightControlSystem_M, 40.0);
  flightControlSystem_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    flightControlSystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(flightControlSystem_M->rtwLogInfo, "tout");
    rtliSetLogX(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(flightControlSystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(flightControlSystem_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(flightControlSystem_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(flightControlSystem_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &flightControlSystem_Y.Actuators[0],
        &flightControlSystem_Y.Flag
      };

      rtliSetLogYSignalPtrs(flightControlSystem_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        4,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        4,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_UINT8
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "motors",
        "flag" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "flightControlSystem/Actuators",
        "flightControlSystem/Flag" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          2,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(flightControlSystem_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
    }

    rtliSetLogY(flightControlSystem_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_T));

  /* external inputs */
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));

  /* external outputs */
  (void) memset((void *)&flightControlSystem_Y, 0,
                sizeof(ExtY_flightControlSystem_T));

  /* Model Initialize fcn for ModelReference Block: '<S1>/controller' */
  flightController_g_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize fcn for ModelReference Block: '<S1>/estimator' */
  stateEstimator_o_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flightControlSystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flightControlSystem_M), flightControlSystem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flightControlSystem_M)));

  /* Start for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging_Start(flightControlSystem_M,
    &flightControlSystem_DW.Logging);

  /* End of Start for SubSystem: '<S1>/Logging' */

  /* InitializeConditions for UnitDelay: '<S7>/Output' */
  flightControlSystem_DW.Output_DSTATE =
    flightControlSystem_P.Output_InitialCondition;

  /* SystemInitialize for ModelReference: '<S1>/estimator' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  stateEstimator_Init();

  /* SystemInitialize for ModelReference: '<S1>/controller' */
  flightController_Init();

  /* SystemInitialize for Merge: '<S6>/Merge' */
  flag_outport = flightControlSystem_P.Merge_InitialOutput;
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
