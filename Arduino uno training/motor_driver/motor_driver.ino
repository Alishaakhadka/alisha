int in1=7;
int in2=8;
 int ENA=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ENA,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ENA,100);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
delay(4000);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
delay(4000);
}
