int trig = 7;
int echo = 8;
long distance = 0;
long timeinmicro = 0;
void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  timeinmicro = pulseIn(echo, HIGH);
  distance = ((timeinmicro * 0.034) / 2);
  Serial.println(distance);
  delay(100);
  if(distance<=15)
  {
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
  }
}
