const int led_comunista = 4;

void setup() {
  // put your setup code here, to run once:

pinMode(led_comunista,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(led_comunista,HIGH);
delay(200);
digitalWrite(led_comunista,LOW);
delay(200);

}
