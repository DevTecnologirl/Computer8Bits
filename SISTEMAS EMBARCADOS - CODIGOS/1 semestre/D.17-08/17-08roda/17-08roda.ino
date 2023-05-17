int sentido1 = 4;
int velocidade1 = 5;
int sentido2 = 6;
int velocidade2 = 7;
void setup() 
{
 pinMode (sentido1, OUTPUT);
 pinMode (velocidade1, OUTPUT);
 pinMode (sentido2, OUTPUT);
 pinMode (velocidade2, OUTPUT);
}

void loop() 
{
  digitalWrite(sentido1, 0);
  digitalWrite(sentido2, 0);
  
  analogWrite(velocidade1, 255);
  analogWrite(velocidade2, 255);
  /* analogWrite será usado para acessar o pwm   */
  delay(10000);

  analogWrite(velocidade1, 0);
  analogWrite(velocidade2, 0);
  delay(2000);
  
  digitalWrite(sentido1, 1);
  digitalWrite(sentido2, 1);
   
  analogWrite(velocidade1, 255);
  analogWrite(velocidade2, 255);
  delay(10000);
  
  analogWrite(velocidade1,0);
  analogWrite(velocidade2,0);
  delay(2000);  

 
}
