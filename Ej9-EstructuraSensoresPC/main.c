#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
Para caracteres especiales
á –> \xA0; 
é –> \x82; 
í –> \xA1; 
ó –> \xA2; 
ú –> \xA3; 
ñ –> \xA4; 
Ñ –> \xA5;
*/

struct sensores
{
    char nombre;
    int valor;
    long tiempo;
}ldr;

struct sensoresb
{
    char nombre;
    uint16_t valor;
    uint32_t tiempo;
}temperatura;

int main()
{

    printf("El tama\xA4o de la estructura es %d\n",sizeof(ldr));

    printf("El tama\xA4o de la estructura con tipos de datos estandar es %d\n",sizeof(temperatura));

    return 0;
}