/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.h
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

#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
# define flightControlSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* flightControlSystem_COMMON_INCLUDES_ */

#include "flightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#define stateEstimator_MDLREF_HIDE_CHILD_
#include "stateEstimator.h"
#define flightController_MDLREF_HIDE_CHILD_
#include "flightController.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals for system '<S1>/Logging' */
typedef struct {
  real_T DataTypeConversion4[12];      /* '<S8>/Data Type Conversion4' */
  real_T TmpSignalConversionAtToWorkspace6Inport1[10];
  real_T TmpSignalConversionAtToWorkspace3Inport1[9];
  real_T TmpSignalConversionAtToWorkspace4Inport1[8];
  real_T DataTypeConversion12[8];      /* '<S8>/Data Type Conversion12' */
} B_Logging_flightControlSystem_T;

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S8>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S8>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S8>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S8>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S8>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S8>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S8>/To Workspace' */
} DW_Logging_flightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  statesEstim_t estimator;             /* '<S1>/estimator' */
  sensordata_t BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1;
  real32_T controller_o2[8];           /* '<S1>/controller' */
  CommandBus BusCreator;               /* '<S1>/Bus Creator' */
  real32_T DataTypeConversion3[3];     /* '<S1>/Data Type Conversion3' */
  real_T Z;                            /* '<S2>/Sum3' */
  real_T currentTime;
  real_T currentTime_m;
  real_T currentTime_c;
  real_T currentTime_tmp;
  real_T roll;                         /* '<S2>/Sum2' */
  real_T pitch;                        /* '<S2>/Sum1' */
  real_T yaw;                          /* '<S2>/Sum' */
  uint32_T rtb_Output_k;
  uint32_T rtb_FixPtSum1_c;
  boolean_T LogicalOperator3;          /* '<S6>/Logical Operator3' */
  B_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} B_flightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[3];
  } degScope1_PWORK;                   /* '<S2>/deg Scope1' */

  struct {
    void *LoggedData;
  } ZScope_PWORK;                      /* '<S2>/Z Scope' */

  uint32_T Output_DSTATE;              /* '<S7>/Output' */
  DW_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_flightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_flightControlSystem_T;

/* Parameters for system: '<S6>/Geofencing error' */
struct P_Geofencingerror_flightControlSystem_T_ {
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S16>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_flightControlSystem_T_ {
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S10>/Constant'
                                        */
  real32_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S11>/Constant'
                                        */
  real32_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S12>/Constant'
                                        */
  real32_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S13>/Constant'
                                        */
  real32_T CompareToConstant5_const;   /* Mask Parameter: CompareToConstant5_const
                                        * Referenced by: '<S15>/Constant'
                                        */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S20>/FixPt Switch'
                                        */
  real_T X1_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/X1'
                                        */
  real_T X2_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/X2'
                                        */
  real_T X3_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/X3'
                                        */
  real_T Y1_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Y1'
                                        */
  real_T Y2_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Y2'
                                        */
  real_T Y3_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Y3'
                                        */
  real_T Z1_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Z1'
                                        */
  real_T Z2_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Z2'
                                        */
  real_T Z3_Y0;                        /* Expression: 0
                                        * Referenced by: '<S2>/Z3'
                                        */
  real_T Roll1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S2>/Roll1'
                                        */
  real_T Roll2_Y0;                     /* Expression: 0
                                        * Referenced by: '<S2>/Roll2'
                                        */
  real_T Roll3_Y0;                     /* Expression: 0
                                        * Referenced by: '<S2>/Roll3'
                                        */
  real_T Pitch1_Y0;                    /* Expression: 0
                                        * Referenced by: '<S2>/Pitch1'
                                        */
  real_T Pitch2_Y0;                    /* Expression: 0
                                        * Referenced by: '<S2>/Pitch2'
                                        */
  real_T Pitch3_Y0;                    /* Expression: 0
                                        * Referenced by: '<S2>/Pitch3'
                                        */
  real_T Yaw1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Yaw1'
                                        */
  real_T Yaw2_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Yaw2'
                                        */
  real_T Yaw3_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Yaw3'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S6>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S6>/Gain1'
                                        */
  uint32_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S7>/Output'
                                        */
  uint32_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S19>/FixPt Constant'
                                        */
  uint32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint8_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S6>/Merge'
                                        */
  P_Geofencingerror_flightControlSystem_T Normalcondition;/* '<S6>/Normal condition' */
  P_Geofencingerror_flightControlSystem_T estimatorOpticalflowerror;/* '<S6>/estimator//Optical flow error' */
  P_Geofencingerror_flightControlSystem_T Geofencingerror;/* '<S6>/Geofencing error' */
};

/* Real-time Model Data Structure */
struct tag_RTM_flightControlSystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_flightControlSystem_T flightControlSystem_P;

/* Block signals (default storage) */
extern B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
extern DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_flightControlSystem_T flightControlSystem_Y;

/* Model block global parameters (default storage) */
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors;/* Variable: Sensors
                                                  * Referenced by: '<S1>/estimator'
                                                  */
extern real_T rtP_Pitch1StepTime;      /* Variable: Pitch1StepTime
                                        * Referenced by: '<S2>/Pitch1'
                                        */
extern real_T rtP_Pitch1Value;         /* Variable: Pitch1Value
                                        * Referenced by: '<S2>/Pitch1'
                                        */
extern real_T rtP_Pitch2StepTime;      /* Variable: Pitch2StepTime
                                        * Referenced by: '<S2>/Pitch2'
                                        */
extern real_T rtP_Pitch2Value;         /* Variable: Pitch2Value
                                        * Referenced by: '<S2>/Pitch2'
                                        */
extern real_T rtP_Pitch3StepTime;      /* Variable: Pitch3StepTime
                                        * Referenced by: '<S2>/Pitch3'
                                        */
extern real_T rtP_Pitch3Value;         /* Variable: Pitch3Value
                                        * Referenced by: '<S2>/Pitch3'
                                        */
extern real_T rtP_Roll1StepTime;       /* Variable: Roll1StepTime
                                        * Referenced by: '<S2>/Roll1'
                                        */
extern real_T rtP_Roll1Value;          /* Variable: Roll1Value
                                        * Referenced by: '<S2>/Roll1'
                                        */
extern real_T rtP_Roll2StepTime;       /* Variable: Roll2StepTime
                                        * Referenced by: '<S2>/Roll2'
                                        */
extern real_T rtP_Roll2Value;          /* Variable: Roll2Value
                                        * Referenced by: '<S2>/Roll2'
                                        */
extern real_T rtP_Roll3StepTime;       /* Variable: Roll3StepTime
                                        * Referenced by: '<S2>/Roll3'
                                        */
extern real_T rtP_Roll3Value;          /* Variable: Roll3Value
                                        * Referenced by: '<S2>/Roll3'
                                        */
extern real_T rtP_X1StepTime;          /* Variable: X1StepTime
                                        * Referenced by: '<S2>/X1'
                                        */
extern real_T rtP_X1Value;             /* Variable: X1Value
                                        * Referenced by: '<S2>/X1'
                                        */
extern real_T rtP_X2StepTime;          /* Variable: X2StepTime
                                        * Referenced by: '<S2>/X2'
                                        */
extern real_T rtP_X2Value;             /* Variable: X2Value
                                        * Referenced by: '<S2>/X2'
                                        */
extern real_T rtP_X3StepTime;          /* Variable: X3StepTime
                                        * Referenced by: '<S2>/X3'
                                        */
extern real_T rtP_X3Value;             /* Variable: X3Value
                                        * Referenced by: '<S2>/X3'
                                        */
extern real_T rtP_Y1StepTime;          /* Variable: Y1StepTime
                                        * Referenced by: '<S2>/Y1'
                                        */
extern real_T rtP_Y1Value;             /* Variable: Y1Value
                                        * Referenced by: '<S2>/Y1'
                                        */
extern real_T rtP_Y2StepTime;          /* Variable: Y2StepTime
                                        * Referenced by: '<S2>/Y2'
                                        */
extern real_T rtP_Y2Value;             /* Variable: Y2Value
                                        * Referenced by: '<S2>/Y2'
                                        */
extern real_T rtP_Y3StepTime;          /* Variable: Y3StepTime
                                        * Referenced by: '<S2>/Y3'
                                        */
extern real_T rtP_Y3Value;             /* Variable: Y3Value
                                        * Referenced by: '<S2>/Y3'
                                        */
extern real_T rtP_Yaw1StepTime;        /* Variable: Yaw1StepTime
                                        * Referenced by: '<S2>/Yaw1'
                                        */
extern real_T rtP_Yaw1Value;           /* Variable: Yaw1Value
                                        * Referenced by: '<S2>/Yaw1'
                                        */
extern real_T rtP_Yaw2StepTime;        /* Variable: Yaw2StepTime
                                        * Referenced by: '<S2>/Yaw2'
                                        */
extern real_T rtP_Yaw2Value;           /* Variable: Yaw2Value
                                        * Referenced by: '<S2>/Yaw2'
                                        */
extern real_T rtP_Yaw3StepTime;        /* Variable: Yaw3StepTime
                                        * Referenced by: '<S2>/Yaw3'
                                        */
extern real_T rtP_Yaw3Value;           /* Variable: Yaw3Value
                                        * Referenced by: '<S2>/Yaw3'
                                        */
extern real_T rtP_Z1StepTime;          /* Variable: Z1StepTime
                                        * Referenced by: '<S2>/Z1'
                                        */
extern real_T rtP_Z1Value;             /* Variable: Z1Value
                                        * Referenced by: '<S2>/Z1'
                                        */
extern real_T rtP_Z2StepTime;          /* Variable: Z2StepTime
                                        * Referenced by: '<S2>/Z2'
                                        */
extern real_T rtP_Z2Value;             /* Variable: Z2Value
                                        * Referenced by: '<S2>/Z2'
                                        */
extern real_T rtP_Z3StepTime;          /* Variable: Z3StepTime
                                        * Referenced by: '<S2>/Z3'
                                        */
extern real_T rtP_Z3Value;             /* Variable: Z3Value
                                        * Referenced by: '<S2>/Z3'
                                        */
extern real_T rtP_takeOffDuration;     /* Variable: takeOffDuration
                                        * Referenced by: '<S3>/Constant'
                                        */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CommandBus cmd_inport;          /* '<Root>/AC cmd' */
extern SensorsBus sensor_inport;       /* '<Root>/Sensors' */
extern real32_T motors_outport[4];     /* '<S1>/controller' */
extern uint8_T flag_outport;           /* '<S6>/Merge' */

/* Model entry point functions */
extern void flightControlSystem_initialize(void);
extern void flightControlSystem_step(void);
extern void flightControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_flightControlSystem_T *const flightControlSystem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flightControlSystem'
 * '<S1>'   : 'flightControlSystem/Flight Control System'
 * '<S2>'   : 'flightControlSystem/Flight Control System/CMD1'
 * '<S3>'   : 'flightControlSystem/Flight Control System/Compare To Constant'
 * '<S4>'   : 'flightControlSystem/Flight Control System/Compare To Zero'
 * '<S5>'   : 'flightControlSystem/Flight Control System/Compare To Zero1'
 * '<S6>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S7>'   : 'flightControlSystem/Flight Control System/Live Time  Ticks'
 * '<S8>'   : 'flightControlSystem/Flight Control System/Logging'
 * '<S9>'   : 'flightControlSystem/Flight Control System/sensordata_group'
 * '<S10>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant'
 * '<S11>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant1'
 * '<S12>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant2'
 * '<S13>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant3'
 * '<S14>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant4'
 * '<S15>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant5'
 * '<S16>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Geofencing error'
 * '<S17>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Normal condition'
 * '<S18>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/estimator//Optical flow error'
 * '<S19>'  : 'flightControlSystem/Flight Control System/Live Time  Ticks/Increment Real World'
 * '<S20>'  : 'flightControlSystem/Flight Control System/Live Time  Ticks/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_flightControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
