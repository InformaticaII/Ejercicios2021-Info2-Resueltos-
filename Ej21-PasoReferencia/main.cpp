/*
Escriba un programa completo en C++ con las dos funciones alternativas especificadas abajo,
en donde cada una de ellas simplemente triplica la variable cuenta definida en main.
Después compare y contraste los dos métodos. Estas dos funciones son:
a)	La función tripleLlamadaPorValor que pasa una copia de cuenta por medio de una llamada
 por valor, que triplica la copia y devuelve el nuevo valor
b)	La función triplePorReferencia que pasa cuenta con una verdadera llamada por referencia,
 a través de un parámetro de referencia, y que triplica la copia original de cuenta 
 por medio de su alias (es decir, el parámetro de referencia).
*/

//=================== Inclusiones ======================
#include <iostream>

//=================== Prototipos ======================
int triplePorValor (int cuentaValor);
void triplePorReferencia (int &cuentaReferencia);

using std::cout;
using std::cin;
using std::endl;

//=================== Función principal ======================
int main ()
{
    int cuenta = 10;

    cout << "Cuenta:" << cuenta << endl; 
    cout << "Llamada a triplePorValor: "<< triplePorValor (cuenta) << endl;

    cout << "Cuenta:" << cuenta << endl; 
    cout << "Llamada a triplePorReferncia. "<< endl;
    triplePorReferencia(cuenta);
    cout << "Cuenta:" << cuenta << endl;

    return 0;
}

//=================== Funciones ======================
int triplePorValor (int cuentaValor)
{
    return cuentaValor * 3;
}

void triplePorReferencia (int &cuentaReferencia)
{
    cuentaReferencia *= 3; 
}