#include <Servo.h>                    // Incluir la librería Servo
Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int pin=2;
int boton=3;

void setup()
{
        servo1.attach(pin) ;
        pinMode(boton,INPUT);
}

void loop()
{
        if(digitalRead(boton) == LOW){
                 int angulo = 180;
                 servo1.write(angulo);
        }
}
