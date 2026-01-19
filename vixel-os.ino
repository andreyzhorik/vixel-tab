#include "Display.h"
int touchStartX = -1;
int touchStartY = -1;
unsigned long touchStartTime = 0;
int currentPage = 0;
void drawHome();
void drawHomePage1();
bool touchPressed(int &x, int &y);

bool touchPressed(int &x, int &y) {
  return false; // placeholder, no touch yet
}

void setup() {
  Serial.begin(115200);
  displayInit();
  drawHome();
}

void loop() {
  int x, y;

  if (touchPressed(x, y)) {
    if (touchStartX == -1) {
      // finger just touched
      touchStartX = x;
      touchStartY = y;
      touchStartTime = millis();
    }
  } else {
    // finger released
    if (touchStartX != -1) {
      int dx = x - touchStartX;
      unsigned long dt = millis() - touchStartTime;

      // swipe only if fast enough and far enough
      if (dt < 500 && abs(dx) > 60) {
        if (dx < 0 && currentPage < 1) {
          currentPage++;
        } 
        else if (dx > 0 && currentPage > 0) {
          currentPage--;
        }

        if (currentPage == 0) drawHome();
        if (currentPage == 1) drawHomePage1();
      }

      // reset touch state
      touchStartX = -1;
    }
  }
}
