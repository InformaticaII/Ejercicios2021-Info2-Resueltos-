//================== Inclusiones =============================
#include <Arduino.h>

//================== Definiciones =============================
#define LED 13

//================== Variables globales =============================
String datosRecibidos;

//================== Configuraciones =============================
void setup()
{
  Serial.begin(115200);   //Inicializa el puerto  serie a 115200 baudios
  pinMode(LED,OUTPUT);
}

//================== Bucle principal =============================
void loop()
{
  if(Serial.available()>0)      //Procede a la lectura solo si hay datos disponibles en el buffer
  {
    datosRecibidos = Serial.readString();

    Serial.print("OK");
    Serial.println(datosRecibidos);

    if(datosRecibidos == "E")   //Si el comando recibido es E enciende el led, si es A lo apaga
    {
      digitalWrite(LED, HIGH);
    }
    else if (datosRecibidos == "A")
    {
      digitalWrite(LED, LOW);
    }

  }
}