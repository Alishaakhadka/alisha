int pot=A0;
int input=0;
int pot1;
void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
}

void loop() {
Serial.println(pot1);
input=analogRead(pot);
 pot1=map(input,0,1023,0,255);
delay(300);

}
