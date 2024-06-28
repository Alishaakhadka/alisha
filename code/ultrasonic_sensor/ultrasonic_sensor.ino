
 int trig1 = 2;
 int echo1 = 3;
 int trig2 = 4;
 int echo2 = 5;
 int led1  = 6;
 int led2 = 7;
long timeInMicro1;
long distance1;
long timeInMicro2;
long distance2;

void setup() 
{
  Serial.begin(9600);
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
   pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
  
}

void loop()  
{
 digitalWrite(trig1,LOW);
 delayMicroseconds(2);
 digitalWrite(trig1,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig1,LOW);
 

 timeInMicro1= pulseIn(echo1,HIGH);

 distance1 = ((timeInMicro1/29)/2);
 
 digitalWrite(trig2,LOW);
 delayMicroseconds(2);
 digitalWrite(trig2,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig2,LOW);
 

 timeInMicro2= pulseIn(echo2,HIGH);

 distance2 = ((timeInMicro2/29)/2);


 Serial.println(distance2);
// delay(200);


  if(distance1<=15)
  {
    digitalWrite(led1,HIGH);
    }
  
    
       else if(distance2<=15)
      {
        digitalWrite(led2,HIGH);
        
        }
 else
 {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  }



 
 
  }

 
