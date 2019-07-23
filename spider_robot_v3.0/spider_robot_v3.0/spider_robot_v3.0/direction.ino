void forward(){
  spider(1);
  for (int i=0;i<46;i++){
    leg1.write(i);
    leg5.write(i+7);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    leg2.write(75-i);
    delay(mydelay);  
  }   
  for (int i=0;i<26;i++){ 
    foot1.write(i+20);
    foot5.write(175-i);
    foot3.write(30-i);
    foot6.write(100+i);
    foot4.write(34-i);
    foot2.write(146-i);
    delay(mydelay);   
  }  
  spider(0);
  for (int i=45;i>0;i--){  
    leg1.write(i);
    leg5.write(i+7);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    leg2.write(75-i);
    delay(mydelay);   
  }  
  for (int i=26;i>0;i--){
    foot1.write(i+20);
    foot5.write(175-i);
    foot3.write(30-i);
    foot6.write(100+i);
    foot4.write(34-i);
    foot2.write(146-i);
    delay(mydelay);  
  }    
  }

void backward(){
  spider(1);
  for (int i=0;i<26;i++){
    foot1.write(i+20);
    foot5.write(175-i);
    foot3.write(30-i);
    foot6.write(100+i);
    foot4.write(34-i);
    foot2.write(146-i);
    delay(mydelay);
  } 
  for (int i=0;i<46;i++){
    leg1.write(i);
    leg5.write(i+7);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    leg2.write(75-i);
    delay(mydelay);
  } 
  spider(0);
  for (int i=26;i>0;i--){
    foot1.write(i+20);
    foot5.write(175-i);
    foot3.write(30-i);
    foot6.write(100+i);
    foot4.write(34-i);
    foot2.write(146-i);
    delay(mydelay);   
  }  
   for (int i=45;i>0;i--){
    leg1.write(i);
    leg5.write(i+7);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    leg2.write(75-i);
    delay(mydelay);
  }
}
 
void turnLeft(){
  leg2.write(50);
  leg5.write(27);
  spider(4);
  
  for (int i=0;i<56;i++){
    leg1.write(i);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);  
    delay(mydelay);
  }  
  for (int i=0;i<26;i++){
    foot1.write(i+20);
    foot3.write(30-i);
    foot6.write(120-i);
    foot4.write(9+i);
      
    foot2.write(120-i);
    foot5.write(150+i);
    delay(mydelay);
  }  
  spider(5);
  for (int i=55;i>0;i--){
    leg1.write(i);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    delay(mydelay);
  }
  for (int i=26;i>0;i--){
    foot1.write(i+20);
    foot3.write(30-i);
    foot6.write(120-i);
    foot4.write(9+i);
     
    foot2.write(120-i);
    foot5.write(150+i);
    delay(mydelay);   
  }   
  }
  
void turnRight(){
  leg2.write(50);
  leg5.write(27);
  spider(2);
    
  for (int i=0;i<56;i++){
    leg1.write(i);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    delay(mydelay);
  }    
 for (int i=0;i<26;i++){
    foot1.write(45-i);
    foot3.write(5+i);
    foot6.write(100+i);
    foot4.write(34-i);
    foot2.write(95+i);
    foot5.write(175-i);
    delay(mydelay);
  }  
  spider(3);
  for (int i=55;i>0;i--){
    leg1.write(i);
    leg3.write(66-i);
    leg6.write(60-i);
    leg4.write(28+i);
    delay(mydelay);
  } 
  for (int i=26;i>0;i--){
    foot1.write(45-i);
    foot3.write(5+i);
    foot6.write(100+i);
    foot4.write(34-i);
    
    foot2.write(95+i);
    foot5.write(175-i);
    delay(mydelay);    
  }  
  }
  
 
  
  
  
  
  
 

  
 
