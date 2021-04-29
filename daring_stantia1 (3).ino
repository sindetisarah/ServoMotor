#include <Servo.h>
Servo servo1;

int Red=4;
int Blue=5;
int Green=6;

int val;
int potpin=0;


void setup() 
{
  
  Serial.begin(9600);
  servo1.attach(3); 
  
  
  pinMode(Red, OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
  
}
 
void loop() {
  val=analogRead(potpin);
  val=map(val,0,1023,0,180);
  servo1.write(val);
  
  
  if(val<=60){
    
    digitalWrite(Red,HIGH);
    digitalWrite(Blue,LOW);
    digitalWrite(Green,LOW);
  }
  delay(15);
  
    if(val>60 && val<=120){
     
    digitalWrite(Blue,HIGH);
    digitalWrite(Green,LOW);
    digitalWrite(Blue,LOW);
   }
  delay(15);
   if(val>120 && val<=180);{
     
    digitalWrite(Green,HIGH);
    digitalWrite(Blue,LOW);
    digitalWrite(Green,LOW);
   }
}

//Where ServoMotor is used:
//Focusing in cameras
//Automatic Hand Dryers

//Controlling Toy Cars
//Electric Cars to avoid accidents.
// Packaging Robots assistance in Manufacturing Industries

  
  
  















