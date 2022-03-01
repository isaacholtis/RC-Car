/*ANDROID ARDUINO BLUETOOTH RC CAR  */ 

/* READ THIS!!!

I just copied and pasted this code from somewhere on the internet, it 
doesn't necessarily work, I just used it for reference.

//this is arduino code//
/*-----------------------code start here -------------------------------------*/
int ena = 5;
int in1 = 6;
int in2 = 7;
char bt = 0;
/*------------------------------------------------------------------------------*/ 
void setup() 
{ 
  Serial.begin(9600);
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
} 
void loop() 
{ 
 if (Serial.available() > 0)
 {
  bt = Serial.read();
  if(bt == 'F')
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(ena, 255);
  }
   else if (bt == 'S')     //stop!! 
 {    
   digitalWrite(in1,LOW); 
   digitalWrite(in2,LOW); 
   digitalWrite(ena, 0);
 } 
 }
} 
/*---------------- E N  D ------------------------------------------------------*/