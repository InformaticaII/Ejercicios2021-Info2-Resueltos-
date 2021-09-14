#include "rectangulo.h"

Rectangulo:: Rectangulo (unsigned int posX, unsigned int posY, unsigned int largo, unsigned int alto)
{
	establecerX(posX);
	establecerY(posY);
	establecerL(largo);
	establecerA(alto);
}

void Rectangulo::establecerL(unsigned int largo)
{
	l=largo;
}

void Rectangulo::establecerA(unsigned int alto)
{
	a=alto;
}

void Rectangulo::establecerX(unsigned int posicionX)
{
	x=posicionX;
}

void Rectangulo::establecerY(unsigned int posicionY)
{
	y=posicionY;
}

unsigned int Rectangulo::obtenerA()
{
	return a;
}

unsigned int Rectangulo::obtenerL()
{
	return l;
}

unsigned int Rectangulo::obtenerX()
{
	return x;
}

unsigned int Rectangulo::obtenerY()
{
	return y;
}

unsigned int Rectangulo::area()
{
	return (a*l);
}

unsigned int Rectangulo:: perimetro()
{
	return (a*2+l*2);
}

bool Rectangulo::estaDentroDe(Rectangulo rect)
{
	if(area()>rect.area())
	{
		return 0;
	}
	else
	{
		if (x < rect.x || y < rect.y || (x+l)>(rect.x+rect.l) || (y+a)>(rect.y+rect.a))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

unsigned int Rectangulo::areaInterseccionCon(Rectangulo rect)
{
	unsigned int ladoX, ladoY;
	if((x+l)<=rect.x || (x)>= (rect.x+rect.l) || (y+a)<=rect.y || (y)>= (rect.y+rect.a))
	{
		return 0;
	}
	else
	{
		if(y<=rect.y && (y+a)<=(rect.y+rect.a))
		{
			ladoY = y + a - rect.y;
		}
		else if(y>=rect.y && (y+a)>=(rect.y+rect.a))
		{
			ladoY = rect.y + rect.a - y;
		}
		else if(a<rect.a)
		{
			ladoY = a;
		}
		else
		{
			ladoY=rect.a;
		}
		
		if(x<=rect.x && (x+l)<=(rect.x+rect.l))
		{
			ladoX = x + l - rect.x;
		}
		else if(x>=rect.x && (x+l)>=(rect.x+rect.l))
		{
			ladoX = rect.x + rect.l - x;
		}
		else if(l<rect.l)
		{
			ladoX = l;
		}
		else
		{
			ladoX=rect.l;
		}
		return (ladoX*ladoY);
	}
}
