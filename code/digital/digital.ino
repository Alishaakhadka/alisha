int d0=2;
int x;
int led=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(d0,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x=digitalRead(d0);
Serial.println(x);
delay(200);
if(x==1)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW); 
}
}
