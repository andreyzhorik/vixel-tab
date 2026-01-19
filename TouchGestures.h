#pragma once
#include <Arduino.h>

enum Gesture {
  GESTURE_NONE,
  SWIPE_LEFT,
  SWIPE_RIGHT,
  SWIPE_UP_HOME
};

Gesture getGesture();
