# Arduino_Sketch-Bluetooth-and-SSD1306-Display
This Arduino setup can be used to send messages from phone and display it to the OLED via Bluetooth.

## Components used:
- HC-05 Bluetooth module
- SSD1306 OLED
- Arduino Nano
- Breadboard(optional)

## Libraries included:
- U8g2lib.h
- Wire.h

### Also include this constructor for OLED display
U8G2_SSD1306_128X64_ALT0_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
