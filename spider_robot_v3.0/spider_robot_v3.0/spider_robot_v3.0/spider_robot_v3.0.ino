#include <SPI.h>
#include <Servo.h>
#include "RF24.h"
#include "LedControl.h"
LedControl lc=LedControl(12,11,10,1);

Servo foot1,foot2,foot3,foot4,foot5,foot6,leg1,leg2,leg3,leg4,leg5,leg6;

const uint64_t pipe = 0xE8E8F0F0E1LL;
RF24 radio(40,53);
bool listening=false;
byte data[5];
byte mydelay=2;  // robot speed

void setup(){
 Serial.begin(115200);
 
 lc.shutdown(0,false);
 lc.setIntensity(0,15);
 lc.clearDisplay(0);
 data[4]=2;  //awaiting mode
 
 radio.begin();
 radio.openReadingPipe(1,pipe);
 radio.startListening();
 delay(1000);
}

void loop(){
 if (radio.available()){
  
  listening=false;
  while (!listening){
   listening=radio.read(data, sizeof(data));}
    
 if (data[0]==0 && data[1]==0 && data[2]==0 && data[3]==0 && data[4]==0){
  data[0]=122;
  data[1]=128;
  data[2]=126;
  data[3]=124;
  data[4]=1;
 }
 
 Serial.print(data[0]);
 Serial.print(" , ");
 Serial.print(data[1]); 
 Serial.print(" , ");
 Serial.print(data[2]); 
 Serial.print(" , ");
 Serial.print(data[3]); 
 Serial.print(" , ");
 Serial.println(data[4]); 
}

 if (data[4]==1){
  walkMode();
 } 
 if (data[4]==0){ 
  trickMode();
 }
 if (data[4]==2){
  servos();
  delay(1000);
  spider(0);
  detachAll();
  data[4]=3;
 }
}



