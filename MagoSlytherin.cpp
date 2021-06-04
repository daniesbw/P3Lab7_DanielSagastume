#include "MagoSlytherin.h"
#include <stdlib.h>
#include <time.h>
MagoSlytherin::MagoSlytherin(){
		liderazgo=0;
}

MagoSlytherin::MagoSlytherin(int pAstucia, int pInteligencia, int pLealtad, int pValentia): Mago(pAstucia, pInteligencia, pLealtad, pValentia) {
	this->liderazgo = rand() % 100 + 80;
}

int MagoSlytherin::getLiderazgo(){
	return this->getLiderazgo();
}

string MagoSlytherin::toString(){
	stringstream ret;
	ret<<"Mago= "<<endl;
	ret<<"Astucia: "<<this->astucia;
	ret<<" Liderazgo: "<<this->liderazgo;
	ret<<" Inteligencia: "<<this->inteligencia;
	ret<<" Valentia: "<<this->valentia;
	ret<<" Lealtad: "<<this->lealtad;
	ret<<"\n";
	string retur;
	retur=ret.str();
	return retur;
}