/*
Escriba la función min del ejercicio anterior en formato de plantilla. 
Evalúe el programa utilizando un par de enteros, uno de caracteres y uno de punto flotante.
*/

//=================== Inclusiones ======================
#include <iostream>

//=================== Prototipos ======================
template < class T >
T min (T valor1, T valor2)
{
    if(valor1 <= valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}

using std::cout;
using std::cin;
using std::endl;

//=================== Función principal ======================
int main ()
{
    int entero1;
    int entero2;
    float flotante1;
    float flotante2;
    char caracter1;
    char caracter2;

    cout << "Ingrese el primer numero entero." << endl;
    cin >> entero1;
    cout << "Ingrese el segundo numero entero." << endl;
    cin >> entero2;
    cout << "El menor de los enteros es " << min(entero1, entero2) << endl;

    cout << "Ingrese el primer numero de punto flotante." << endl;
    cin >> flotante1;
    cout << "Ingrese el segundo numero de punto flotante." << endl;
    cin >> flotante2;
    cout << "El menor de los numeros de punto flotante es " << min(flotante1, flotante2) << endl;

    cout << "Ingrese el primer caracter." << endl;
    cin >> caracter1;
    cout << "Ingrese el segundo caracter." << endl;
    cin >> caracter2;
    cout << "El menor de los caracteres " << min(caracter1, caracter2) << endl;
    return 0;
}
