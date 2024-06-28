int sw=7;
int input = 0 ;
void setup() {
  pinMode(7,input);
  Serial.begin(9600);
}

void loop() {
   input=digitalRead(sw);
  Serial.print(input);
  delay(300);
 
}
