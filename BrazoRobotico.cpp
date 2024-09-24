#include <stdio.h>
#include "BrazoRobotico.h"

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
        return y;
}

double BrazoRobotico::getZ(){
        return z;
}

bool BrazoRobotico::getObjeto(){
	return objeto;
}

void BrazoRobotico::coger(){
	objeto = true;
}

void BrazoRobotico::soltar(){
        objeto = false;
}

void BrazoRobotico::mover(double _x, double _y, double _z){
	x = _x;
	y = _y;
	z = _z;
}
BrazoRobotico::BrazoRobotico(double _x, double _y, double _z, bool _objeto){
	x = _x;
        y = _y;
        z = _z;
	objeto =_objeto;
}
