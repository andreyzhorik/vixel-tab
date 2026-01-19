#pragma once
#include <Arduino.h>

#define SCREEN_WIDTH  240
#define SCREEN_HEIGHT 320

#define SWIPE_THRESHOLD 50
#define BOTTOM_ZONE 40

enum Gesture {
  GESTURE_NONE,
  SWIPE_LEFT,
  SWIPE_RIGHT,
  SWIPE_UP_HOME
};
