#include "OS.h"
#include "Types.h"
#include "TouchGestures.h"
#include "Display.h"

int currentPage = 0;
int currentApp = -1; // -1 = home

void openApp(int appId) {
  currentApp = appId;
  drawApp(appId);
}

void osUpdate() {
  Gesture g = getGesture();

  if (currentApp != -1) {
    if (g == SWIPE_UP_HOME) {
      currentApp = -1;
      currentPage = 0;
      drawHome();
    }
    return;
  }

  if (g == SWIPE_LEFT && currentPage < 1) {
    currentPage++;
    drawCurrentPage();
  }

  if (g == SWIPE_RIGHT && currentPage > 0) {
    currentPage--;
    drawCurrentPage();
  }
}
