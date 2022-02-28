/*ANDROID ARDUINO BLUETOOTH RC CAR  */ 

/* READ THIS!!!

I just copied and pasted this code from somewhere on the internet, it 
doesn't necessarily work, I just used it for reference.

//this is arduino code//
/*-----------------------code start here -------------------------------------*/
int led = 3;        //led 
int outPin1 = 5;     //motor1 
int outPin2 = 6;    //motor1 
int outPin4 = 11;   //motor2 
int outPin3 = 12;   //motor2 
char bt = 0;       //BT  
/*------------------------------------------------------------------------------*/ 
void setup() 
{ 
Serial.begin(9600); 
pinMode(outPin1,OUTPUT); 
pinMode(outPin2,OUTPUT); 
pinMode(outPin3,OUTPUT); 
pinMode(outPin4,OUTPUT); 
pinMode(led,OUTPUT); 
} 
void loop() 
{ 
if (Serial.available() > 0) 
{ 
 bt = Serial.read(); 
 digitalWrite(led, 1); 
 /*________________________________________________________________________*/ 
 if(bt == 'F')        //move forwards 
 { 
   digitalWrite(outPin1,HIGH); 
   digitalWrite(outPin2,LOW); 
   digitalWrite(outPin3,HIGH); 
   digitalWrite(outPin4,LOW); 
 } 
 else if (bt == 'B')       //move backwards 
 { 
   digitalWrite(outPin1,LOW); 
   digitalWrite(outPin2,HIGH); 
   digitalWrite(outPin3,LOW); 
   digitalWrite(outPin4,HIGH); 
 } 
 else if (bt == 'S')     //stop!! 
 {    
   digitalWrite(outPin1,LOW); 
   digitalWrite(outPin2,LOW); 
   digitalWrite(outPin3,LOW); 
   digitalWrite(outPin4,LOW); 
 } 
 else if (bt == 'R')    //right 
 { 
   digitalWrite(outPin1,HIGH); 
   digitalWrite(outPin2,LOW); 
   digitalWrite(outPin3,LOW); 
   digitalWrite(outPin4,LOW); 
 } 
 else if (bt == 'L')     //left 
 { 
   digitalWrite(outPin1,LOW); 
   digitalWrite(outPin2,LOW); 
   digitalWrite(outPin3,HIGH); 
   digitalWrite(outPin4,LOW); 
 } 
 else if (bt == 'I')    //forward right 
 { 
   digitalWrite(outPin1,HIGH); 
   digitalWrite(outPin2,LOW); 
   digitalWrite(outPin3,LOW); 
   digitalWrite(outPin4,HIGH); 
 } 
 else if (bt == 'G')    //forward left 
 { 
   digitalWrite(outPin1,LOW); 
   digitalWrite(outPin2,HIGH); 
   digitalWrite(outPin3,HIGH); 
   digitalWrite(outPin4,LOW); 
 } 
 } 
} 
/*---------------- E N  D ------------------------------------------------------*/