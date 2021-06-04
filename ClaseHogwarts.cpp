#include "ClaseHogwarts.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
ClaseHogwarts::ClaseHogwarts() {
}

ClaseHogwarts::ClaseHogwarts(vector<MagoSlytherin*> pMagos_slytherin, vector<MagoHufflepuff*> pMagos_hufflepuff, vector<MagoGryffindor*> pMagos_gryffindor, vector<MagoRavenclaw*> pMagos_ravenclaw) {
	this->magos_slytherin=pMagos_slytherin;
	this->magos_hufflepuff=pMagos_hufflepuff;
	this->magos_ravenclaw=pMagos_ravenclaw;
	this->magos_gryffindor=pMagos_gryffindor;
}


void ClaseHogwarts::promedio_habilidades_por_casa() {
	cout<<"PROMEDIO EXITOSAMENTE"<<endl;
	double prom_aSlytherin=0.0, prom_iSlytherin=0.0, prom_lSlytherin=0.0, prom_vSlytherin=0.0, prom_liSlytherin=0.0;

	double prom_aHufflepuff=0.0, prom_iHufflepuff=0.0, prom_lHufflepuff=0.0, prom_vHufflepuff=0.0, prom_paHufflepuff=0.0;

	double prom_aRavenclaw=0.0, prom_iRavenclaw=0.0, prom_lRavenclaw=0.0, prom_vRavenclaw=0.0, prom_crRavenclaw=0.0;

	double prom_aGryffindor=0.0, prom_iGryffindor=0.0, prom_lGryffindor=0.0, prom_vGryffindor=0.0, prom_atGryffindor=0.0;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	double suma_aSlytherin = 0.0, suma_iSlytherin=0.0, suma_lSlytherin=0.0, suma_vSlytherin=0.0, suma_liSlytherin=0.0;

	double suma_aHufflepuff= 0.0, suma_iHufflepuff=0.0, suma_lHufflepuff=0.0, suma_vHufflepuff=0.0, suma_paHufflepuff=0.0;

	double suma_aRavenclaw= 0.0, suma_iRavenclaw=0.0, suma_lRavenclaw=0.0, suma_vRavenclaw=0.0, suma_crRavenclaw=0.0;

	double suma_aGryffindor= 0.0, suma_iGryffindor=0.0, suma_lGryffindor=0.0, suma_vGryffindor=0.0, suma_atGryffindor=0.0;
	cout<<"PROMEDIO EXITOSAMENTE"<<endl;
	//PROM MAGOS SLITHERIN
	for(int i=0; i<magos_slytherin.size();i++) {

		suma_aSlytherin+=magos_slytherin[i]->getAstucia();
		suma_iSlytherin+=magos_slytherin[i]->getInteligencia();
		suma_lSlytherin+=magos_slytherin[i]->getLealtad();
		suma_vSlytherin+=magos_slytherin[i]->getValentia();
		suma_liSlytherin+=magos_slytherin[i]->getLiderazgo();
	}
	cout<<"PROMEDIO EXITOSAMENTE"<<endl;
	prom_aSlytherin=suma_aSlytherin/ magos_slytherin.size();
	prom_iSlytherin=suma_iSlytherin/ magos_slytherin.size();
	prom_lSlytherin=suma_lSlytherin/ magos_slytherin.size();
	prom_vSlytherin=suma_vSlytherin/ magos_slytherin.size();
	prom_liSlytherin=suma_liSlytherin/ magos_slytherin.size();

	//PROM MAGOS HUFFLEPUFF
	for(MagoHufflepuff* temp : magos_hufflepuff) {
	
		suma_iHufflepuff+=temp->getInteligencia();
		suma_lHufflepuff+=temp->getLealtad();
		suma_vHufflepuff+=temp->getValentia();
		suma_paHufflepuff+=temp->getPaciencia();
	}
	prom_aHufflepuff= suma_aHufflepuff /magos_hufflepuff.size();
	prom_iHufflepuff= suma_iHufflepuff/magos_hufflepuff.size();
	prom_lHufflepuff= suma_lHufflepuff/magos_hufflepuff.size();
	prom_vHufflepuff= suma_vHufflepuff/magos_hufflepuff.size();
	prom_paHufflepuff= suma_paHufflepuff/magos_hufflepuff.size();

	//PROM GRYFFINDOR ----------------------------------------------
	for(MagoGryffindor* temp : magos_gryffindor) {
		suma_aGryffindor+=temp->getAstucia();
		suma_iGryffindor+=temp->getInteligencia();
		suma_lGryffindor+=temp->getLealtad();
		suma_vGryffindor+=temp->getValentia();
		suma_atGryffindor+=temp->getAtrevimiento();
	}
	prom_aGryffindor= suma_aGryffindor /magos_gryffindor.size();
	prom_iGryffindor= suma_iGryffindor/magos_gryffindor.size();
	prom_lGryffindor= suma_lGryffindor/magos_gryffindor.size();
	prom_vGryffindor= suma_vGryffindor/magos_gryffindor.size();
	prom_atGryffindor= suma_atGryffindor/magos_gryffindor.size();

	//PROM RAVENCLAW ----------------------------------------------
	for(MagoRavenclaw* temp : magos_ravenclaw) {
		suma_aRavenclaw+=temp->getAstucia();
		suma_iRavenclaw+=temp->getInteligencia();
		suma_lRavenclaw+=temp->getLealtad();
		suma_vRavenclaw+=temp->getValentia();
		suma_crRavenclaw+=temp->getCreatividad();
	}
	prom_aRavenclaw= suma_aRavenclaw /magos_ravenclaw.size();
	prom_iRavenclaw= suma_iRavenclaw/magos_ravenclaw.size();
	prom_lRavenclaw= suma_lRavenclaw/magos_ravenclaw.size();
	prom_vRavenclaw= suma_vRavenclaw/magos_ravenclaw.size();
	prom_crRavenclaw= suma_crRavenclaw/magos_ravenclaw.size();

	//FIN SACAR PROMEDIO
	cout<<"PROMEDIO EXITOSAMENTE"<<endl;
	//IMPRIMIR RESULTADOS
	stringstream temp;
	temp<<"================PROMEDIO DE HABILIDAADES POR CASA================\n";
	temp<<"Slitherin: \n";
	temp<<"					Astucia: "<<prom_aSlytherin;
	temp<<"					Inteligencia: "<<prom_iSlytherin;
	temp<<"					Lealtad: "<<prom_lSlytherin;
	temp<<"					Valentia: "<<prom_vSlytherin;
	temp<<"					Liderazgo: "<<prom_liSlytherin;
	temp<<"\n\n";
	//////////////////////////////////////
	temp<<"Hufflepuff: \n";
	temp<<"					Astucia: "<<prom_aHufflepuff;
	temp<<"					Inteligencia: "<<prom_iHufflepuff;
	temp<<"					Lealtad: "<<prom_lHufflepuff;
	temp<<"					Valentia: "<<prom_vHufflepuff;
	temp<<"					Paciencia: "<<prom_paHufflepuff;
	temp<<"\n\n";
	//////////////////////////////////////
	temp<<"Ravenclaw: \n";
	temp<<"					Astucia: "<<prom_aRavenclaw;
	temp<<"					Inteligencia: "<<prom_iRavenclaw;
	temp<<"					Lealtad: "<<prom_lRavenclaw;
	temp<<"					Valentia: "<<prom_vRavenclaw;
	temp<<"					Creatividad: "<<prom_crRavenclaw;
	temp<<"\n\n";
	//////////////////////////////////////
	temp<<"Gryffindor: \n";
	temp<<"					Astucia: "<<prom_aGryffindor;
	temp<<"					Inteligencia: "<<prom_iGryffindor;
	temp<<"					Lealtad: "<<prom_lGryffindor;
	temp<<"					Valentia: "<<prom_vGryffindor;
	temp<<"					Atrevimiento: "<<prom_atGryffindor;
	temp<<"\n\n";
	temp<<"===================================FIN DE RESULTADOS===================================";
	string ret= "";
	ret = temp.str();
	cout<<ret;
}

void ClaseHogwarts::toString() {
	cout<<"==========================================================MAGOS SLYTHERIN===========================\n";
	for(int i=0; i<magos_slytherin.size(); i++) {
		
		cout<<magos_slytherin[i]->toString();
	}
	cout<<"==========================================================MAGOS Hufflepuff===========================\n";
	for(int i=0; i<magos_hufflepuff.size(); i++) {
		
		cout<<magos_hufflepuff[i]->toString();
	}
	
	cout<<"==========================================================MAGOS Gryffindor=============================n";
	for(int i=0; i<magos_gryffindor.size(); i++) {
		
		cout<<magos_gryffindor[i]->toString();
	}

	cout<<"==========================================================MAGOS Ravenclaw==============================\n";
	for(int i=0; i<magos_ravenclaw.size(); i++) {
		
		cout<<magos_ravenclaw[i]->toString();
	}
}