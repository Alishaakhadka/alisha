
int trig= 6;
int echo=7;
int buzzer=9;
long distanceincm;
long timeinmicro;
void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(buzzer,OUTPUT);
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
 digitalWrite(buzzer,HIGH);
}
else{
  digitalWrite(buzzer,LOW);
}
}
