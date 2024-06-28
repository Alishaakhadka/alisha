

int sw = 7;
int x;

void setup()
{

  Serial.begin(9600);
  pinMode(sw,INPUT_PULLUP);

}

void loop() {
  x = digitalRead(sw);
  Serial.println(x);
  delay(300);

}
