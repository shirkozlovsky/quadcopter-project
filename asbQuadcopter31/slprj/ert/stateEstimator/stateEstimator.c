/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.c
 *
 * Code generated for Simulink model 'stateEstimator'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Nov 28 09:55:55 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateEstimator.h"
#include "stateEstimator_private.h"
#include "rt_powf_snf.h"

P_stateEstimator_T stateEstimator_P_g = {
  /* Mask Parameter: outlierJump_const
   * Referenced by: '<S65>/Constant'
   */
  0.3,

  /* Mask Parameter: currentEstimateVeryOffFromPressure_const
   * Referenced by: '<S63>/Constant'
   */
  0.8,

  /* Mask Parameter: currentStateVeryOffsonarflt_const
   * Referenced by: '<S64>/Constant'
   */
  0.4,

  /* Mask Parameter: outlierBelowFloor_const
   * Referenced by: '<S17>/Constant'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
   * Referenced by: '<S77>/UD'
   */
  0.0F,

  /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
   * Referenced by: '<S185>/Constant'
   */
  -99.0F,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S6>/Constant'
   */
  9.79038F,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S7>/Constant'
   */
  9.82962F,

  /* Mask Parameter: maxp_const
   * Referenced by: '<S80>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxq_const
   * Referenced by: '<S82>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxw1_const
   * Referenced by: '<S84>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxw2_const
   * Referenced by: '<S85>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxdw1_const
   * Referenced by: '<S78>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxdw2_const
   * Referenced by: '<S79>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxp2_const
   * Referenced by: '<S81>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxq2_const
   * Referenced by: '<S83>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxw3_const
   * Referenced by: '<S86>/Constant'
   */
  5.0F,

  /* Mask Parameter: maxw4_const
   * Referenced by: '<S87>/Constant'
   */
  5.0F,

  /* Mask Parameter: minHeightforOF_const
   * Referenced by: '<S88>/Constant'
   */
  -0.4F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S74>/Constant'
   */
  0.0F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S75>/Constant'
   */
  0.0F,

  /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
   * Referenced by: '<S72>/Constant'
   */
  -0.4F,

  /* Mask Parameter: checkifPosavailable_const
   * Referenced by: '<S180>/Constant'
   */
  -99.0F,

  /* Mask Parameter: maxp3_const
   * Referenced by: '<S181>/Constant'
   */
  0.18F,

  /* Mask Parameter: maxq3_const
   * Referenced by: '<S182>/Constant'
   */
  0.18F,

  /* Mask Parameter: planarjumpsVISPOS_const
   * Referenced by: '<S183>/Constant'
   */
  1.0F,

  /* Expression: 0
   * Referenced by: '<S60>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S61>/deltax'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S136>/KalmanGainM'
   */
  { 0.0057568600814408644, 0.0, 0.0, 0.0057568600814408644 },

  /* Expression: pInitialization.M
   * Referenced by: '<S89>/KalmanGainM'
   */
  { 0.12546560898608974, 0.0, 0.0, 0.12546560898608974 },

  /* Expression: pInitialization.A
   * Referenced by: '<S14>/A'
   */
  { 1.0, 0.0, 0.005, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S89>/KalmanGainL'
   */
  { 0.12546560898608974, 0.0, 0.0, 0.12546560898608974 },

  /* Expression: pInitialization.L
   * Referenced by: '<S136>/KalmanGainL'
   */
  { 0.0057568600814408644, 0.0, 0.0, 0.0057568600814408644 },

  /* Expression: [0 0 -g]
   * Referenced by: '<S69>/gravity'
   */
  { 0.0, 0.0, -9.81 },

  /* Expression: [0 0 g]
   * Referenced by: '<S3>/gravity'
   */
  { 0.0, 0.0, 9.81 },

  /* Expression: -inf
   * Referenced by: '<S15>/SaturationSonar'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Delay2'
   */
  0.0,

  /* Expression: Estimator.alt.filterSonarNum
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  { 3.7568380197861018E-6, 1.1270514059358305E-5, 1.1270514059358305E-5,
    3.7568380197861018E-6 },

  /* Expression: Estimator.alt.filterSonarDen
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  { 1.0, -2.9371707284498907, 2.8762997234793319, -0.939098940325283 },

  /* Expression: 0
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  0.0,

  /* Expression: pInitialization.D
   * Referenced by: '<S14>/D'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S18>/KalmanGainM'
   */
  { 0.0262414206418705, 0.069776736071493789 },

  /* Expression: pInitialization.C
   * Referenced by: '<S14>/C'
   */
  { 1.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S14>/X0'
   */
  { -0.046, 0.0 },

  /* Expression: Estimator.pos.accelerationInputGain
   * Referenced by: '<S69>/gainaccinput'
   */
  0.2,

  /* Expression: pInitialization.B
   * Referenced by: '<S14>/B'
   */
  { 0.0, 0.005 },

  /* Expression: pInitialization.L
   * Referenced by: '<S18>/KalmanGainL'
   */
  { 0.026590304322227969, 0.069776736071493789 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S18>/CovarianceZ'
   */
  { 0.00262414206418705, 0.0069776736071493787, 0.0069776736071493787,
    0.037607692935055843 },

  /* Expression: pInitialization.P0
   * Referenced by: '<S14>/P0'
   */
  { 0.0026948589925819195, 0.0071657120718246594, 0.0071657120718246594,
    0.038107692935055872 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S89>/CovarianceZ'
   */
  { 0.6273280449304488, 0.0, 0.0, 0.6273280449304488 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S136>/CovarianceZ'
   */
  { 0.0017270580244322594, 0.0, 0.0, 0.0017270580244322594 },

  /* Expression: pInitialization.G
   * Referenced by: '<S14>/G'
   */
  { 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S18>/ConstantP'
   */
  0.0,

  /* Expression: pInitialization.H
   * Referenced by: '<S14>/H'
   */
  0.0,

  /* Expression: pInitialization.N
   * Referenced by: '<S14>/N'
   */
  0.0,

  /* Expression: pInitialization.Q
   * Referenced by: '<S14>/Q'
   */
  0.0005,

  /* Expression: pInitialization.R
   * Referenced by: '<S14>/R'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S89>/ConstantP'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S136>/ConstantP'
   */
  0.0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S8>/Gain1'
   */
  0.001F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S8>/Gain'
   */
  0.999F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S8>/Gain2'
   */
  0.101936802F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S8>/Gain3'
   */
  0.001F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S8>/Gain4'
   */
  0.999F,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S9>/Gain'
   */
  0.8F,

  /* Computed Parameter: Gain1_Gain_k
   * Referenced by: '<S9>/Gain1'
   */
  0.2F,

  /* Expression: single(0)
   * Referenced by: '<S12>/Constant'
   */
  0.0F,

  /* Expression: single(Estimator.complementaryFilterInit)
   * Referenced by: '<S2>/Memory'
   */
  { 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S12>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
   * Referenced by: '<S5>/Assuming that calib was done level!'
   */
  { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: inverseIMU_gain_Gain
   * Referenced by: '<S5>/inverseIMU_gain'
   */
  { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F },

  /* Computed Parameter: IIR_IMUgyro_r_NumCoef
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIR_IMUgyro_r_DenCoef
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIR_IMUgyro_r_InitialStates
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_b
   * Referenced by: '<S2>/Gain'
   */
  0.005F,

  /* Computed Parameter: FIR_IMUaccel_InitialStates
   * Referenced by: '<S5>/FIR_IMUaccel'
   */
  0.0F,

  /* Computed Parameter: FIR_IMUaccel_Coefficients
   * Referenced by: '<S5>/FIR_IMUaccel'
   */
  { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
    0.0264077242F },

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S2>/Constant'
   */
  2.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S2>/Merge'
   */
  0.0F,

  /* Computed Parameter: C_Value_f
   * Referenced by: '<S71>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: D_Value_f
   * Referenced by: '<S71>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: C_Value_p
   * Referenced by: '<S133>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: D_Value_b
   * Referenced by: '<S133>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: A_Value_c
   * Referenced by: '<S71>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_p
   * Referenced by: '<S71>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: A_Value_b
   * Referenced by: '<S133>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_pu
   * Referenced by: '<S133>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: invertzaxisGain_Gain
   * Referenced by: '<S3>/invertzaxisGain'
   */
  -1.0F,

  /* Computed Parameter: prsToAltGain_Gain
   * Referenced by: '<S3>/prsToAltGain'
   */
  0.0832137167F,

  /* Computed Parameter: pressureFilter_IIR_NumCoef
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

  /* Computed Parameter: pressureFilter_IIR_DenCoef
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

  /* Computed Parameter: pressureFilter_IIR_InitialStates
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  0.0F,

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S1>/Delay1'
   */
  0.0F,

  /* Computed Parameter: IIRgyroz_NumCoef
   * Referenced by: '<S70>/IIRgyroz'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIRgyroz_DenCoef
   * Referenced by: '<S70>/IIRgyroz'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIRgyroz_InitialStates
   * Referenced by: '<S70>/IIRgyroz'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S77>/TSamp'
   */
  200.0F,

  /* Computed Parameter: opticalFlowToVelocity_gain_Gain
   * Referenced by: '<S67>/opticalFlowToVelocity_gain'
   */
  20.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S67>/Delay'
   */
  0.0F,

  /* Computed Parameter: X0_Value_e
   * Referenced by: '<S71>/X0'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S134>/Constant'
   */
  2.0F,

  /* Computed Parameter: Delay_InitialCondition_n
   * Referenced by: '<S68>/Delay'
   */
  0.0F,

  /* Computed Parameter: X0_Value_j
   * Referenced by: '<S133>/X0'
   */
  { 0.1F, 0.0F },

  /* Computed Parameter: SimplyIntegrateVelocity_gainval
   * Referenced by: '<S68>/SimplyIntegrateVelocity'
   */
  0.005F,

  /* Computed Parameter: SimplyIntegrateVelocity_IC
   * Referenced by: '<S68>/SimplyIntegrateVelocity'
   */
  0.0F,

  /* Computed Parameter: UseIPPosSwitch_Threshold
   * Referenced by: '<S68>/UseIPPosSwitch'
   */
  0.0F,

  /* Computed Parameter: P0_Value_m
   * Referenced by: '<S71>/P0'
   */
  { 0.717328072F, 0.0F, 0.0F, 0.717328072F },

  /* Computed Parameter: G_Value_h
   * Referenced by: '<S71>/G'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: H_Value_c
   * Referenced by: '<S71>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_g
   * Referenced by: '<S71>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_f
   * Referenced by: '<S71>/Q'
   */
  { 0.09F, 0.0F, 0.0F, 0.09F },

  /* Computed Parameter: R_Value_k
   * Referenced by: '<S71>/R'
   */
  { 5.0F, 0.0F, 0.0F, 5.0F },

  /* Computed Parameter: P0_Value_h
   * Referenced by: '<S133>/P0'
   */
  { 0.00173705805F, 0.0F, 0.0F, 0.00173705805F },

  /* Computed Parameter: G_Value_p
   * Referenced by: '<S133>/G'
   */
  { 0.1F, 0.0F, 0.0F, 0.1F },

  /* Computed Parameter: H_Value_d
   * Referenced by: '<S133>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_j
   * Referenced by: '<S133>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_n
   * Referenced by: '<S133>/Q'
   */
  { 0.001F, 0.0F, 0.0F, 0.001F },

  /* Computed Parameter: R_Value_kf
   * Referenced by: '<S133>/R'
   */
  { 0.3F, 0.0F, 0.0F, 0.3F },

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S36>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S107>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S154>/Constant'
   */
  0.0F,

  /* Computed Parameter: Delay2_DelayLength
   * Referenced by: '<S3>/Delay2'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength
   * Referenced by: '<S14>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay1_DelayLength
   * Referenced by: '<S1>/Delay1'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S67>/Delay'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_l
   * Referenced by: '<S71>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S68>/Delay'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_e
   * Referenced by: '<S133>/MemoryX'
   */
  1U,

  /* Expression: false()
   * Referenced by: '<S71>/Reset'
   */
  0,

  /* Expression: false()
   * Referenced by: '<S133>/Reset'
   */
  0,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting
   * Referenced by: '<S14>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_i
   * Referenced by: '<S71>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_b
   * Referenced by: '<S133>/ManualSwitchPZ'
   */
  1U,

  /* Start of '<S133>/UseCurrentEstimator' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S179>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S133>/UseCurrentEstimator' */

  /* Start of '<S153>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S178>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  ,

  /* End of '<S153>/MeasurementUpdate' */

  /* Start of '<S71>/UseCurrentEstimator' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S132>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S71>/UseCurrentEstimator' */

  /* Start of '<S106>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S131>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  /* End of '<S106>/MeasurementUpdate' */
};

MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

/* Block signals (default storage) */
B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
DW_stateEstimator_f_T stateEstimator_DW;

/*
 * System initialize for enable system:
 *    '<S106>/MeasurementUpdate'
 *    '<S153>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S131>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S106>/MeasurementUpdate'
 *    '<S153>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S106>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* Disable for Outport: '<S131>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;

  /* End of Outputs for SubSystem: '<S106>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S106>/MeasurementUpdate'
 *    '<S153>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const real32_T
  rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2], real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S106>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S131>/Sum' incorporates:
     *  Product: '<S131>/C[k]*xhat[k|k-1]'
     *  Product: '<S131>/D[k]*u[k]'
     *  Product: '<S131>/Product3'
     *  Sum: '<S131>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]) + (rtu_Dk[0] * rtu_uk[0] + rtu_Dk[2] * rtu_uk[1]));
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]) + (rtu_Dk[1] * rtu_uk[0] + rtu_Dk[3] * rtu_uk[1]));

    /* Product: '<S131>/Product3' */
    rty_Lykyhatkk1[0] = 0.0F;
    rty_Lykyhatkk1[0] += rtu_Lk[0] * rtu_yk_idx_0;
    rty_Lykyhatkk1[0] += rtu_Lk[2] * rtu_yk_idx_1;
    rty_Lykyhatkk1[1] = 0.0F;
    rty_Lykyhatkk1[1] += rtu_Lk[1] * rtu_yk_idx_0;
    rty_Lykyhatkk1[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      stateEstimator_MeasurementUpdate_Disable(rty_Lykyhatkk1, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S106>/MeasurementUpdate' */
}

/*
 * System initialize for atomic system:
 *    '<S71>/UseCurrentEstimator'
 *    '<S133>/UseCurrentEstimator'
 */
void stateEstimator_UseCurrentEstimator_Init
  (B_UseCurrentEstimator_stateEstimator_T *localB,
   P_UseCurrentEstimator_stateEstimator_T *localP)
{
  /* SystemInitialize for Enabled SubSystem: '<S111>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S132>/deltax' */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S111>/Enabled Subsystem' */
}

/*
 * Disable for atomic system:
 *    '<S71>/UseCurrentEstimator'
 *    '<S133>/UseCurrentEstimator'
 */
void stateEstimator_UseCurrentEstimator_Disable
  (B_UseCurrentEstimator_stateEstimator_T *localB,
   DW_UseCurrentEstimator_stateEstimator_T *localDW,
   P_UseCurrentEstimator_stateEstimator_T *localP)
{
  /* Disable for Enabled SubSystem: '<S111>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Outport: '<S132>/deltax' */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S111>/Enabled Subsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S71>/UseCurrentEstimator'
 *    '<S133>/UseCurrentEstimator'
 */
void stateEstimator_UseCurrentEstimator(boolean_T rtu_Enablek, const real32_T
  rtu_Mk[4], const real32_T rtu_uk[2], const real32_T rtu_yk[2], const real32_T
  rtu_Ck[4], const real32_T rtu_Dk[4], const real32_T rtu_xhatkk1[2], real32_T
  rty_xhatkk[2], B_UseCurrentEstimator_stateEstimator_T *localB,
  DW_UseCurrentEstimator_stateEstimator_T *localDW,
  P_UseCurrentEstimator_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S111>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  if (rtu_Enablek) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S132>/Add1' incorporates:
     *  Product: '<S132>/Product'
     *  Product: '<S132>/Product1'
     *  Product: '<S132>/Product2'
     */
    rtu_yk_idx_0 = (rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1])) - (rtu_Dk[0] * rtu_uk[0] + rtu_Dk[2] * rtu_uk[1]);
    rtu_yk_idx_1 = (rtu_yk[1] - (rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1])) - (rtu_Dk[1] * rtu_uk[0] + rtu_Dk[3] * rtu_uk[1]);

    /* Product: '<S132>/Product2' */
    localB->Product2[0] = 0.0F;
    localB->Product2[0] += rtu_Mk[0] * rtu_yk_idx_0;
    localB->Product2[0] += rtu_Mk[2] * rtu_yk_idx_1;
    localB->Product2[1] = 0.0F;
    localB->Product2[1] += rtu_Mk[1] * rtu_yk_idx_0;
    localB->Product2[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S132>/deltax' */
      localB->Product2[0] = localP->deltax_Y0;
      localB->Product2[1] = localP->deltax_Y0;
      localDW->EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S111>/Enabled Subsystem' */

  /* Sum: '<S111>/Add' */
  rty_xhatkk[0] = localB->Product2[0] + rtu_xhatkk1[0];
  rty_xhatkk[1] = localB->Product2[1] + rtu_xhatkk1[1];
}

/* System initialize for referenced model: 'stateEstimator' */
void stateEstimator_Init(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  stateEstimator_DW.Memory_PreviousInput[0] =
    stateEstimator_P_g.Memory_InitialCondition[0];
  stateEstimator_DW.Memory_PreviousInput[1] =
    stateEstimator_P_g.Memory_InitialCondition[1];
  stateEstimator_DW.Memory_PreviousInput[2] =
    stateEstimator_P_g.Memory_InitialCondition[2];

  /* InitializeConditions for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] =
      stateEstimator_P_g.IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S5>/FIR_IMUaccel' */
  stateEstimator_DW.FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] =
      stateEstimator_P_g.FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S5>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S3>/Delay2' */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_P_g.Delay2_InitialCondition;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for Delay: '<S14>/MemoryX' */
  stateEstimator_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[0] =
    stateEstimator_P_g.Delay1_InitialCondition;
  stateEstimator_DW.Delay1_DSTATE[1] =
    stateEstimator_P_g.Delay1_InitialCondition;

  /* InitializeConditions for DiscreteFilter: '<S70>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] =
      stateEstimator_P_g.IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S70>/IIRgyroz' */

  /* InitializeConditions for Delay: '<S71>/MemoryX' */
  stateEstimator_DW.icLoad_i = 1U;

  /* InitializeConditions for Delay: '<S133>/MemoryX' */
  stateEstimator_DW.icLoad_g = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for UnitDelay: '<S77>/UD'
   *
   * Block description for '<S77>/UD':
   *
   *  Store in Global RAM
   */
  stateEstimator_DW.UD_DSTATE[0] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S67>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[0] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S2>/Merge' */
  stateEstimator_B.Merge[0] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Atomic SubSystem: '<S14>/UseCurrentEstimator' */
  /* SystemInitialize for Enabled SubSystem: '<S40>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S61>/deltax' */
  stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S40>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S14>/UseCurrentEstimator' */

  /* InitializeConditions for UnitDelay: '<S77>/UD'
   *
   * Block description for '<S77>/UD':
   *
   *  Store in Global RAM
   */
  stateEstimator_DW.UD_DSTATE[1] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S67>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[1] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S2>/Merge' */
  stateEstimator_B.Merge[1] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Atomic SubSystem: '<S14>/UseCurrentEstimator' */
  /* SystemInitialize for Enabled SubSystem: '<S40>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S61>/deltax' */
  stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S40>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S14>/UseCurrentEstimator' */

  /* SystemInitialize for Atomic SubSystem: '<S71>/UseCurrentEstimator' */
  stateEstimator_UseCurrentEstimator_Init
    (&stateEstimator_B.UseCurrentEstimator_l,
     &stateEstimator_P_g.UseCurrentEstimator_l);

  /* End of SystemInitialize for SubSystem: '<S71>/UseCurrentEstimator' */

  /* SystemInitialize for Atomic SubSystem: '<S133>/UseCurrentEstimator' */
  stateEstimator_UseCurrentEstimator_Init
    (&stateEstimator_B.UseCurrentEstimator_j,
     &stateEstimator_P_g.UseCurrentEstimator_j);

  /* End of SystemInitialize for SubSystem: '<S133>/UseCurrentEstimator' */

  /* SystemInitialize for Enabled SubSystem: '<S153>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_j,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of SystemInitialize for SubSystem: '<S153>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S106>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_m,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of SystemInitialize for SubSystem: '<S106>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S35>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S60>/L*(y[k]-yhat[k|k-1])' */
  stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
  stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S35>/MeasurementUpdate' */
}

/* Disable for referenced model: 'stateEstimator' */
void stateEstimator_Disable(void)
{
  /* Disable for Atomic SubSystem: '<S14>/UseCurrentEstimator' */
  /* Disable for Enabled SubSystem: '<S40>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Outport: '<S61>/deltax' */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S40>/Enabled Subsystem' */
  /* End of Disable for SubSystem: '<S14>/UseCurrentEstimator' */

  /* Disable for Atomic SubSystem: '<S71>/UseCurrentEstimator' */
  stateEstimator_UseCurrentEstimator_Disable
    (&stateEstimator_B.UseCurrentEstimator_l,
     &stateEstimator_DW.UseCurrentEstimator_l,
     &stateEstimator_P_g.UseCurrentEstimator_l);

  /* End of Disable for SubSystem: '<S71>/UseCurrentEstimator' */

  /* Disable for Atomic SubSystem: '<S133>/UseCurrentEstimator' */
  stateEstimator_UseCurrentEstimator_Disable
    (&stateEstimator_B.UseCurrentEstimator_j,
     &stateEstimator_DW.UseCurrentEstimator_j,
     &stateEstimator_P_g.UseCurrentEstimator_j);

  /* End of Disable for SubSystem: '<S133>/UseCurrentEstimator' */

  /* Disable for Enabled SubSystem: '<S153>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_b.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_j,
      &stateEstimator_DW.MeasurementUpdate_b,
      &stateEstimator_P_g.MeasurementUpdate_b);
  }

  /* End of Disable for SubSystem: '<S153>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S106>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_e.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_m,
      &stateEstimator_DW.MeasurementUpdate_e,
      &stateEstimator_P_g.MeasurementUpdate_e);
  }

  /* End of Disable for SubSystem: '<S106>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S35>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Outport: '<S60>/L*(y[k]-yhat[k|k-1])' */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S35>/MeasurementUpdate' */
}

/* Output and update for referenced model: 'stateEstimator' */
void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin, const
  sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin, const
  real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8])
{
  /* local block i/o variables */
  boolean_T rtb_DataTypeConversionEnable_i;
  boolean_T rtb_DataTypeConversionEnable_h;
  boolean_T rtb_DataTypeConversionReset_a;
  boolean_T rtb_DataTypeConversionReset_i;
  boolean_T rtb_Compare_i;
  boolean_T rtb_Compare_n;
  boolean_T nicemeasurementornewupdateneeded;
  int32_T i;
  real32_T rtb_DataTypeConversion1_o_idx_1;
  real32_T rtb_Sum_idx_2;
  real32_T y;
  real32_T u0;
  real32_T rtb_DataTypeConversion1_o_idx_0_tmp;
  real32_T rtb_VectorConcatenate_tmp;
  real32_T rtb_VectorConcatenate_tmp_0;
  real32_T rtb_Reshape9to3x3columnmajor_tmp;
  real32_T rtb_TmpSignalConversionAtProductInport2_idx_2;

  /* SignalConversion: '<S13>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  Constant: '<S12>/Constant'
   */
  stateEstimator_B.VectorConcatenate[0] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S13>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S12>/Constant'
   */
  stateEstimator_B.VectorConcatenate[1] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S12>/TmpSignal ConversionAtTrigonometric FunctionInport1' incorporates:
   *  Memory: '<S2>/Memory'
   */
  stateEstimator_B.sincos_o1[0] = stateEstimator_DW.Memory_PreviousInput[2];
  stateEstimator_B.sincos_o1[1] = stateEstimator_DW.Memory_PreviousInput[1];
  stateEstimator_B.sincos_o1[2] = stateEstimator_DW.Memory_PreviousInput[0];

  /* Trigonometry: '<S12>/Trigonometric Function' incorporates:
   *  Memory: '<S2>/Memory'
   *  SignalConversion: '<S12>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_DataTypeConversion1_o_idx_0_tmp = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);
  stateEstimator_DW.Memory_PreviousInput[1] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_DataTypeConversion1_o_idx_1 = (real32_T)cos(stateEstimator_B.sincos_o1[1]);
  stateEstimator_DW.Memory_PreviousInput[2] = (real32_T)sin
    (stateEstimator_B.sincos_o1[2]);

  /* SignalConversion: '<S13>/ConcatBufferAtVector ConcatenateIn3' */
  stateEstimator_B.VectorConcatenate[2] = rtb_DataTypeConversion1_o_idx_1;

  /* SignalConversion: '<S13>/ConcatBufferAtVector ConcatenateIn4' */
  stateEstimator_B.VectorConcatenate[3] =
    stateEstimator_DW.Memory_PreviousInput[0];

  /* Product: '<S12>/Product1' incorporates:
   *  Trigonometry: '<S12>/Trigonometric Function'
   */
  stateEstimator_B.VectorConcatenate[4] = rtb_DataTypeConversion1_o_idx_0_tmp *
    rtb_DataTypeConversion1_o_idx_1;

  /* Product: '<S12>/Product3' */
  stateEstimator_B.VectorConcatenate[5] =
    stateEstimator_DW.Memory_PreviousInput[0] *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* SignalConversion: '<S13>/ConcatBufferAtVector ConcatenateIn7' incorporates:
   *  Trigonometry: '<S12>/Trigonometric Function'
   */
  stateEstimator_B.VectorConcatenate[6] = rtb_DataTypeConversion1_o_idx_0_tmp;

  /* Product: '<S12>/Product2' incorporates:
   *  Gain: '<S12>/Gain'
   */
  stateEstimator_B.VectorConcatenate[7] = stateEstimator_P_g.Gain_Gain_c *
    stateEstimator_DW.Memory_PreviousInput[0] * rtb_DataTypeConversion1_o_idx_1;

  /* Product: '<S12>/Product4' incorporates:
   *  Trigonometry: '<S12>/Trigonometric Function'
   */
  stateEstimator_B.VectorConcatenate[8] = rtb_DataTypeConversion1_o_idx_0_tmp *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Product: '<S12>/Divide' incorporates:
   *  Reshape: '<S13>/Reshape (9) to [3x3] column-major'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 9; stateEstimator_B.j++) {
    stateEstimator_B.VectorConcatenate[stateEstimator_B.j] /=
      rtb_DataTypeConversion1_o_idx_1;
  }

  /* End of Product: '<S12>/Divide' */

  /* Gain: '<S5>/inverseIMU_gain' incorporates:
   *  Bias: '<S5>/Assuming that calib was done level!'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Sum: '<S5>/Sum1'
   */
  stateEstimator_B.inverseIMU_gain[0] = (arg_sensordata_datin->ddx -
    (arg_sensorCalibration_datin[0] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[0])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[0];
  stateEstimator_B.inverseIMU_gain[1] = (arg_sensordata_datin->ddy -
    (arg_sensorCalibration_datin[1] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[1])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[1];
  stateEstimator_B.inverseIMU_gain[2] = (arg_sensordata_datin->ddz -
    (arg_sensorCalibration_datin[2] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[2])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[2];
  stateEstimator_B.inverseIMU_gain[3] = (arg_sensordata_datin->p -
    (arg_sensorCalibration_datin[3] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[3])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[3];
  stateEstimator_B.inverseIMU_gain[4] = (arg_sensordata_datin->q -
    (arg_sensorCalibration_datin[4] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[4])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[4];
  stateEstimator_B.inverseIMU_gain[5] = (arg_sensordata_datin->r -
    (arg_sensorCalibration_datin[5] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[5])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[5];

  /* DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_tmp = 0.0F;
  stateEstimator_B.DataTypeConversion2 = stateEstimator_B.inverseIMU_gain[5];
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    stateEstimator_B.DataTypeConversion2 -=
      stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  stateEstimator_DW.IIR_IMUgyro_r_tmp = stateEstimator_B.DataTypeConversion2 /
    stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[0];
  rtb_DataTypeConversion1_o_idx_0_tmp =
    stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[0] *
    stateEstimator_DW.IIR_IMUgyro_r_tmp;
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    rtb_DataTypeConversion1_o_idx_0_tmp +=
      stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  /* Product: '<S2>/Product' incorporates:
   *  DiscreteFilter: '<S5>/IIR_IMUgyro_r'
   *  SignalConversion: '<S2>/TmpSignal ConversionAtProductInport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.sincos_o1_h[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] *
      rtb_DataTypeConversion1_o_idx_0_tmp +
      (stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
       stateEstimator_B.inverseIMU_gain[4] +
       stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
       stateEstimator_B.inverseIMU_gain[3]);
  }

  /* End of Product: '<S2>/Product' */

  /* Sum: '<S2>/Sum' incorporates:
   *  Gain: '<S2>/Gain'
   */
  rtb_Sum_idx_2 = stateEstimator_P_g.Gain_Gain_b * stateEstimator_B.sincos_o1_h
    [0] + stateEstimator_B.sincos_o1[2];

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_DataTypeConversion1_o_idx_1 = stateEstimator_B.inverseIMU_gain[0] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_DataTypeConversion1_o_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_DataTypeConversion1_o_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[0] = rtb_DataTypeConversion1_o_idx_1;

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/Constant'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_n);
  if ((rtb_DataTypeConversion1_o_idx_1 < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_B.sincos_o1_h[0] = -rt_powf_snf
      (-rtb_DataTypeConversion1_o_idx_1, stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.sincos_o1_h[0] = rt_powf_snf
      (rtb_DataTypeConversion1_o_idx_1, stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_DataTypeConversion1_o_idx_1 = stateEstimator_B.inverseIMU_gain[1] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_DataTypeConversion1_o_idx_1 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_DataTypeConversion1_o_idx_1 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[1] = rtb_DataTypeConversion1_o_idx_1;

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/Constant'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  if ((rtb_DataTypeConversion1_o_idx_1 < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    y = -rt_powf_snf(-rtb_DataTypeConversion1_o_idx_1,
                     stateEstimator_P_g.Constant_Value_n);
  } else {
    y = rt_powf_snf(rtb_DataTypeConversion1_o_idx_1,
                    stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_DataTypeConversion1_o_idx_1 = stateEstimator_B.inverseIMU_gain[2] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_DataTypeConversion1_o_idx_1 += stateEstimator_DW.FIR_IMUaccel_states[10
      + stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_DataTypeConversion1_o_idx_1 += stateEstimator_DW.FIR_IMUaccel_states[10
      + stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[2] = rtb_DataTypeConversion1_o_idx_1;

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/Constant'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  if ((rtb_DataTypeConversion1_o_idx_1 < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_B.DataTypeConversion2 = -rt_powf_snf
      (-rtb_DataTypeConversion1_o_idx_1, stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.DataTypeConversion2 = rt_powf_snf
      (rtb_DataTypeConversion1_o_idx_1, stateEstimator_P_g.Constant_Value_n);
  }

  /* Sqrt: '<S2>/Sqrt' incorporates:
   *  Math: '<S2>/Math Function'
   *  Sum: '<S2>/Sum of Elements'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)sqrt
    ((stateEstimator_B.sincos_o1_h[0] + y) +
     stateEstimator_B.DataTypeConversion2);

  /* If: '<S2>/If' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Gain: '<S2>/Gain'
   *  Inport: '<S10>/prin'
   *  Logic: '<S2>/Logical Operator'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  Sum: '<S2>/Sum'
   */
  if ((stateEstimator_B.DataTypeConversion2 >
       stateEstimator_P_g.CompareToConstant_const) &&
      (stateEstimator_B.DataTypeConversion2 <
       stateEstimator_P_g.CompareToConstant1_const)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Sum: '<S8>/Sum' incorporates:
     *  DiscreteFir: '<S5>/FIR_IMUaccel'
     *  Gain: '<S2>/Gain'
     *  Gain: '<S8>/Gain'
     *  Gain: '<S8>/Gain1'
     *  Product: '<S8>/Divide'
     *  Sum: '<S2>/Sum'
     *  Trigonometry: '<S8>/Trigonometric Function'
     */
    stateEstimator_B.Merge[1] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1_h[2] + stateEstimator_B.sincos_o1[0]) *
      stateEstimator_P_g.Gain_Gain + (real32_T)atan
      (stateEstimator_B.FIR_IMUaccel[1] / rtb_DataTypeConversion1_o_idx_1) *
      stateEstimator_P_g.Gain1_Gain;

    /* Gain: '<S8>/Gain2' */
    u0 = stateEstimator_P_g.Gain2_Gain * stateEstimator_B.FIR_IMUaccel[0];

    /* Trigonometry: '<S8>/Trigonometric Function1' */
    if (u0 > 1.0F) {
      u0 = 1.0F;
    } else {
      if (u0 < -1.0F) {
        u0 = -1.0F;
      }
    }

    /* Sum: '<S8>/Sum1' incorporates:
     *  Gain: '<S2>/Gain'
     *  Gain: '<S8>/Gain3'
     *  Gain: '<S8>/Gain4'
     *  Sum: '<S2>/Sum'
     *  Trigonometry: '<S8>/Trigonometric Function1'
     */
    stateEstimator_B.Merge[0] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1_h[1] + stateEstimator_B.sincos_o1[1]) *
      stateEstimator_P_g.Gain4_Gain + stateEstimator_P_g.Gain3_Gain * (real32_T)
      asin(u0);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    stateEstimator_B.Merge[0] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1_h[1] + stateEstimator_B.sincos_o1[1];
    stateEstimator_B.Merge[1] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1_h[2] + stateEstimator_B.sincos_o1[0];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
  }

  /* End of If: '<S2>/If' */

  /* If: '<S2>/If1' incorporates:
   *  Constant: '<S185>/Constant'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S185>/Compare'
   */
  if ((arg_posVIS_datin[0] !=
       stateEstimator_P_g.Checkifvalidvisualpositionestimateavailable_const) &&
      (arg_usePosVIS_flagin != 0.0F)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Sum: '<S9>/Sum'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = stateEstimator_P_g.Gain_Gain_i *
      rtb_Sum_idx_2 + stateEstimator_P_g.Gain1_Gain_k * arg_posVIS_datin[3];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
     *  Inport: '<S11>/yawin'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = rtb_Sum_idx_2;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
  }

  /* End of If: '<S2>/If1' */

  /* DataTypeConversion: '<S2>/Data Type Conversion3' */
  stateEstimator_DW.Memory_PreviousInput[1] = stateEstimator_B.Merge[0];
  stateEstimator_DW.Memory_PreviousInput[2] = stateEstimator_B.Merge[1];

  /* Trigonometry: '<S135>/sincos' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  rtb_Sum_idx_2 = (real32_T)sin(stateEstimator_DW.Memory_PreviousInput[0]);
  y = (real32_T)cos(stateEstimator_DW.Memory_PreviousInput[0]);
  stateEstimator_B.DataTypeConversion2 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  u0 = (real32_T)cos(stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_Reshape9to3x3columnmajor_tmp = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_TmpSignalConversionAtProductInport2_idx_2 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);

  /* Fcn: '<S135>/Fcn11' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[0] = u0 * y;

  /* Fcn: '<S135>/Fcn21' incorporates:
   *  Fcn: '<S135>/Fcn22'
   *  Trigonometry: '<S135>/sincos'
   */
  rtb_VectorConcatenate_tmp = rtb_Reshape9to3x3columnmajor_tmp *
    stateEstimator_B.DataTypeConversion2;
  stateEstimator_B.VectorConcatenate[1] = rtb_VectorConcatenate_tmp * y -
    rtb_TmpSignalConversionAtProductInport2_idx_2 * rtb_Sum_idx_2;

  /* Fcn: '<S135>/Fcn31' incorporates:
   *  Fcn: '<S135>/Fcn32'
   *  Trigonometry: '<S135>/sincos'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_TmpSignalConversionAtProductInport2_idx_2 *
    stateEstimator_B.DataTypeConversion2;
  stateEstimator_B.VectorConcatenate[2] = rtb_VectorConcatenate_tmp_0 * y +
    rtb_Reshape9to3x3columnmajor_tmp * rtb_Sum_idx_2;

  /* Fcn: '<S135>/Fcn12' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[3] = u0 * rtb_Sum_idx_2;

  /* Fcn: '<S135>/Fcn22' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[4] = rtb_VectorConcatenate_tmp *
    rtb_Sum_idx_2 + rtb_TmpSignalConversionAtProductInport2_idx_2 * y;

  /* Fcn: '<S135>/Fcn32' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[5] = rtb_VectorConcatenate_tmp_0 *
    rtb_Sum_idx_2 - rtb_Reshape9to3x3columnmajor_tmp * y;

  /* Fcn: '<S135>/Fcn13' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[6] = -stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S135>/Fcn23' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[7] = rtb_Reshape9to3x3columnmajor_tmp * u0;

  /* Fcn: '<S135>/Fcn33' incorporates:
   *  Trigonometry: '<S135>/sincos'
   */
  stateEstimator_B.VectorConcatenate[8] =
    rtb_TmpSignalConversionAtProductInport2_idx_2 * u0;

  /* Math: '<S68>/Math Function' */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_VectorConcatenate_m[3 * stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j];
    stateEstimator_B.rtb_VectorConcatenate_m[1 + 3 * stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3];
    stateEstimator_B.rtb_VectorConcatenate_m[2 + 3 * stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6];
  }

  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.VectorConcatenate[3 * stateEstimator_B.j] =
      stateEstimator_B.rtb_VectorConcatenate_m[3 * stateEstimator_B.j];
    stateEstimator_B.VectorConcatenate[1 + 3 * stateEstimator_B.j] =
      stateEstimator_B.rtb_VectorConcatenate_m[3 * stateEstimator_B.j + 1];
    stateEstimator_B.VectorConcatenate[2 + 3 * stateEstimator_B.j] =
      stateEstimator_B.rtb_VectorConcatenate_m[3 * stateEstimator_B.j + 2];

    /* Trigonometry: '<S16>/sincos' */
    stateEstimator_B.sincos_o1_h[stateEstimator_B.j] = (real32_T)sin
      (stateEstimator_DW.Memory_PreviousInput[stateEstimator_B.j]);
    stateEstimator_B.sincos_o1[stateEstimator_B.j] = (real32_T)cos
      (stateEstimator_DW.Memory_PreviousInput[stateEstimator_B.j]);
  }

  /* End of Math: '<S68>/Math Function' */

  /* Fcn: '<S16>/Fcn11' */
  stateEstimator_B.Reshape9to3x3columnmajor[0] = stateEstimator_B.sincos_o1[1] *
    stateEstimator_B.sincos_o1[0];

  /* Fcn: '<S16>/Fcn21' incorporates:
   *  Fcn: '<S16>/Fcn22'
   */
  stateEstimator_B.DataTypeConversion2 = stateEstimator_B.sincos_o1_h[2] *
    stateEstimator_B.sincos_o1_h[1];
  stateEstimator_B.Reshape9to3x3columnmajor[1] =
    stateEstimator_B.DataTypeConversion2 * stateEstimator_B.sincos_o1[0] -
    stateEstimator_B.sincos_o1[2] * stateEstimator_B.sincos_o1_h[0];

  /* Fcn: '<S16>/Fcn31' incorporates:
   *  Fcn: '<S16>/Fcn32'
   */
  rtb_Reshape9to3x3columnmajor_tmp = stateEstimator_B.sincos_o1[2] *
    stateEstimator_B.sincos_o1_h[1];
  stateEstimator_B.Reshape9to3x3columnmajor[2] =
    rtb_Reshape9to3x3columnmajor_tmp * stateEstimator_B.sincos_o1[0] +
    stateEstimator_B.sincos_o1_h[2] * stateEstimator_B.sincos_o1_h[0];

  /* Fcn: '<S16>/Fcn12' */
  stateEstimator_B.Reshape9to3x3columnmajor[3] = stateEstimator_B.sincos_o1[1] *
    stateEstimator_B.sincos_o1_h[0];

  /* Fcn: '<S16>/Fcn22' */
  stateEstimator_B.Reshape9to3x3columnmajor[4] =
    stateEstimator_B.DataTypeConversion2 * stateEstimator_B.sincos_o1_h[0] +
    stateEstimator_B.sincos_o1[2] * stateEstimator_B.sincos_o1[0];

  /* Fcn: '<S16>/Fcn32' */
  stateEstimator_B.Reshape9to3x3columnmajor[5] =
    rtb_Reshape9to3x3columnmajor_tmp * stateEstimator_B.sincos_o1_h[0] -
    stateEstimator_B.sincos_o1_h[2] * stateEstimator_B.sincos_o1[0];

  /* Fcn: '<S16>/Fcn13' */
  stateEstimator_B.Reshape9to3x3columnmajor[6] = -stateEstimator_B.sincos_o1_h[1];

  /* Fcn: '<S16>/Fcn23' */
  stateEstimator_B.Reshape9to3x3columnmajor[7] = stateEstimator_B.sincos_o1_h[2]
    * stateEstimator_B.sincos_o1[1];

  /* Fcn: '<S16>/Fcn33' */
  stateEstimator_B.Reshape9to3x3columnmajor[8] = stateEstimator_B.sincos_o1[2] *
    stateEstimator_B.sincos_o1[1];

  /* Trigonometry: '<S73>/sincos' */
  stateEstimator_B.DataTypeConversion2 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_Reshape9to3x3columnmajor_tmp = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_TmpSignalConversionAtProductInport2_idx_2 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);

  /* Fcn: '<S73>/Fcn11' */
  stateEstimator_B.Reshape9to3x3columnmajor_g[0] = u0 * y;

  /* Fcn: '<S73>/Fcn21' incorporates:
   *  Fcn: '<S73>/Fcn22'
   *  Trigonometry: '<S73>/sincos'
   */
  rtb_VectorConcatenate_tmp = rtb_Reshape9to3x3columnmajor_tmp *
    stateEstimator_B.DataTypeConversion2;
  stateEstimator_B.Reshape9to3x3columnmajor_g[1] = rtb_VectorConcatenate_tmp * y
    - rtb_TmpSignalConversionAtProductInport2_idx_2 * rtb_Sum_idx_2;

  /* Fcn: '<S73>/Fcn31' incorporates:
   *  Fcn: '<S73>/Fcn32'
   *  Trigonometry: '<S73>/sincos'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_TmpSignalConversionAtProductInport2_idx_2 *
    stateEstimator_B.DataTypeConversion2;
  stateEstimator_B.Reshape9to3x3columnmajor_g[2] = rtb_VectorConcatenate_tmp_0 *
    y + rtb_Reshape9to3x3columnmajor_tmp * rtb_Sum_idx_2;

  /* Fcn: '<S73>/Fcn12' */
  stateEstimator_B.Reshape9to3x3columnmajor_g[3] = u0 * rtb_Sum_idx_2;

  /* Fcn: '<S73>/Fcn22' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor_g[4] = rtb_VectorConcatenate_tmp *
    rtb_Sum_idx_2 + rtb_TmpSignalConversionAtProductInport2_idx_2 * y;

  /* Fcn: '<S73>/Fcn32' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor_g[5] = rtb_VectorConcatenate_tmp_0 *
    rtb_Sum_idx_2 - rtb_Reshape9to3x3columnmajor_tmp * y;

  /* Fcn: '<S73>/Fcn13' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor_g[6] =
    -stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S73>/Fcn23' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor_g[7] =
    rtb_Reshape9to3x3columnmajor_tmp * u0;

  /* Fcn: '<S73>/Fcn33' incorporates:
   *  Trigonometry: '<S73>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor_g[8] =
    rtb_TmpSignalConversionAtProductInport2_idx_2 * u0;

  /* DataTypeConversion: '<S175>/Conversion' incorporates:
   *  Constant: '<S136>/KalmanGainM'
   */
  stateEstimator_B.Conversion_g[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[0];
  stateEstimator_B.Conversion_g[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[1];
  stateEstimator_B.Conversion_g[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[2];
  stateEstimator_B.Conversion_g[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[3];

  /* DataTypeConversion: '<S128>/Conversion' incorporates:
   *  Constant: '<S89>/KalmanGainM'
   */
  stateEstimator_B.Conversion_p[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[0];
  stateEstimator_B.Conversion_p[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[1];
  stateEstimator_B.Conversion_p[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[2];
  stateEstimator_B.Conversion_p[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[3];

  /* DataTypeConversion: '<S127>/Conversion' incorporates:
   *  Constant: '<S89>/KalmanGainL'
   */
  stateEstimator_B.Conversion_n4[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[0];
  stateEstimator_B.Conversion_n4[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[1];
  stateEstimator_B.Conversion_n4[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[2];
  stateEstimator_B.Conversion_n4[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[3];

  /* DataTypeConversion: '<S174>/Conversion' incorporates:
   *  Constant: '<S136>/KalmanGainL'
   */
  stateEstimator_B.Conversion_a[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[0];
  stateEstimator_B.Conversion_a[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[1];
  stateEstimator_B.Conversion_a[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[2];
  stateEstimator_B.Conversion_a[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[3];

  /* Gain: '<S3>/invertzaxisGain' */
  stateEstimator_B.invertzaxisGain = (real_T)
    stateEstimator_P_g.invertzaxisGain_Gain *
    arg_sensordata_datin->altitude_sonar;

  /* DiscreteFilter: '<S15>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Gain: '<S3>/prsToAltGain'
   *  Sum: '<S5>/Sum2'
   */
  stateEstimator_DW.pressureFilter_IIR_tmp = ((((arg_sensordata_datin->prs -
    arg_sensorCalibration_datin[6]) * stateEstimator_P_g.prsToAltGain_Gain -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[1] *
    stateEstimator_DW.pressureFilter_IIR_states[0]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[2] *
    stateEstimator_DW.pressureFilter_IIR_states[1]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[3] *
    stateEstimator_DW.pressureFilter_IIR_states[2]) /
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[0];

  /* DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_tmp = (((stateEstimator_B.invertzaxisGain -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[1] *
    stateEstimator_DW.soonarFilter_IIR_states[0]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[2] *
    stateEstimator_DW.soonarFilter_IIR_states[1]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[3] *
    stateEstimator_DW.soonarFilter_IIR_states[2]) /
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[0];

  /* Saturate: '<S15>/SaturationSonar' */
  if (stateEstimator_B.invertzaxisGain > -rtP_Sensors.altSensorMin) {
    stateEstimator_B.Add1 = -rtP_Sensors.altSensorMin;
  } else if (stateEstimator_B.invertzaxisGain <
             stateEstimator_P_g.SaturationSonar_LowerSat) {
    stateEstimator_B.Add1 = stateEstimator_P_g.SaturationSonar_LowerSat;
  } else {
    stateEstimator_B.Add1 = stateEstimator_B.invertzaxisGain;
  }

  /* End of Saturate: '<S15>/SaturationSonar' */

  /* Logic: '<S15>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S15>/Absestdiff'
   *  Abs: '<S15>/Absestdiff1'
   *  Abs: '<S15>/Absestdiff2'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Delay: '<S3>/Delay2'
   *  DiscreteFilter: '<S15>/pressureFilter_IIR'
   *  DiscreteFilter: '<S15>/soonarFilter_IIR'
   *  Logic: '<S15>/findingoutliers'
   *  Logic: '<S15>/newupdateneeded'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  Sum: '<S15>/Add'
   *  Sum: '<S15>/Add1'
   *  Sum: '<S15>/Add2'
   */
  nicemeasurementornewupdateneeded = (((fabs(stateEstimator_DW.Delay2_DSTATE -
    stateEstimator_B.Add1) <= stateEstimator_P_g.outlierJump_const) &&
    (stateEstimator_B.invertzaxisGain < -rtP_Sensors.altSensorMin)) || ((fabs
    ((((stateEstimator_P_g.pressureFilter_IIR_NumCoef[0] *
        stateEstimator_DW.pressureFilter_IIR_tmp +
        stateEstimator_P_g.pressureFilter_IIR_NumCoef[1] *
        stateEstimator_DW.pressureFilter_IIR_states[0]) +
       stateEstimator_P_g.pressureFilter_IIR_NumCoef[2] *
       stateEstimator_DW.pressureFilter_IIR_states[1]) +
      stateEstimator_P_g.pressureFilter_IIR_NumCoef[3] *
      stateEstimator_DW.pressureFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentEstimateVeryOffFromPressure_const) && (fabs
    ((((stateEstimator_P_g.soonarFilter_IIR_NumCoef[0] *
        stateEstimator_DW.soonarFilter_IIR_tmp +
        stateEstimator_P_g.soonarFilter_IIR_NumCoef[1] *
        stateEstimator_DW.soonarFilter_IIR_states[0]) +
       stateEstimator_P_g.soonarFilter_IIR_NumCoef[2] *
       stateEstimator_DW.soonarFilter_IIR_states[1]) +
      stateEstimator_P_g.soonarFilter_IIR_NumCoef[3] *
      stateEstimator_DW.soonarFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentStateVeryOffsonarflt_const)));

  /* Sum: '<S3>/Sum' incorporates:
   *  Constant: '<S3>/gravity'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   *  Math: '<S3>/Math Function'
   *  Product: '<S3>/Product'
   *  Reshape: '<S14>/Reshapeu'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[stateEstimator_B.j] =
      ((stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j + 1] *
        stateEstimator_B.FIR_IMUaccel[1] +
        stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j] *
        stateEstimator_B.FIR_IMUaccel[0]) +
       stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j + 2] *
       rtb_DataTypeConversion1_o_idx_1) +
      stateEstimator_P_g.gravity_Value_k[stateEstimator_B.j];
  }

  /* Delay: '<S14>/MemoryX' incorporates:
   *  Constant: '<S14>/X0'
   *  Constant: '<S17>/Constant'
   *  Delay: '<S3>/Delay2'
   *  RelationalOperator: '<S17>/Compare'
   *  Reshape: '<S14>/ReshapeX0'
   */
  if (stateEstimator_DW.Delay2_DSTATE >
      stateEstimator_P_g.outlierBelowFloor_const) {
    stateEstimator_DW.icLoad = 1U;
  }

  if (stateEstimator_DW.icLoad != 0) {
    stateEstimator_DW.MemoryX_DSTATE[0] = stateEstimator_P_g.X0_Value[0];
    stateEstimator_DW.MemoryX_DSTATE[1] = stateEstimator_P_g.X0_Value[1];
  }

  /* Outputs for Atomic SubSystem: '<S14>/UseCurrentEstimator' */
  /* Outputs for Enabled SubSystem: '<S40>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S61>/Enable'
   */
  /* DataTypeConversion: '<S14>/DataTypeConversionEnable' */
  if (nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.EnabledSubsystem_MODE) {
      stateEstimator_DW.EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S61>/Add1' incorporates:
     *  Constant: '<S14>/C'
     *  Constant: '<S14>/D'
     *  Delay: '<S14>/MemoryX'
     *  Product: '<S61>/Product'
     *  Product: '<S61>/Product1'
     *  Reshape: '<S14>/Reshapeu'
     *  Reshape: '<S14>/Reshapey'
     */
    stateEstimator_B.Add1 = (stateEstimator_B.invertzaxisGain -
      (stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
       stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1])) -
      stateEstimator_P_g.D_Value *
      stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[2];

    /* Product: '<S61>/Product2' incorporates:
     *  Constant: '<S18>/KalmanGainM'
     *  DataTypeConversion: '<S57>/Conversion'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.KalmanGainM_Value_p[0] *
      stateEstimator_B.Add1;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.KalmanGainM_Value_p[1] *
      stateEstimator_B.Add1;
  } else {
    if (stateEstimator_DW.EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S61>/deltax' */
      stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S40>/Enabled Subsystem' */
  for (i = 0; i < 2; i++) {
    /* Sum: '<S40>/Add' incorporates:
     *  Delay: '<S14>/MemoryX'
     */
    stateEstimator_B.Add[i] = stateEstimator_B.Product2[i] +
      stateEstimator_DW.MemoryX_DSTATE[i];

    /* DiscreteFilter: '<S70>/IIRgyroz' */
    stateEstimator_B.cff = i * 5;
    stateEstimator_B.DataTypeConversion2 = stateEstimator_B.inverseIMU_gain[i +
      3];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      stateEstimator_B.DataTypeConversion2 -=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_DenCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    stateEstimator_DW.IIRgyroz_tmp[i] = stateEstimator_B.DataTypeConversion2 /
      stateEstimator_P_g.IIRgyroz_DenCoef[0];
    stateEstimator_B.DataTypeConversion2 = stateEstimator_P_g.IIRgyroz_NumCoef[0]
      * stateEstimator_DW.IIRgyroz_tmp[i];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      stateEstimator_B.DataTypeConversion2 +=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_NumCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    /* SampleTimeMath: '<S77>/TSamp' incorporates:
     *  DiscreteFilter: '<S70>/IIRgyroz'
     *
     * About '<S77>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.DataTypeConversion2 *= stateEstimator_P_g.TSamp_WtEt;

    /* Sum: '<S77>/Diff' incorporates:
     *  UnitDelay: '<S77>/UD'
     *
     * Block description for '<S77>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S77>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[i] = stateEstimator_B.DataTypeConversion2 -
      stateEstimator_DW.UD_DSTATE[i];

    /* SampleTimeMath: '<S77>/TSamp'
     *
     * About '<S77>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.TSamp[i] = stateEstimator_B.DataTypeConversion2;
  }

  /* End of Outputs for SubSystem: '<S14>/UseCurrentEstimator' */

  /* Gain: '<S67>/opticalFlowToVelocity_gain' */
  stateEstimator_B.sincos_o1[0] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[0];
  stateEstimator_B.sincos_o1[1] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[1];

  /* Abs: '<S70>/Abs' incorporates:
   *  Abs: '<S70>/Abs4'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)fabs
    (stateEstimator_B.inverseIMU_gain[3]);

  /* Abs: '<S70>/Abs1' incorporates:
   *  Abs: '<S70>/Abs5'
   */
  u0 = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[4]);

  /* Abs: '<S70>/Abs2' incorporates:
   *  Abs: '<S134>/Abs'
   */
  rtb_Sum_idx_2 = (real32_T)fabs(stateEstimator_DW.Memory_PreviousInput[1]);

  /* Abs: '<S70>/Abs3' incorporates:
   *  Abs: '<S134>/Abs1'
   */
  y = (real32_T)fabs(stateEstimator_DW.Memory_PreviousInput[2]);

  /* DataTypeConversion: '<S71>/DataTypeConversionEnable' incorporates:
   *  Abs: '<S70>/Abs'
   *  Abs: '<S70>/Abs1'
   *  Abs: '<S70>/Abs2'
   *  Abs: '<S70>/Abs3'
   *  Abs: '<S70>/Abs6'
   *  Abs: '<S70>/Abs7'
   *  Abs: '<S70>/Abs8'
   *  Abs: '<S70>/Abs9'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Delay: '<S67>/Delay'
   *  Logic: '<S70>/Logical Operator'
   *  Logic: '<S70>/Logical Operator1'
   *  Logic: '<S70>/Logical Operator2'
   *  Logic: '<S70>/Logical Operator3'
   *  RelationalOperator: '<S78>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  Reshape: '<S14>/Reshapexhat'
   *  Sum: '<S70>/Add'
   */
  rtb_DataTypeConversionEnable_i = ((((rtb_Sum_idx_2 <=
    stateEstimator_P_g.maxp_const) && (y <= stateEstimator_P_g.maxq_const) &&
    (stateEstimator_B.DataTypeConversion2 <= stateEstimator_P_g.maxw1_const) &&
    (u0 <= stateEstimator_P_g.maxw2_const) && ((real32_T)fabs
    (stateEstimator_DW.UD_DSTATE[0]) <= stateEstimator_P_g.maxdw1_const) &&
    ((real32_T)fabs(stateEstimator_DW.UD_DSTATE[1]) <=
     stateEstimator_P_g.maxdw2_const)) || ((stateEstimator_B.DataTypeConversion2
    <= stateEstimator_P_g.maxp2_const) && (u0 <= stateEstimator_P_g.maxq2_const)))
    && ((real32_T)fabs(stateEstimator_B.sincos_o1[0] -
                       stateEstimator_DW.Delay_DSTATE[0]) <=
        stateEstimator_P_g.maxw3_const) && ((real32_T)fabs
    (stateEstimator_B.sincos_o1[1] - stateEstimator_DW.Delay_DSTATE[1]) <=
    stateEstimator_P_g.maxw4_const) && ((real32_T)stateEstimator_B.Add[0] <=
    stateEstimator_P_g.minHeightforOF_const));

  /* Logic: '<S69>/Logical Operator' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   */
  rtb_Compare_n = ((stateEstimator_B.sincos_o1[0] !=
                    stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
                   || (stateEstimator_B.sincos_o1[1] !=
                       stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Reshape: '<S14>/Reshapexhat'
   */
  rtb_Compare_i = ((real32_T)stateEstimator_B.Add[0] <=
                   stateEstimator_P_g.DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Sum: '<S69>/Add' incorporates:
   *  Constant: '<S69>/gravity'
   *  Gain: '<S69>/gainaccinput'
   *  Product: '<S69>/Product1'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
      stateEstimator_B.FIR_IMUaccel[stateEstimator_B.j] -
      ((stateEstimator_B.Reshape9to3x3columnmajor_g[stateEstimator_B.j + 3] *
        stateEstimator_P_g.gravity_Value[1] +
        stateEstimator_B.Reshape9to3x3columnmajor_g[stateEstimator_B.j] *
        stateEstimator_P_g.gravity_Value[0]) +
       stateEstimator_B.Reshape9to3x3columnmajor_g[stateEstimator_B.j + 6] *
       stateEstimator_P_g.gravity_Value[2]);
  }

  /* End of Sum: '<S69>/Add' */

  /* Reshape: '<S71>/Reshapeu' incorporates:
   *  Gain: '<S69>/gainaccinput'
   *  Product: '<S69>/Product'
   */
  stateEstimator_B.Reshapeu_h[0] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [0]) * (real32_T)rtb_Compare_n * (real32_T)rtb_Compare_i;
  stateEstimator_B.Reshapeu_h[1] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [1]) * (real32_T)rtb_Compare_n * (real32_T)rtb_Compare_i;

  /* Reshape: '<S71>/Reshapey' */
  stateEstimator_B.Reshapey_o[0] = stateEstimator_B.sincos_o1[0];
  stateEstimator_B.Reshapey_o[1] = stateEstimator_B.sincos_o1[1];

  /* Delay: '<S71>/MemoryX' incorporates:
   *  Constant: '<S71>/X0'
   *  Reshape: '<S71>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad_i != 0) {
    stateEstimator_DW.MemoryX_DSTATE_d[0] = stateEstimator_P_g.X0_Value_e[0];
    stateEstimator_DW.MemoryX_DSTATE_d[1] = stateEstimator_P_g.X0_Value_e[1];
  }

  stateEstimator_B.MemoryX_m[0] = stateEstimator_DW.MemoryX_DSTATE_d[0];
  stateEstimator_B.MemoryX_m[1] = stateEstimator_DW.MemoryX_DSTATE_d[1];

  /* End of Delay: '<S71>/MemoryX' */

  /* Outputs for Atomic SubSystem: '<S71>/UseCurrentEstimator' */

  /* Constant: '<S71>/C' incorporates:
   *  Constant: '<S71>/D'
   */
  stateEstimator_UseCurrentEstimator(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_p, stateEstimator_B.Reshapeu_h,
    stateEstimator_B.Reshapey_o, stateEstimator_P_g.C_Value_f,
    stateEstimator_P_g.D_Value_f, stateEstimator_B.MemoryX_m,
    stateEstimator_B.Add_g, &stateEstimator_B.UseCurrentEstimator_l,
    &stateEstimator_DW.UseCurrentEstimator_l,
    &stateEstimator_P_g.UseCurrentEstimator_l);

  /* End of Outputs for SubSystem: '<S71>/UseCurrentEstimator' */

  /* Product: '<S3>/Product1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  Delay: '<S1>/Delay1'
   *  Reshape: '<S14>/Reshapexhat'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 6] *
      stateEstimator_B.Add[1] + ((real_T)
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j] *
      stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* Product: '<S68>/Product' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  Reshape: '<S71>/Reshapexhat'
   *  SignalConversion: '<S68>/TmpSignal ConversionAtProductInport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.sincos_o1[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] * (real32_T)
      stateEstimator_B.rtb_FIR_IMUaccel_k[2] +
      (stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
       stateEstimator_B.Add_g[1] +
       stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
       stateEstimator_B.Add_g[0]);
  }

  /* End of Product: '<S68>/Product' */

  /* Reshape: '<S133>/Reshapeu' */
  stateEstimator_B.Reshapeu_i[0] = stateEstimator_B.sincos_o1[0];
  stateEstimator_B.Reshapeu_i[1] = stateEstimator_B.sincos_o1[1];

  /* Sum: '<S134>/Add1' incorporates:
   *  Delay: '<S68>/Delay'
   */
  u0 = arg_posVIS_datin[0] - stateEstimator_DW.Delay_DSTATE_l[0];
  rtb_Reshape9to3x3columnmajor_tmp = arg_posVIS_datin[1] -
    stateEstimator_DW.Delay_DSTATE_l[1];

  /* Math: '<S134>/Math Function' incorporates:
   *  Constant: '<S134>/Constant'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_e);
  if ((u0 < 0.0F) && (stateEstimator_P_g.Constant_Value_e >
                      stateEstimator_B.DataTypeConversion2)) {
    u0 = -rt_powf_snf(-u0, stateEstimator_P_g.Constant_Value_e);
  } else {
    u0 = rt_powf_snf(u0, stateEstimator_P_g.Constant_Value_e);
  }

  if ((rtb_Reshape9to3x3columnmajor_tmp < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_e >
       stateEstimator_B.DataTypeConversion2)) {
    rtb_Reshape9to3x3columnmajor_tmp = -rt_powf_snf
      (-rtb_Reshape9to3x3columnmajor_tmp, stateEstimator_P_g.Constant_Value_e);
  } else {
    rtb_Reshape9to3x3columnmajor_tmp = rt_powf_snf
      (rtb_Reshape9to3x3columnmajor_tmp, stateEstimator_P_g.Constant_Value_e);
  }

  /* End of Math: '<S134>/Math Function' */

  /* DataTypeConversion: '<S133>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S180>/Constant'
   *  Constant: '<S181>/Constant'
   *  Constant: '<S182>/Constant'
   *  Constant: '<S183>/Constant'
   *  Logic: '<S134>/Logical Operator3'
   *  RelationalOperator: '<S180>/Compare'
   *  RelationalOperator: '<S181>/Compare'
   *  RelationalOperator: '<S182>/Compare'
   *  RelationalOperator: '<S183>/Compare'
   *  Sqrt: '<S134>/Sqrt'
   *  Sum: '<S134>/Sum of Elements'
   */
  rtb_DataTypeConversionEnable_h = ((arg_posVIS_datin[0] !=
    stateEstimator_P_g.checkifPosavailable_const) && (rtb_Sum_idx_2 <=
    stateEstimator_P_g.maxp3_const) && (y <= stateEstimator_P_g.maxq3_const) &&
    ((real32_T)sqrt(u0 + rtb_Reshape9to3x3columnmajor_tmp) <
     stateEstimator_P_g.planarjumpsVISPOS_const));

  /* Reshape: '<S133>/Reshapey' */
  stateEstimator_B.Reshapey_a[0] = arg_posVIS_datin[0];
  stateEstimator_B.Reshapey_a[1] = arg_posVIS_datin[1];

  /* Delay: '<S133>/MemoryX' incorporates:
   *  Constant: '<S133>/X0'
   *  Reshape: '<S133>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad_g != 0) {
    stateEstimator_DW.MemoryX_DSTATE_dl[0] = stateEstimator_P_g.X0_Value_j[0];
    stateEstimator_DW.MemoryX_DSTATE_dl[1] = stateEstimator_P_g.X0_Value_j[1];
  }

  stateEstimator_B.MemoryX_f[0] = stateEstimator_DW.MemoryX_DSTATE_dl[0];
  stateEstimator_B.MemoryX_f[1] = stateEstimator_DW.MemoryX_DSTATE_dl[1];

  /* End of Delay: '<S133>/MemoryX' */

  /* Outputs for Atomic SubSystem: '<S133>/UseCurrentEstimator' */

  /* Constant: '<S133>/C' incorporates:
   *  Constant: '<S133>/D'
   */
  stateEstimator_UseCurrentEstimator(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_g, stateEstimator_B.Reshapeu_i,
    stateEstimator_B.Reshapey_a, stateEstimator_P_g.C_Value_p,
    stateEstimator_P_g.D_Value_b, stateEstimator_B.MemoryX_f,
    stateEstimator_B.Add_c, &stateEstimator_B.UseCurrentEstimator_j,
    &stateEstimator_DW.UseCurrentEstimator_j,
    &stateEstimator_P_g.UseCurrentEstimator_j);

  /* End of Outputs for SubSystem: '<S133>/UseCurrentEstimator' */

  /* Reshape: '<S133>/Reshapeyhat' incorporates:
   *  Constant: '<S133>/C'
   *  Constant: '<S133>/D'
   *  Product: '<S137>/Product'
   *  Product: '<S137>/Product1'
   *  Sum: '<S137>/Add1'
   */
  stateEstimator_B.Reshapeyhat_l[0] = (stateEstimator_P_g.C_Value_p[0] *
    stateEstimator_B.Add_c[0] + stateEstimator_P_g.C_Value_p[2] *
    stateEstimator_B.Add_c[1]) + (stateEstimator_P_g.D_Value_b[0] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.D_Value_b[2] *
    stateEstimator_B.Reshapeu_i[1]);
  stateEstimator_B.Reshapeyhat_l[1] = (stateEstimator_P_g.C_Value_p[1] *
    stateEstimator_B.Add_c[0] + stateEstimator_P_g.C_Value_p[3] *
    stateEstimator_B.Add_c[1]) + (stateEstimator_P_g.D_Value_b[1] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.D_Value_b[3] *
    stateEstimator_B.Reshapeu_i[1]);

  /* DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity' */
  if (arg_controlModePosVSOrient_flagin &&
      (stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState <= 0)) {
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
  }

  /* Switch: '<S68>/UseIPPosSwitch' incorporates:
   *  DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity'
   *  Reshape: '<S133>/Reshapexhat'
   */
  if (arg_usePosVIS_flagin > stateEstimator_P_g.UseIPPosSwitch_Threshold) {
    stateEstimator_B.SimplyIntegrateVelocity[0] = stateEstimator_B.Add_c[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] = stateEstimator_B.Add_c[1];
  } else {
    stateEstimator_B.SimplyIntegrateVelocity[0] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1];
  }

  /* End of Switch: '<S68>/UseIPPosSwitch' */

  /* DataTypeConversion: '<S149>/Conversion' */
  stateEstimator_B.Conversion_pu[0] = stateEstimator_B.MemoryX_f[0];
  stateEstimator_B.Conversion_pu[1] = stateEstimator_B.MemoryX_f[1];

  /* Outputs for Enabled SubSystem: '<S153>/MeasurementUpdate' */

  /* Constant: '<S133>/C' incorporates:
   *  Constant: '<S133>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_a, stateEstimator_B.Reshapey_a,
    stateEstimator_P_g.C_Value_p, stateEstimator_B.Conversion_pu,
    stateEstimator_P_g.D_Value_b, stateEstimator_B.Reshapeu_i,
    stateEstimator_B.Product3_j, &stateEstimator_DW.MeasurementUpdate_b,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of Outputs for SubSystem: '<S153>/MeasurementUpdate' */

  /* Reshape: '<S71>/Reshapeyhat' incorporates:
   *  Constant: '<S71>/C'
   *  Constant: '<S71>/D'
   *  Product: '<S90>/Product'
   *  Product: '<S90>/Product1'
   *  Sum: '<S90>/Add1'
   */
  stateEstimator_B.Reshapeyhat_a[0] = (stateEstimator_P_g.C_Value_f[0] *
    stateEstimator_B.Add_g[0] + stateEstimator_P_g.C_Value_f[2] *
    stateEstimator_B.Add_g[1]) + (stateEstimator_P_g.D_Value_f[0] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.D_Value_f[2] *
    stateEstimator_B.Reshapeu_h[1]);
  stateEstimator_B.Reshapeyhat_a[1] = (stateEstimator_P_g.C_Value_f[1] *
    stateEstimator_B.Add_g[0] + stateEstimator_P_g.C_Value_f[3] *
    stateEstimator_B.Add_g[1]) + (stateEstimator_P_g.D_Value_f[1] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.D_Value_f[3] *
    stateEstimator_B.Reshapeu_h[1]);

  /* DataTypeConversion: '<S102>/Conversion' */
  stateEstimator_B.Conversion_j[0] = stateEstimator_B.MemoryX_m[0];
  stateEstimator_B.Conversion_j[1] = stateEstimator_B.MemoryX_m[1];

  /* Outputs for Enabled SubSystem: '<S106>/MeasurementUpdate' */

  /* Constant: '<S71>/C' incorporates:
   *  Constant: '<S71>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_n4, stateEstimator_B.Reshapey_o,
    stateEstimator_P_g.C_Value_f, stateEstimator_B.Conversion_j,
    stateEstimator_P_g.D_Value_f, stateEstimator_B.Reshapeu_h,
    stateEstimator_B.Product3_m, &stateEstimator_DW.MeasurementUpdate_e,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of Outputs for SubSystem: '<S106>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S35>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  /* DataTypeConversion: '<S14>/DataTypeConversionEnable' */
  if (nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.MeasurementUpdate_MODE) {
      stateEstimator_DW.MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S3>/Sum' incorporates:
     *  Constant: '<S3>/gravity'
     *  DiscreteFir: '<S5>/FIR_IMUaccel'
     *  Math: '<S3>/Math Function'
     *  Product: '<S3>/Product'
     *  Reshape: '<S14>/Reshapeu'
     */
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
      stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
        ((stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j + 1] *
          stateEstimator_B.FIR_IMUaccel[1] +
          stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j] *
          stateEstimator_B.FIR_IMUaccel[0]) +
         stateEstimator_B.Reshape9to3x3columnmajor[3 * stateEstimator_B.j + 2] *
         rtb_DataTypeConversion1_o_idx_1) +
        stateEstimator_P_g.gravity_Value_k[stateEstimator_B.j];
    }

    /* Sum: '<S60>/Sum' incorporates:
     *  Constant: '<S14>/C'
     *  Constant: '<S14>/D'
     *  Delay: '<S14>/MemoryX'
     *  Product: '<S60>/C[k]*xhat[k|k-1]'
     *  Product: '<S60>/D[k]*u[k]'
     *  Reshape: '<S14>/Reshapeu'
     *  Reshape: '<S14>/Reshapey'
     *  Sum: '<S60>/Add1'
     */
    stateEstimator_B.Add1 = stateEstimator_B.invertzaxisGain -
      ((stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
        stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]) +
       stateEstimator_P_g.D_Value * stateEstimator_B.rtb_FIR_IMUaccel_k[2]);

    /* Product: '<S60>/Product3' incorporates:
     *  Constant: '<S18>/KalmanGainL'
     *  DataTypeConversion: '<S56>/Conversion'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.KalmanGainL_Value_e[0] *
      stateEstimator_B.Add1;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.KalmanGainL_Value_e[1] *
      stateEstimator_B.Add1;
  } else {
    if (stateEstimator_DW.MeasurementUpdate_MODE) {
      /* Disable for Outport: '<S60>/L*(y[k]-yhat[k|k-1])' */
      stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_DW.MeasurementUpdate_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S35>/MeasurementUpdate' */

  /* BusCreator: '<Root>/BusConversion_InsertedFor_states_estimout_at_inport_0' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Reshape: '<S14>/Reshapexhat'
   *  Reshape: '<S71>/Reshapexhat'
   */
  arg_states_estimout->X = stateEstimator_B.SimplyIntegrateVelocity[0];
  arg_states_estimout->Y = stateEstimator_B.SimplyIntegrateVelocity[1];
  arg_states_estimout->Z = (real32_T)stateEstimator_B.Add[0];
  arg_states_estimout->yaw = stateEstimator_DW.Memory_PreviousInput[0];
  arg_states_estimout->pitch = stateEstimator_DW.Memory_PreviousInput[1];
  arg_states_estimout->roll = stateEstimator_DW.Memory_PreviousInput[2];
  arg_states_estimout->dx = stateEstimator_B.Add_g[0];
  arg_states_estimout->dy = stateEstimator_B.Add_g[1];

  /* Product: '<S3>/Product1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  Delay: '<S1>/Delay1'
   *  Reshape: '<S14>/Reshapexhat'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 6] *
      stateEstimator_B.Add[1] + ((real_T)
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
      stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j] *
      stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* BusCreator: '<Root>/BusConversion_InsertedFor_states_estimout_at_inport_0' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  DiscreteFilter: '<S5>/IIR_IMUgyro_r'
   *  SignalConversion: '<S2>/TmpSignal ConversionAtProductInport2'
   */
  arg_states_estimout->dz = (real32_T)stateEstimator_B.rtb_FIR_IMUaccel_k[2];
  arg_states_estimout->p = stateEstimator_B.inverseIMU_gain[3];
  arg_states_estimout->q = stateEstimator_B.inverseIMU_gain[4];
  arg_states_estimout->r = rtb_DataTypeConversion1_o_idx_0_tmp;

  /* Reshape: '<S14>/Reshapeyhat' incorporates:
   *  Constant: '<S14>/C'
   *  Constant: '<S14>/D'
   *  Product: '<S19>/Product'
   *  Product: '<S19>/Product1'
   *  Reshape: '<S14>/Reshapeu'
   *  Sum: '<S19>/Add1'
   */
  stateEstimator_B.Reshapeyhat = (stateEstimator_P_g.C_Value[0] *
    stateEstimator_B.Add[0] + stateEstimator_P_g.C_Value[1] *
    stateEstimator_B.Add[1]) + stateEstimator_P_g.D_Value *
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[2];

  /* ManualSwitch: '<S14>/ManualSwitchPZ' incorporates:
   *  Constant: '<S14>/P0'
   *  Constant: '<S18>/CovarianceZ'
   *  DataTypeConversion: '<S59>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting == 1) {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.CovarianceZ_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.CovarianceZ_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.CovarianceZ_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.CovarianceZ_Value[3];
  } else {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.P0_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.P0_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.P0_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.P0_Value[3];
  }

  /* End of ManualSwitch: '<S14>/ManualSwitchPZ' */

  /* ManualSwitch: '<S71>/ManualSwitchPZ' incorporates:
   *  Constant: '<S71>/P0'
   *  Constant: '<S89>/CovarianceZ'
   *  DataTypeConversion: '<S130>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_i == 1) {
    stateEstimator_B.ManualSwitchPZ_m[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_m[0] = stateEstimator_P_g.P0_Value_m[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = stateEstimator_P_g.P0_Value_m[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = stateEstimator_P_g.P0_Value_m[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = stateEstimator_P_g.P0_Value_m[3];
  }

  /* End of ManualSwitch: '<S71>/ManualSwitchPZ' */

  /* ManualSwitch: '<S133>/ManualSwitchPZ' incorporates:
   *  Constant: '<S133>/P0'
   *  Constant: '<S136>/CovarianceZ'
   *  DataTypeConversion: '<S177>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_b == 1) {
    stateEstimator_B.ManualSwitchPZ_p[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_p[0] = stateEstimator_P_g.P0_Value_h[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = stateEstimator_P_g.P0_Value_h[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = stateEstimator_P_g.P0_Value_h[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = stateEstimator_P_g.P0_Value_h[3];
  }

  /* End of ManualSwitch: '<S133>/ManualSwitchPZ' */

  /* DataTypeConversion: '<S71>/DataTypeConversionReset' incorporates:
   *  Constant: '<S71>/Reset'
   */
  rtb_DataTypeConversionReset_a = stateEstimator_P_g.Reset_Value;

  /* DataTypeConversion: '<S133>/DataTypeConversionReset' incorporates:
   *  Constant: '<S133>/Reset'
   */
  rtb_DataTypeConversionReset_i = stateEstimator_P_g.Reset_Value_a;

  /* Update for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_states[4] =
    stateEstimator_DW.IIR_IMUgyro_r_states[3];
  stateEstimator_DW.IIR_IMUgyro_r_states[3] =
    stateEstimator_DW.IIR_IMUgyro_r_states[2];
  stateEstimator_DW.IIR_IMUgyro_r_states[2] =
    stateEstimator_DW.IIR_IMUgyro_r_states[1];
  stateEstimator_DW.IIR_IMUgyro_r_states[1] =
    stateEstimator_DW.IIR_IMUgyro_r_states[0];
  stateEstimator_DW.IIR_IMUgyro_r_states[0] =
    stateEstimator_DW.IIR_IMUgyro_r_tmp;

  /* Update for DiscreteFir: '<S5>/FIR_IMUaccel' */
  /* Update circular buffer index */
  stateEstimator_DW.FIR_IMUaccel_circBuf--;
  if (stateEstimator_DW.FIR_IMUaccel_circBuf < 0) {
    stateEstimator_DW.FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf] =
    stateEstimator_B.inverseIMU_gain[0];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    5] = stateEstimator_B.inverseIMU_gain[1];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    10] = stateEstimator_B.inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S5>/FIR_IMUaccel' */

  /* Update for Delay: '<S3>/Delay2' incorporates:
   *  Reshape: '<S14>/Reshapexhat'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_B.Add[0];

  /* Update for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_DW.pressureFilter_IIR_states[1];
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_DW.pressureFilter_IIR_states[0];
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_DW.pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_DW.soonarFilter_IIR_states[1];
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_DW.soonarFilter_IIR_states[0];
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_DW.soonarFilter_IIR_tmp;

  /* Update for Delay: '<S14>/MemoryX' */
  stateEstimator_DW.icLoad = 0U;

  /* Product: '<S35>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S14>/A'
   *  Delay: '<S14>/MemoryX'
   *  Sum: '<S35>/Add'
   */
  stateEstimator_B.invertzaxisGain = stateEstimator_P_g.A_Value[1] *
    stateEstimator_DW.MemoryX_DSTATE[0] + stateEstimator_P_g.A_Value[3] *
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S14>/MemoryX' incorporates:
   *  Constant: '<S14>/A'
   *  Constant: '<S14>/B'
   *  Product: '<S35>/A[k]*xhat[k|k-1]'
   *  Product: '<S35>/B[k]*u[k]'
   *  Reshape: '<S14>/Reshapeu'
   *  Sum: '<S35>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[0] = ((stateEstimator_P_g.A_Value[0] *
    stateEstimator_DW.MemoryX_DSTATE[0] + stateEstimator_P_g.A_Value[2] *
    stateEstimator_DW.MemoryX_DSTATE[1]) + stateEstimator_P_g.B_Value[0] *
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[2]) +
    stateEstimator_B.Product3[0];
  stateEstimator_DW.MemoryX_DSTATE[1] = (stateEstimator_P_g.B_Value[1] *
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[2] +
    stateEstimator_B.invertzaxisGain) + stateEstimator_B.Product3[1];

  /* Update for Delay: '<S1>/Delay1' incorporates:
   *  Reshape: '<S71>/Reshapexhat'
   */
  stateEstimator_DW.Delay1_DSTATE[0] = stateEstimator_B.Add_g[0];
  stateEstimator_DW.Delay1_DSTATE[1] = stateEstimator_B.Add_g[1];
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 2; stateEstimator_B.j++) {
    /* Update for DiscreteFilter: '<S70>/IIRgyroz' */
    stateEstimator_B.cff = stateEstimator_B.j * 5;
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 4] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 3];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 3] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 2];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 2] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 1];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff + 1] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.cff] =
      stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.j];

    /* Update for UnitDelay: '<S77>/UD'
     *
     * Block description for '<S77>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[stateEstimator_B.j] =
      stateEstimator_B.TSamp[stateEstimator_B.j];
  }

  /* Update for Delay: '<S67>/Delay' incorporates:
   *  Reshape: '<S71>/Reshapexhat'
   */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_B.Add_g[0];
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_B.Add_g[1];

  /* Update for Delay: '<S71>/MemoryX' incorporates:
   *  Constant: '<S71>/A'
   *  Constant: '<S71>/B'
   *  Product: '<S106>/A[k]*xhat[k|k-1]'
   *  Product: '<S106>/B[k]*u[k]'
   *  Sum: '<S106>/Add'
   */
  stateEstimator_DW.icLoad_i = 0U;
  stateEstimator_DW.MemoryX_DSTATE_d[0] = ((stateEstimator_P_g.B_Value_p[0] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[2] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[0] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[2] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[0];
  stateEstimator_DW.MemoryX_DSTATE_d[1] = ((stateEstimator_P_g.B_Value_p[1] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[3] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[1] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[3] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[1];

  /* Update for Delay: '<S68>/Delay' incorporates:
   *  Reshape: '<S133>/Reshapexhat'
   */
  stateEstimator_DW.Delay_DSTATE_l[0] = stateEstimator_B.Add_c[0];
  stateEstimator_DW.Delay_DSTATE_l[1] = stateEstimator_B.Add_c[1];

  /* Update for Delay: '<S133>/MemoryX' incorporates:
   *  Constant: '<S133>/A'
   *  Constant: '<S133>/B'
   *  Product: '<S153>/A[k]*xhat[k|k-1]'
   *  Product: '<S153>/B[k]*u[k]'
   *  Sum: '<S153>/Add'
   */
  stateEstimator_DW.icLoad_g = 0U;
  stateEstimator_DW.MemoryX_DSTATE_dl[0] = ((stateEstimator_P_g.B_Value_pu[0] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[2] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[0] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[2] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[0];
  stateEstimator_DW.MemoryX_DSTATE_dl[1] = ((stateEstimator_P_g.B_Value_pu[1] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[3] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[1] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[3] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[1];

  /* Update for DiscreteIntegrator: '<S68>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.sincos_o1[0];
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.sincos_o1[1];
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = (int8_T)
    arg_controlModePosVSOrient_flagin;
}

/* Model initialize function */
void stateEstimator_o_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_stateEstimator_T *const stateEstimator_M =
    &(stateEstimator_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  stateEstimator_P_g.SaturationSonar_LowerSat = rtMinusInf;

  /* initialize error status */
  rtmSetErrorStatusPointer(stateEstimator_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &stateEstimator_B), 0,
                sizeof(B_stateEstimator_c_T));

  /* states (dwork) */
  (void) memset((void *)&stateEstimator_DW, 0,
                sizeof(DW_stateEstimator_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
