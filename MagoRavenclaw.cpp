#include "MagoRavenclaw.h"
#include <stdlib.h>
#include <time.h>
MagoRavenclaw::MagoRavenclaw(){
	this->creatividad=0;
}

MagoRavenclaw::MagoRavenclaw(int pAstucia, int pInteligencia, int pLealtad, int pValentia): Mago(pAstucia, pInteligencia, pLealtad, pValentia)
{
	this->creatividad = rand() % 100 + 80;
}

int MagoRavenclaw::getCreatividad(){
	return this->getCreatividad();
}

string MagoRavenclaw::toString(){
	stringstream ret;
	ret<<"Mago: "<<endl;
	ret<<"Astucia: "<<this->astucia;
	ret<<" Creatividad: "<<this->creatividad;
	ret<<" Inteligencia: "<<this->inteligencia;
	ret<<" Valentia: "<<this->valentia;
	ret<<" Lealtad: "<<this->lealtad;
	ret<<"\n";
	string retur;
	retur=ret.str();
	return retur;
}