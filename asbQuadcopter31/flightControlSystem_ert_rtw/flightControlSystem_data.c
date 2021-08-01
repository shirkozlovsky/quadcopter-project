/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_data.c
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

/* Model block global parameters (default storage) */
struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors = {
  { 1.00596, 1.00383, 0.99454 },

  { 0.99861, 1.00644, 0.99997 },

  {
    { 0.0, 0.0, 0.0 },

    { 0.0, 0.0, 0.0 },
    190.0,
    0.707,

    { 1.00596, 0.0, 0.0, 0.0, 1.00383, 0.0, 0.0, 0.0, 0.99454 },

    { 0.09, -0.06, 0.33699999999999974 },

    { -50.0, -50.0, -50.0, 50.0, 50.0, 50.0 },
    190.0,
    0.707,

    { 0.99861, 0.0, 0.0, 0.0, 1.00644, 0.0, 0.0, 0.0, 0.99997 },

    { -0.0095, -0.0075, 0.0015 },

    { 0.0, 0.0, 0.0 },

    { -10.0, -10.0, -10.0, 10.0, 10.0, 10.0 },

    { 41.0, 41.0, 41.0, 41.0, 41.0, 41.0 },

    { 0.8, 0.8, 0.8, 0.025, 0.025, 0.025 },

    { 0.00021831529882618725, 0.00018641345254680647, 0.00037251068300213613,
      1.0651514622688397e-8, 1.3021327403798377e-8, 1.1929474437781302e-8 }
  },

  {
    1.0,
    41.0
  },
  -99.0,
  -9.0,

  {
    { -99.0, 0.0, 0.0, -9.0 },
    0.0,

    { 3.5, 70.0 }
  },
  1.0,
  1.225,
  12.01725,
  101270.95,

  { 0.99407531114557246, 0.99618461293246863, 1.0054899752649467,
    1.0013919347893572, 0.99360120821906917, 1.0000300009000269 },
  0.44,
  0.05
} ;                                    /* Variable: Sensors
                                        * Referenced by: '<S1>/estimator'
                                        */

real_T rtP_Pitch1StepTime = 5.0;       /* Variable: Pitch1StepTime
                                        * Referenced by: '<S2>/Pitch1'
                                        */
real_T rtP_Pitch1Value = 0.0;          /* Variable: Pitch1Value
                                        * Referenced by: '<S2>/Pitch1'
                                        */
real_T rtP_Pitch2StepTime = 6.0;       /* Variable: Pitch2StepTime
                                        * Referenced by: '<S2>/Pitch2'
                                        */
real_T rtP_Pitch2Value = -0.0;         /* Variable: Pitch2Value
                                        * Referenced by: '<S2>/Pitch2'
                                        */
real_T rtP_Pitch3StepTime = 0.0;       /* Variable: Pitch3StepTime
                                        * Referenced by: '<S2>/Pitch3'
                                        */
real_T rtP_Pitch3Value = 0.0;          /* Variable: Pitch3Value
                                        * Referenced by: '<S2>/Pitch3'
                                        */
real_T rtP_Roll1StepTime = 2.0;        /* Variable: Roll1StepTime
                                        * Referenced by: '<S2>/Roll1'
                                        */
real_T rtP_Roll1Value = -0.1;          /* Variable: Roll1Value
                                        * Referenced by: '<S2>/Roll1'
                                        */
real_T rtP_Roll2StepTime = 10.0;       /* Variable: Roll2StepTime
                                        * Referenced by: '<S2>/Roll2'
                                        */
real_T rtP_Roll2Value = 0.0;           /* Variable: Roll2Value
                                        * Referenced by: '<S2>/Roll2'
                                        */
real_T rtP_Roll3StepTime = 0.0;        /* Variable: Roll3StepTime
                                        * Referenced by: '<S2>/Roll3'
                                        */
real_T rtP_Roll3Value = 0.0;           /* Variable: Roll3Value
                                        * Referenced by: '<S2>/Roll3'
                                        */
real_T rtP_X1StepTime = 3.0;           /* Variable: X1StepTime
                                        * Referenced by: '<S2>/X1'
                                        */
real_T rtP_X1Value = 0.0;              /* Variable: X1Value
                                        * Referenced by: '<S2>/X1'
                                        */
real_T rtP_X2StepTime = 0.0;           /* Variable: X2StepTime
                                        * Referenced by: '<S2>/X2'
                                        */
real_T rtP_X2Value = -0.0;             /* Variable: X2Value
                                        * Referenced by: '<S2>/X2'
                                        */
real_T rtP_X3StepTime = 0.0;           /* Variable: X3StepTime
                                        * Referenced by: '<S2>/X3'
                                        */
real_T rtP_X3Value = 0.0;              /* Variable: X3Value
                                        * Referenced by: '<S2>/X3'
                                        */
real_T rtP_Y1StepTime = 5.0;           /* Variable: Y1StepTime
                                        * Referenced by: '<S2>/Y1'
                                        */
real_T rtP_Y1Value = 0.0;              /* Variable: Y1Value
                                        * Referenced by: '<S2>/Y1'
                                        */
real_T rtP_Y2StepTime = 0.0;           /* Variable: Y2StepTime
                                        * Referenced by: '<S2>/Y2'
                                        */
real_T rtP_Y2Value = 0.0;              /* Variable: Y2Value
                                        * Referenced by: '<S2>/Y2'
                                        */
real_T rtP_Y3StepTime = 0.0;           /* Variable: Y3StepTime
                                        * Referenced by: '<S2>/Y3'
                                        */
real_T rtP_Y3Value = 0.0;              /* Variable: Y3Value
                                        * Referenced by: '<S2>/Y3'
                                        */
real_T rtP_Yaw1StepTime = 8.0;         /* Variable: Yaw1StepTime
                                        * Referenced by: '<S2>/Yaw1'
                                        */
real_T rtP_Yaw1Value = 0.0;            /* Variable: Yaw1Value
                                        * Referenced by: '<S2>/Yaw1'
                                        */
real_T rtP_Yaw2StepTime = 15.0;        /* Variable: Yaw2StepTime
                                        * Referenced by: '<S2>/Yaw2'
                                        */
real_T rtP_Yaw2Value = 0.0;            /* Variable: Yaw2Value
                                        * Referenced by: '<S2>/Yaw2'
                                        */
real_T rtP_Yaw3StepTime = 0.0;         /* Variable: Yaw3StepTime
                                        * Referenced by: '<S2>/Yaw3'
                                        */
real_T rtP_Yaw3Value = 0.0;            /* Variable: Yaw3Value
                                        * Referenced by: '<S2>/Yaw3'
                                        */
real_T rtP_Z1StepTime = 0.0;           /* Variable: Z1StepTime
                                        * Referenced by: '<S2>/Z1'
                                        */
real_T rtP_Z1Value = -1.5;             /* Variable: Z1Value
                                        * Referenced by: '<S2>/Z1'
                                        */
real_T rtP_Z2StepTime = 2.0;           /* Variable: Z2StepTime
                                        * Referenced by: '<S2>/Z2'
                                        */
real_T rtP_Z2Value = -0.0;             /* Variable: Z2Value
                                        * Referenced by: '<S2>/Z2'
                                        */
real_T rtP_Z3StepTime = 0.0;           /* Variable: Z3StepTime
                                        * Referenced by: '<S2>/Z3'
                                        */
real_T rtP_Z3Value = 0.0;              /* Variable: Z3Value
                                        * Referenced by: '<S2>/Z3'
                                        */
real_T rtP_takeOffDuration = 1.0;      /* Variable: takeOffDuration
                                        * Referenced by: '<S3>/Constant'
                                        */

/* Block parameters (default storage) */
P_flightControlSystem_T flightControlSystem_P = {
  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S10>/Constant'
   */
  10.0F,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S11>/Constant'
   */
  10.0F,

  /* Mask Parameter: CompareToConstant4_const
   * Referenced by: '<S14>/Constant'
   */
  0.01F,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S12>/Constant'
   */
  6.0F,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S13>/Constant'
   */
  6.0F,

  /* Mask Parameter: CompareToConstant5_const
   * Referenced by: '<S15>/Constant'
   */
  0.01F,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S20>/FixPt Switch'
   */
  4294967295U,

  /* Expression: 0
   * Referenced by: '<S2>/X1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/X2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/X3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Y1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Y2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Y3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Z1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Z2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Z3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Roll1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Roll2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Roll3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Pitch1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Pitch2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Pitch3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Yaw1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Yaw2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Yaw3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/Constant'
   */
  0.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S6>/Gain'
   */
  1.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S6>/Gain1'
   */
  1.0F,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S7>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S19>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S20>/Constant'
   */
  0U,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S6>/Merge'
   */
  0U,

  /* Start of '<S6>/Normal condition' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S17>/Constant'
     */
    0U
  }
  ,

  /* End of '<S6>/Normal condition' */

  /* Start of '<S6>/estimator//Optical flow error' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S18>/Constant'
     */
    99U
  }
  ,

  /* End of '<S6>/estimator//Optical flow error' */

  /* Start of '<S6>/Geofencing error' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S16>/Constant'
     */
    1U
  }
  /* End of '<S6>/Geofencing error' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
