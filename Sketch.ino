#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SSD1306_128X64_ALT0_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);   


// End of constructor list

String msg;
void draw(void) {
  // graphic commands to redraw the complete screen should be placed here  
 
  char buf[50];  
  msg.toCharArray(buf,50);
  u8g2.drawStr(2, 22, buf);
}

void setup(void) {
  Serial.begin(9600);
  Serial.println("Ready");
  u8g2.begin();
}

void loop(void) {
  u8g2.setFont(u8g2_font_ncenB14_tr);
  char c;
    while(Serial.available()){
      delay(10);
      c = Serial.read();
      msg += c;
      }
      if(msg.length() > 0){
        Serial.println(msg);
    u8g2.firstPage();
    do {
      draw();
    } while ( u8g2.nextPage() );
  msg = "";
      }
}
