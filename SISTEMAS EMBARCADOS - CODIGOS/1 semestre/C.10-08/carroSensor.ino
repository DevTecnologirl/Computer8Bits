int SensorE = 7;
int SensorD = 8;
void setup() 
{
 pinMode(SensorE, INPUT);
 pinMode(SensorD, INPUT);
 pinMode(MotorE, OUTPUT);
 pinMode(MotorD, OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
 if((digitalRead(SensorD) == 0) && (digitalRead(SensorE) == 0))
 {
 Serial.println("Motor Direito: LIGADO");
 Serial.println("Motor Esquerdo: LIGADO");
 }

else
{
 if(digitalRead(SensorD) == 1)
 {
 Serial.println("Motor Direito: DESLIGADO");
 Serial.println("Motor Esquerdo: LIGADO");
 }
 if(digitalRead(SensorE) == 1)
 {
 Serial.println("Motor Direito: LIGADO");
 Serial.println("Motor Esquerdo: DESLIGADO");
 }
}

Serial.println("---------------------------------------------");
delay(1000);


}















 digitalWrite(MotorE, HIGH);
  digitalWrite(MotorD, LOW);
