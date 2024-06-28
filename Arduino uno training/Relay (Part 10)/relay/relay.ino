

int relay=2;

void setup() 
{
 pinMode(2,OUTPUT);
}

void loop() 
{
  digitalWrite(relay,LOW);
  delay(2000);
  digitalWrite(relay,HIGH);
  delay(2000);
}
