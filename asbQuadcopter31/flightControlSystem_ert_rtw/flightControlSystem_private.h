/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_private.h
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

#ifndef RTW_HEADER_flightControlSystem_private_h_
#define RTW_HEADER_flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "flightControlSystem.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP);
extern void flightControlSystem_Logging_Start(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW);
extern void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], const real32_T
  rtu_posRef[8], const statesEstim_t *rtu_states_estim, const CommandBus
  *rtu_ReferenceValueServerBus, const SensorsBus *rtu_Sensors, real32_T
  rtu_sensordata_datin, real32_T rtu_sensordata_datin_d, real32_T
  rtu_sensordata_datin_e, real32_T rtu_sensordata_datin_c, real32_T
  rtu_sensordata_datin_cg, real32_T rtu_sensordata_datin_i, real32_T
  rtu_sensordata_datin_h, real32_T rtu_sensordata_datin_b, real32_T
  rtu_sensordata_datin_dz, uint32_T rtu_sensordata_datin_n,
  B_Logging_flightControlSystem_T *localB, DW_Logging_flightControlSystem_T
  *localDW);

#endif                                 /* RTW_HEADER_flightControlSystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
