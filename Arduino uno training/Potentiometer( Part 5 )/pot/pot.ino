//YouTube|Tech at Home

int pot=A0;
int input=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(A0,INPUT);

}

void loop() 
{

  input=analogRead(pot);
  Serial.println(input);
  delay(300);

}
