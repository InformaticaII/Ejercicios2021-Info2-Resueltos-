/*
Escriba un programa en C++ que despliegue su nombre en una línea,
su domicilio en una segunda línea, y su ciudad, provincia y código postal en una tercera línea.
Utilizar la librería iostream y los operadores de inserción y extracción de flujo.
*/

#include <iostream>
//cout: flujo de salida estandar
//cin: flujo de entrada
//<< operador de inserción de flujo
//>> operador de extracción de flujo
//std:: especifica que estamos utilizando un nombre (como cout o cin) que pertenece a un espacio de nombres
//espacio de nombres: caracteristica avanzada de C++ que no profundizaremos
//endl significa final de línea y ocasiona que cualquier salida acumulada se despliegue en ese momento

int main ()
{
    char nombre [40];
    char domicilio [100];
    char ciudad [40];
    char provincia [40];
    int codigo;

    std::cout << "Introduzca su nombre.\n";
    std::cin >> nombre;
    std::cin.ignore();

    std::cout << "Introduzca su domicilio.\n";
    std::cin.getline(domicilio,100);

    std::cout << "Introduzca su ciudad.\n"; 
    std::cin.getline(ciudad,40);

    std::cout << "Introduzca su provincia.\n";
    std::cin.getline(provincia,40);

    std::cout << "Introduzca su código postal.\n";
    std::cin >> codigo;

    std::cout << "Su nombre es "<< nombre << "\n";
    std::cout << "Su domicilio es "<< domicilio << "\n";
    std::cout << "Su ciudad es "<< ciudad <<", provincia de " << provincia << ", codigo postal " << codigo  <<std::endl; 

    return 0;
}

/*
//instrucciones using: eliminan la necesidad de utilizar std::
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    char nombre [40];
    char domicilio [100];
    char ciudad [40];
    char provincia [40];
    int codigo;

    cout << "Introduzca su nombre.\n";
    cin >> nombre;
    cin.ignore();
    
    cout << "Introduzca su domicilio.\n";
    cin.getline(domicilio,100);

    cout << "Introduzca su ciudad.\n"; 
    cin.getline(ciudad,40);

    cout << "Introduzca su provincia.\n";
    cin.getline(provincia,40);

    cout << "Introduzca su código postal.\n";
    cin >> codigo;

    cout << "Su nombre es "<< nombre << "\n";
    cout << "Su domicilio es "<< domicilio << "\n";
    cout << "Su ciudad es "<< ciudad <<", provincia de" << provincia << ", código postal " << codigo  <<endl; 

    return 0;
}
*/