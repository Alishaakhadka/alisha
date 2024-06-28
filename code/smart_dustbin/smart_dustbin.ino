
#include<Servo.h>
Servo s1;
int trig= 6;
int echo=7;
long distanceincm;
long timeinmicro;
void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(7,INPUT);
s1.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
timeinmicro = pulseIn(echo,HIGH);
distanceincm =((timeinmicro/29)/2);
Serial.println(distanceincm);
if(distanceincm<=15){
  s1.write(150);
}
else{
  s1.write(0);
}
}
