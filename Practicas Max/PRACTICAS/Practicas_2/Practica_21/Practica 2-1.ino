int ledRojo = 2;
int ledAzul= 3;
int ledAmarillo= 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRojo,HIGH);
  delay(100); 
  digitalWrite(ledRojo,LOW);
  delay(100); 
  digitalWrite(ledAzul,HIGH);
  delay(100);
  digitalWrite(ledAzul,LOW); 
  delay(100); 
  digitalWrite(ledAmarillo,HIGH); 
  delay(100); 
  digitalWrite(ledAmarillo,LOW); 
  delay(100); 
}
