#include <iostream>
#include "rectangulo.h"

using std::cout;
using std::endl;

int main ()
{
	Rectangulo uno(2,2,4,4); //(x,y,largo,alto)
	Rectangulo dos(1,1,4,4);
	cout << "El area del rectangulo uno es " << uno.area() << "\n";
	cout << "El area del rectangulo dos es " << dos.area() << "\n";
	cout << "El perimetro del rectangulo dos es " << dos.perimetro() << "\n";
	if(uno.estaDentroDe(dos))
	{
		cout << "El rectangulo uno esta dentro del rectangulo dos\n";
	 } 
	else
	{
		cout << "El rectangulo uno no esta dentro del rectangulo dos\n";
	}
		if(dos.estaDentroDe(uno))
	{
		cout << "El rectangulo dos esta dentro del rectangulo uno\n";
	 } 
	else
	{
		cout << "El rectangulo dos no esta dentro del rectangulo uno\n";
	}
	
	cout << "El area de la interseccion es " << uno.areaInterseccionCon(dos) << "\n";	
}
