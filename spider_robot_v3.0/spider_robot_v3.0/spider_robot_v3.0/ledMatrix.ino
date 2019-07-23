byte symbol[7][8]={
 {B00000000,
  B01000010,
  B10100101,
  B00011000,
  B00011000,
  B10100101,
  B01000010, // 0 - forwad and backward
  B00000000},
  
 {B00000000,
  B11000011,
  B00100100,
  B00011000,
  B00011000,
  B00100100,
  B11000011,  // 1 - forward and backward
  B00000000},
  
 {B00110000,
  B00010000,
  B10010000,
  B11111000,
  B00011111,
  B00001001,
  B00001000,  // 2 - go right
  B00001100},
  
 {B00110000,
  B00001000,
  B10001000,
  B10011110,
  B01111001,
  B00010001,   // 3 - go right
  B00010000,
  B00001100},
  
 {B00001100,
  B00001000,
  B00001001,
  B00011111,
  B11111000,
  B10010000,  // 4 - go left
  B00010000,
  B00110000},
  
 {B00001100,
  B00010000,
  B00010001,
  B01111001,
  B10011110,  // 5 - go left
  B10001000,
  B00001000,
  B00110000},
  
  {B01001000,
  B10010010,
  B01010101,
  B01111000,
  B01111000,  // 6-trick mode
  B01010101,
  B10010010,
  B01001000}};

void spider(int number){
  for (int i=0;i<8;i++){
    lc.setRow(0,i,symbol[number][i]);
  }
}


void ledDots(void){
   if (data[2]>126) {
     lc.setRow(0,map(data[3],255,0,6,0)+1,B00011000>>map(data[2],127,255,0,3));
     lc.clearDisplay(0);
   } 
   else {
    lc.setRow(0,map(data[3],255,0,6,0)+1,B00011000<<map(data[2],126,0,0,3));
    lc.clearDisplay(0);
   }
   if (data[0]>122) {
     lc.setRow(0,constrain(map(data[1],255,0,7,0)-1,0,7),B00011000<<map(data[0],122,255,0,3));
     lc.clearDisplay(0);
   } 
   else {
     lc.setRow(0,constrain(map(data[1],255,0,7,0)-1,0,7),B00011000>>map(data[0],123,0,0,3));
     lc.clearDisplay(0);
   }
  }




     
