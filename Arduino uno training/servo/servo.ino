#include<Servo.h>
 Servo ak;
 int i=0;
 int pot=A0;
 int input=0;
 int pot1;

void setup() {
  // put your setup code here, to run once:
 ak.attach(9);
  Serial.begin(9600);
  pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(pot1);
input=analogRead(pot);    
 pot1=map(input,0,1023,0,255);
  ak.write(pot1);
}
