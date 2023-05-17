int vermelhoA=3, azulA=4, verdeA=5, verdeB=6, azulB=7, vermelhoB=8;

void setup() {
  pinMode (vermelhoA,OUTPUT);
  pinMode (azulA,OUTPUT);
  pinMode (verdeA,OUTPUT);
  pinMode (verdeB,OUTPUT);
  pinMode (azulB,OUTPUT);
  pinMode (vermelhoB,OUTPUT);
}

void loop() {
  
digitalWrite(verdeA,HIGH);
delay(2000);
digitalWrite(vermelho,HIGH);
delay(2000);

digitalWrite(verdeA,LOW);
delay(1000);
digitalWrite(azulA,HIGH);
delay(2000);

digitalWrite(azulA,LOW);
delay(1000);

digitalWrite(vermelhoA,HIGH);
delay(2000);
digitalWrite(vermelhoB,LOW);
delay(1000);

digitalWrite(verdeB,HIGH);
delay(2000);
digitalWrite(verdeB,LOW);
delay(1000);


digitalWrite(azulB,HIGH);
delay(2000);
digitalWrite(azulB,LOW);
delay(1000);


}
