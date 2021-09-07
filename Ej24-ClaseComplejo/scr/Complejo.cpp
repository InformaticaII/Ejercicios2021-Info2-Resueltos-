#include <iostream>
#include "../inc/Complejo.h"

using std::cout;
using std::endl;

Complejo::Complejo ()
{
	p = 5;
	q = 6;
}

Complejo::Complejo (double real, double imaginario)
{
	p = real;
	q = imaginario;
}

Complejo Complejo::sumaComplejo(Complejo a)
{	
	Complejo c;
	c.p = p + a.p;
	c.q = q + a.q; 
	return (c);
}
Complejo Complejo::restaComplejo(Complejo a)
{	
	Complejo c;
	c.p = p - a.p;
	c.q = q - a.q; 
	return (c);
}
void Complejo::establecerComplejo (double real, double imaginario)
{
	p = real;
	q = imaginario;
}
void Complejo::imprimirComplejo()
{
	cout<< p << " + ("<< q << "i)\n";
}