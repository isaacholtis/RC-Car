int ena1 = 5;
int in1 = 7;
int in2 = 8;
int ena2 = 3;
int in3 = 12;
int in4 = 11;
int pos = 0;
char bt = 0;


#include <Servo.h>

Servo steering;

void setup() 
{ 
  steering.attach(9);
  Serial.begin(9600);
  pinMode(ena1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4,OUTPUT);
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
    digitalWrite(ena1, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 255);
    steering.write(80);
  }
  else if (bt == 'B')
  {
    digitalWrite(in4, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(ena2, 255);
    digitalWrite(in2, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(ena1, 255);
    steering.write(80);
  }
  else if (bt == 'L')
  {
       digitalWrite(in1,LOW); 
   digitalWrite(in2,LOW); 
   digitalWrite(ena1, 0);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 0);
    steering.write(0);
    delay(10);
  }
  else if (bt == 'R')
  {
       digitalWrite(in1,LOW); 
   digitalWrite(in2,LOW); 
   digitalWrite(ena1, 0);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 0);
    steering.write(180);
    delay(15);
  }
  else if (bt == 'G')
  {
        digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(ena1, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 255);
    steering.write(0);
  }
  else if (bt == 'I')
  {
        digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(ena1, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 255);
    steering.write(180);
  }
  else if (bt == 'H')
  {
        digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(ena1, 255);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(ena2, 255);
    steering.write(0);
  }
  else if (bt == 'J')
 {
       digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(ena1, 255);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(ena2, 255);
    steering.write(180);
 }
   else if (bt == 'S')     //stop!! 
 {    
   digitalWrite(in1,LOW); 
   digitalWrite(in2,LOW); 
   digitalWrite(ena1, 0);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    digitalWrite(ena2, 0);
    steering.write(80);
 }
 
  } 
}
/*---------------- E N  D ------------------------------------------------------*/