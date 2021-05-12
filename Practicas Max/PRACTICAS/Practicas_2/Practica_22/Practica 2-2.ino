
const int led_rojo = 2;
const int led_azul = 3;
const int led_amarillo = 4;

void setup() {
  // put your setup code here, to run once:

pinMode(led_rojo,OUTPUT);
pinMode(led_azul,OUTPUT);
pinMode(led_amarillo,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led_rojo,HIGH);
digitalWrite(led_azul,LOW);
digitalWrite(led_amarillo,HIGH);
delay(1000);


digitalWrite(led_rojo,LOW);
digitalWrite(led_azul,HIGH);
digitalWrite(led_amarillo,LOW);
delay(1000);

}
