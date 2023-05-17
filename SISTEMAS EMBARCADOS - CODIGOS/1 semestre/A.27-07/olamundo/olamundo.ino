int pinoLed = 13;
int pinoSensor = 7;
void setup() 
{
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoSensor,INPUT);
  digitalWrite(pinoLed,HIGH);
}
void loop() 
{
  if(digitalRead(pinoSensor) == HIGH){
    digitalWrite(pinoLed, LOW);
  }
  else{
    digitalWrite(pinoLed, HIGH);
  }
}
