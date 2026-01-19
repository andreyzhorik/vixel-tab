#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

// TFT pins
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1
#define TFT_BL   21

#define TFT_SCK  14
#define TFT_MOSI 13
#define TFT_MISO 12

extern Adafruit_ST7789 tft;

// functions
void displayInit();
void drawHome();

#endif

#pragma once

void drawHome();
void drawHomePage1();
void drawCurrentPage();
void drawApp(int appId);
