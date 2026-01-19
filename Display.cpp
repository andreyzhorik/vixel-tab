#include "Display.h"

void displayInit() {
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);

  SPI.begin(TFT_SCK, TFT_MISO, TFT_MOSI);

  tft.init(240, 320);
  tft.setRotation(2);
  tft.fillScreen(ST77XX_BLACK);
  tft.invertDisplay(false);
}

void drawHome() {
  uint16_t darkRed = tft.color565(30, 0, 0);
  uint16_t midRed  = tft.color565(120, 0, 0);
  uint16_t bright  = tft.color565(220, 30, 30);

  // background
  tft.fillScreen(darkRed);

  // status bar
  tft.fillRect(0, 0, 240, 28, midRed);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.setCursor(8, 6);
  tft.print("VIXEL OS");

  // app tiles (2 x 3)
  tft.setTextSize(2);
  tft.setTextColor(ST77XX_WHITE);

  // row 1
  tft.fillRoundRect(10, 40, 100, 50, 8, midRed);
  tft.setCursor(32, 58); tft.print("AI");

  tft.fillRoundRect(130, 40, 100, 50, 8, midRed);
  tft.setCursor(150, 58); tft.print("CLOCK");

  // row 2
  tft.fillRoundRect(10, 105, 100, 50, 8, midRed);
  tft.setCursor(28, 123); tft.print("GAMES");

  tft.fillRoundRect(130, 105, 100, 50, 8, midRed);
  tft.setCursor(138, 123); tft.print("SETTINGS");

  // row 3
  tft.fillRoundRect(10, 170, 100, 50, 8, midRed);
  tft.setCursor(30, 188); tft.print("CHAT");

  tft.fillRoundRect(130, 170, 100, 50, 8, midRed);
  tft.setCursor(155, 188); tft.print("WEB");
}
void drawHomePage1() {
  // temporary test content
  Serial.println("Home Page 1");
}

void drawCurrentPage() {
  extern int currentPage;
  if (currentPage == 0) drawHome();
  if (currentPage == 1) drawHomePage1();
}

void drawApp(int appId) {
  // black screen
  // draw appId as text
}