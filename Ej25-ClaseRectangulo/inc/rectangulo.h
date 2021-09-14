#ifndef RECTANGULO_H //directivas de preprocesador para evitar
#define RECTANGULO_H // inclusiones múltiples del archivo de encabezado

class Rectangulo{
public:
	Rectangulo (unsigned int, unsigned int, unsigned int, unsigned int);//x,y,largo,alto
	unsigned int area();
	unsigned int perimetro ();
	void establecerA(unsigned int);
	void establecerL(unsigned int);
	void establecerX(unsigned int);
	void establecerY(unsigned int);
	unsigned int obtenerA();
	unsigned int obtenerL();
	unsigned int obtenerX();
	unsigned int obtenerY();
	bool estaDentroDe(Rectangulo);
	unsigned int areaInterseccionCon(Rectangulo);
private:
	unsigned int x; //posición x
	unsigned int y; 
	unsigned int l;
	unsigned int a;
};

#endif
