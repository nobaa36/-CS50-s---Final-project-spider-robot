void chooseMode(){
  
lcd.setCursor(2,0);
lcd.print("Choose mode"); 
lcd.setCursor(0,1); 
lcd.print("<<<walk mode>>>"); 

while (digitalRead(18)==HIGH){
  if (spiderMode){
    lcd.setCursor(0,1); 
    lcd.print("<<<walk mode>>>");     
  }
  else{
    lcd.setCursor(0,1); 
    lcd.print("<<<trick mode>>>");   
  }
  
  Serial.println(analogRead(A1));
  if (analogRead(A1)>700 || analogRead(A1)<400){     
  spiderMode=!spiderMode;
  delay(500);
  }
}

lcd.clear();
lcd.setCursor(2,0);
  if (spiderMode){
   lcd.print("walk mode "); 
  } else {
   lcd.print("trick mode");
  }
lcd.setCursor(0,1); 
lcd.print("Change mode>>>"); 

}

