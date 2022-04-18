/*
 * accel_to_vel_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "accel_to_vel".
 *
 * Model version              : 2.12
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Wed Apr  6 12:05:12 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "accel_to_vel.h"
#include "accel_to_vel_private.h"

/* Block parameters (default storage) */
P_accel_to_vel_T accel_to_vel_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S3>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: TransferFcn3_A
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  { -3.896, -94.32, -296.0, -666.0, -0.0 },

  /* Computed Parameter: TransferFcn3_C
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  { 0.0, 0.0, 0.0, 0.0, 562.4 },

  /* Expression: 1.5
   * Referenced by: '<Root>/Saturation'
   */
  1.5,

  /* Expression: -3
   * Referenced by: '<Root>/Saturation'
   */
  -3.0
};
