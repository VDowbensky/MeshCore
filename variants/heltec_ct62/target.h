#pragma once

#define RADIOLIB_STATIC_ONLY 1
#include <RadioLib.h>
#include <helpers/radiolib/RadioLibWrappers.h>
#include "HT-CT62Board.h"
#include <helpers/radiolib/CustomSX1262Wrapper.h>
#include <helpers/AutoDiscoverRTCClock.h>
#include <helpers/SensorManager.h>

#define DISPLAY_CLASS SSD1306Display


#ifdef DISPLAY_CLASS
#include <helpers/ui/SSD1306Display.h>
#include <helpers/ui/MomentaryButton.h>
#endif

extern Heltec_CT62_Board board;
extern WRAPPER_CLASS radio_driver;
extern AutoDiscoverRTCClock rtc_clock;
extern SensorManager sensors;

#ifdef DISPLAY_CLASS
  DISPLAY_CLASS display(NULL);
  MomentaryButton user_btn(PIN_USER_BTN, 1000, true);
#endif

bool radio_init();
mesh::LocalIdentity radio_new_identity();
