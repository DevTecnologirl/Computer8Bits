int pinoSensor = 10;
int pinoLed = 13;

void setup() 
{
  pinMode(pinoSensor,INPUT);
  pinMode(pinoLed,OUTPUT);
}

void loop() 
{  
  if(digitalRead(pinoSensor)==0)
  {
    digitalWrite(pinoLed, HIGH);
  }   
  else{ digitalWrite(pinoLed,LOW); } 

}
