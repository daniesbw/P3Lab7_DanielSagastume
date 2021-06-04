#include "Mago.h"

Mago::Mago() {
	astucia=0;
	inteligencia=0;
	lealtad=0;
	valentia=0;
}

Mago::Mago(int pAstucia, int pInteligencia, int pLealtad, int pValentia){
	this->astucia=pAstucia;
	this->inteligencia=pInteligencia;
	this->lealtad=pLealtad;
	this->valentia=pValentia;
}

int Mago::getAstucia(){
	return this->astucia;
}

int Mago::getInteligencia(){
	return this->inteligencia;
}

int Mago::getLealtad(){
	return this->getLealtad();
}

int Mago::getValentia(){
	return this->valentia;
}

string Mago::toString(){
	return "Hola soy un mago";
}

