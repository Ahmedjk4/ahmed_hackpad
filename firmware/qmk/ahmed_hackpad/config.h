#pragma once

/* Rotary encoder pads (Pad A = GP27, Pad B = GP26) */
#define ENCODER_A_PINS { GP27 }
#define ENCODER_B_PINS { GP26 }

/* Detents-to-steps ratio. Most EC11-style encoders use 4.
   If one click registers as 2 volume steps, change to 2.
   If it registers as half a step, change to 1. */
#define ENCODER_RESOLUTION 4

/* Direct-pin switches are active-low (switch to GND). QMK enables the
   internal pull-ups automatically for DIRECT_PINS, and the encoder pins
   are pulled up by the encoder driver, so no extra pull-up defines are
   needed. */
#define MATRIX_HAS_GHOST_FALSE