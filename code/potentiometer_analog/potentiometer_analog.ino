int pot=A0;
int x;
int val;
int led=6;
void setup() {
  // put your setup code here, to run once:
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(pot);
Serial.println(x);
val=map(x,0,1023,0,255);
delay(200);
analogWrite(led,value);
}
