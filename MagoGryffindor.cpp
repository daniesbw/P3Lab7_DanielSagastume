#include "MagoGryffindor.h"
#include <stdlib.h>
#include <time.h>
MagoGryffindor::MagoGryffindor(){
	this->atrevimiento=0;
}


MagoGryffindor::MagoGryffindor(int pAstucia, int pInteligencia, int pLealtad, int pValentia): Mago(pAstucia, pInteligencia, pLealtad, pValentia) {
	this->atrevimiento = rand() % 100 + 80;	
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

string MagoGryffindor::toString(){
	stringstream ret;
	ret<<"Mago: "<<endl;
	ret<<"Astucia: "<<this->astucia;
	ret<<" Atrevivimiento: "<<this->atrevimiento;
	ret<<" Inteligencia: "<<this->inteligencia;
	ret<<" Valentia: "<<this->valentia;
	ret<<" Lealtad: "<<this->lealtad;
	ret<<"\n";
	string retur;
	retur=ret.str();
	return retur;
}