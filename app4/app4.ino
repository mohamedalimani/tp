#include<Servo.h>

int servoPin = 2 ;
int angle = 0 ;
Servo servo1 ;
void setup() {
  // put your setup code here, to run once:
servo1.attach(servoPin) ;
pinMode(angle,INPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
int teta = analogRead(angle) ;
int x = map(teta,0,1023,0,180) ;
servo1.write(x) ;
//delay(100) ;
}
