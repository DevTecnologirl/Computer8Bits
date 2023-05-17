int vermA=3, azulA=4, verdA=5, verdB=6, azulB=7, vermB=8;

void setup() {
  pinMode (vermA,OUTPUT);
  pinMode (azulA,OUTPUT);
  pinMode (verdA,OUTPUT);
  pinMode (verdB,OUTPUT);
  pinMode (azulB,OUTPUT);
  pinMode (vermB,OUTPUT);
}

void loop() {
digitalWrite(verdA,HIGH);
delay(100);
digitalWrite(verdA,LOW);
delay(100);

digitalWrite(vermB,HIGH);
delay(100);
digitalWrite(vermB,LOW);
delay(100);

digitalWrite(azulA,HIGH);
delay(1000);
digitalWrite(azulA,LOW);
delay(1000);


digitalWrite(vermB,HIGH);
delay(1000);
digitalWrite(vermB,LOW);
delay(100);


digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(1000);


digitalWrite(8,HIGH);
delay(1000);
digitalWrite(8,LOW);
delay(1000);
}
