
int sensor=A0;
int moter=8;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(moter,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(sensor);
int val=map(x,680,400,0,100);
Serial.println(val);
delay(200);
if(val<=30)
{
  digitalWrite(moter,HIGH);
  }
  else
  {
    digitalWrite(moter,LOW);
    }
}
