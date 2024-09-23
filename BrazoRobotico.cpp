#include <stdio.h>
#include 'BrazoRobotico.h'

double getX(){
	return x;
}

double getY(){
        return y;
}

double getZ(){
        return z;
}

bool getObjeto(){
	return objeto;
}

void coger(){
	objeto = TRUE;
}

void soltar(){
        objeto = FALSE;
}

void mover(double _x, double _y, double _z){
	x = _x;
	y = _y;
	z = _z;
}
BrazoRobotico(double _x, double _y, double _z, bool _objeto){
	x = _x;
        y = _y;
        z = _z;
	objeto = objeto;
}
