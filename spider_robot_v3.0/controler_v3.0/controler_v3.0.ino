#include <LiquidCrystal.h>  // lcd library
#include <SPI.h>
#include "RF24.h"

const uint64_t pipe = 0xE8E8F0F0E1LL;
RF24 radio(9,10);
LiquidCrystal lcd(2, 8, 3, 4, 5, 6);

bool sending=false;
byte data[5];
bool spiderMode=true; // true=walking , false=tricks

void setup() {
Serial.begin(115200);
radio.begin();
radio.openWritingPipe(pipe);
pinMode(18,INPUT_PULLUP);
pinMode(19,INPUT_PULLUP);
lcd.begin(16, 2);
chooseMode();
}

void loop() {
 if (spiderMode){
  data[4]=1; 
 }else {
  data[4]=0;
 }
 sendData();
 if (digitalRead(18)==LOW){
 delay(500);
 chooseMode();
 }
}
 
 
void sendData(){
  byte leftHorizontal=map(analogRead(A0),0,1023,0,255);  
  byte leftVertical=map(analogRead(A1),0,1023,0,255);  
  byte rightVertical=map(analogRead(A2),0,1023,0,255);
  byte rightHorizontal=map(analogRead(A3),0,1023,0,255);
        data[1]=leftVertical;
        data[0]=leftHorizontal;
        data[3]=rightVertical;
        data[2]=rightHorizontal;
        Serial.print(data[0]);
        Serial.print(" , ");
        Serial.print(data[1]); 
        Serial.print(" , ");
        Serial.print(data[2]); 
        Serial.print(" , ");
        Serial.print(data[3]); 
        Serial.print(" , ");
        Serial.println(data[4]); 
 
        sending=false;
        while (!sending){     
        sending=radio.write(data, sizeof(data));  
        }   
}

