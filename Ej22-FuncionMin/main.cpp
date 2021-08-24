/*
Escriba un programa que utilice una función llamada minimo, para determinimoar el menor
de dos argumentos. La función debe tener los argumentos por defecto 3 y 5.
Sobrecargue la función minimo para que soporte los tipos de datos int y float.
*/

//=================== Inclusiones ======================
#include <iostream>

//=================== Prototipos ======================
int minimo (int valor1 =3 , int valor2 =5 );
float minimo (float valor1, float valor2);

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
    char pregunta;

    cout << "¿Desea ingresar numeros?" << endl <<
            "Presione N para utilizar los valores por defecto, cualquier otra letra para elegirlos."<< endl ;
    cin >> pregunta;
    if (pregunta == 'N'){
        cout << "El menor de los numeros predeterminimoados es " << minimo() << endl;
    }
    else{
    cout << "Ingrese el primer numero entero." << endl;
    cin >> entero1;
    cout << "Ingrese el segundo numero entero." << endl;
    cin >> entero2;
    cout << "El menor de los enteros es " << minimo(entero1, entero2) << endl;

    cout << "Ingrese el primer numero de punto flotante." << endl;
    cin >> flotante1;
    cout << "Ingrese el segundo numero de punto flotante." << endl;
    cin >> flotante2;
    cout << "El menor de los numeros de punto flotante es " << minimo(flotante1, flotante2) << endl;
    }

    return 0;
}

//=================== Funciones ======================
int minimo (int valor1, int valor2)
{
    if(valor1 <= valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}

float minimo (float valor1, float valor2)
{
    if(valor1 <= valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}