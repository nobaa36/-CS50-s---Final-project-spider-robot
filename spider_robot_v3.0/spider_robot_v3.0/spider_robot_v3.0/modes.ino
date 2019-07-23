void walkMode() { 
 if ( data[0]==122 && data[2]==126){
  detachAll(); 
 }
 if (data[0]<100) {
  attachAll();
  forward();
 }
 if (data[0]>144 ) {
  attachAll();
  backward();
 }
 if (data[3]>144 ) {
  attachAll();
  turnRight(); 
 }
 if (data[3]<100 ) {
  attachAll();
  turnLeft();
 }
}

void trickMode(){
  // start position for all servos
  // leg1 - 20, foot1 - 20
  // leg2 - 50, foot2 - 110
  // leg3 - 41, foot3 - 20
  // leg4 - 48, foot4 - 9
  // leg5 - 27, foot5 - 175 
  // leg6 - 35, foot6 - 120
  
 ledDots();
 byte footRange=45;
 if (data[0]>100 && data[0]<144 &&
     data[1]>100 && data[1]<144 &&
     data[2]>100 && data[2]<144 &&
     data[3]>100 && data[3]<144){
    foot1.write(20);
    foot2.write(110);
    foot3.write(20);
    foot4.write(9);
    foot5.write(175);
    foot6.write(120);   
    delay(50);
    detachAll();
  }
 if (data[1]<100){  //left side 
    attachAll();
    foot4.write(map(data[1],0,128,9+footRange,9));
    foot5.write(map(data[1],0,128,175-footRange,175));
    foot6.write(map(data[1],0,128,120-footRange,120));
    leg1.write(20); 
    leg2.write(50);
    leg3.write(41);
    leg5.write(27);
    leg4.write(48);  
    leg6.write(35);
  } 
 if (data[3]>144) {  //right side
    attachAll();
    foot1.write(map(data[3],124,255,20,20+footRange));
    foot2.write(map(data[3],124,255,110,110+footRange));
    foot3.write(map(data[3],124,255,30,5));
    leg1.write(20); 
    leg2.write(50);
    leg3.write(41);
    leg5.write(27);
    leg4.write(48);  
    leg6.write(35);
  }
 if (data[0]<122){
    attachAll();
    leg6.write(map(data[0],122,0,35,75));
  }
 if (data[0]>122){
    attachAll();
    leg4.write(map(data[0],122,255,48,88));
  }
 if (data[2]>126){
    attachAll();
    leg1.write(map(data[2],122,255,20,60));
  }
 if (data[2]<126){
    attachAll();
    leg3.write(map(data[2],122,0,41,81));  
  }
  
}
