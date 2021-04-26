#include <Arduino.h>

void setup()
{
  DDRD= DDRD | B01111111; // puerto D0-D3 como salida.
  DDRB= DDRB | B00011111; // puerto B0-B1 como salida.
}
            
byte fila, columna;

void loop()
{
  for (fila = B00000001;fila <= B00010000; fila = fila<<1)
  {
    PORTB=fila; 
    for(columna = B0000001;columna <= B01000000; columna = columna<<1) 
    {
      PORTD=~columna;
      delay(500);
    }
  }
}
