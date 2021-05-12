int ledRojo1 = 2;
int ledRojo2= 3;
int ledRojo3= 4;
int ledRojo4 =5;
int buzzer=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledRojo1, OUTPUT);
  pinMode(ledRojo2, OUTPUT);
  pinMode(ledRojo3, OUTPUT);
  pinMode(ledRojo4, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRojo1,HIGH);
  delay(100); 
  digitalWrite(ledRojo1,LOW);
  delay(100); 
  digitalWrite(ledRojo2,HIGH);
  delay(100);
  digitalWrite(ledRojo2,LOW); 
  delay(100); 
  digitalWrite(ledRojo3,HIGH); 
  delay(100); 
  digitalWrite(ledRojo3,LOW); 
  delay(100);
  digitalWrite(ledRojo4,HIGH); 
  delay(100);

  digitalWrite(buzzer,HIGH); 
  delay(100);
  digitalWrite(buzzer,LOW); 
  delay(100);
  
  digitalWrite(ledRojo4,LOW); 
  delay(100);
}
