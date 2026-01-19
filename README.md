📱 Vixel Tab
-
Vixel Tab is a custom open-source tablet project based on ESP32 with a 2.8” ST7789 TFT display and resistive touch screen (XPT2046).
The goal of this project is to create a simple tablet-like interface with apps, pages, gestures, and a modular OS structure.

![vixel tab](https://github.com/user-attachments/assets/b847cba8-c641-42db-96d5-11cc802a64fd)
___
✨ Features
-
ESP32-32E based system

2.8" TFT display (240×320, ST7789)

Resistive touchscreen (XPT2046)

SPI display and touch drivers

Modular OS structure (Display, Touch, Gestures, OS)

App grid UI (home pages)

Page switching (tap / swipe – work in progress)

🔧 Hardware Used
-
Board: ESP32-32E

Display: 2.8” TFT, 240×320, ST7789 (SPI)

Touch: Resistive touch, XPT2046 (SPI)

Backlight pin: IO21

LCD SPI pins:

CS: IO15

DC: IO2

SCK: IO14

MOSI: IO13

MISO: IO12

🧩 Libraries Required
-
Install these from Arduino Library Manager:

Adafruit GFX Library

Adafruit ST7789

XPT2046_Touchscreen

SPI (built-in)

🚀 How to Build & Upload
-
Install Arduino IDE

Install ESP32 board support

Install required libraries

Open vixel-os.ino

Select correct ESP32 board and port

Upload the sketch

⚠️ Current Status
-
✅ Display works

✅ UI draws correctly

⚠️ Touch calibration still needs improvement

⚠️ Gestures are experimental

❌ No real apps yet (UI only)

🛣️ Planned Features

Proper touch calibration

Swipe gestures between pages

On-screen keyboard

App launcher system

Settings app

Paint / Notes app

Battery status UI

🤝 Contributing
-
This project is made for learning and experimentation.
Pull requests, ideas, and fixes are welcome.

📜 License

MIT License – free to use, modify, and share.
