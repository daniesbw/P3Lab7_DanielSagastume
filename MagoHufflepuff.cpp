#include "MagoHufflepuff.h"
#include <stdlib.h>
#include <time.h>
MagoHufflepuff::MagoHufflepuff(){
	this->paciencia=0;
}


MagoHufflepuff::MagoHufflepuff(int pAstucia, int pInteligencia, int pLealtad, int pValentia): Mago(pAstucia, pInteligencia, pLealtad, pValentia) {
	this->paciencia = rand() % 100 + 80;
}

int MagoHufflepuff::getPaciencia() {
	return this->paciencia;
}

string MagoHufflepuff::toString(){
	stringstream ret;
	ret<<"Mago: "<<endl;
	ret<<"Astucia: "<<this->astucia;
	ret<<" Paciencia: "<<this->paciencia;
	ret<<" Inteligencia: "<<this->inteligencia;
	ret<<" Valentia: "<<this->valentia;
	ret<<" Lealtad: "<<this->lealtad;
	ret<<"\n";
	string retur;
	retur=ret.str();
	return retur;
}