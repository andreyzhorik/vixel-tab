#include <Arduino.h>
#include "Types.h"
#include "TouchGestures.h"

// this MUST exist somewhere (Touch.cpp)
bool touchPressed(int &x, int &y);

static bool touching = false;
static int startX = 0;
static int startY = 0;
static int lastX = 0;
static int lastY = 0;

Gesture getGesture() {
  int x, y;

  if (touchPressed(x, y)) {
    lastX = x;
    lastY = y;

    if (!touching) {
      touching = true;
      startX = x;
      startY = y;
    }
    return GESTURE_NONE;
  }

  if (touching) {
    touching = false;

    int dx = lastX - startX;
    int dy = lastY - startY;

    if (abs(dx) > abs(dy) && abs(dx) > SWIPE_THRESHOLD) {
      return dx > 0 ? SWIPE_RIGHT : SWIPE_LEFT;
    }

    if (startY > (SCREEN_HEIGHT - BOTTOM_ZONE) && dy < -SWIPE_THRESHOLD) {
      return SWIPE_UP_HOME;
    }
  }

  return GESTURE_NONE;
}
