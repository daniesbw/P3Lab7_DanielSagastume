#include <iostream>
#include <vector>
#include "ClaseHogwarts.h"
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include "SombreroClasificador.h"
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int menu();

vector<Mago*> CreacionMagos(vector<Mago*>&);

int main(int argc, char** argv) {
	SombreroClasificador* temp=new SombreroClasificador();
	ClaseHogwarts* hogwarts=new ClaseHogwarts();
	vector<Mago*> magos=CreacionMagos(magos);//nacimiento de los magos
	hogwarts=temp->clasificar_magos_nuevos(magos, 2021);//Clasificar
	int op=0;
	while(op!=4) {
		switch(op=menu()) {
			case 1: {
				cout<<"=====================Separar por casa====================="<<endl;
				hogwarts=temp->clasificar_magos_nuevos(magos, 2021);//Separar
				cout<<"Separado Exitosamente"<<endl;
				cout<<"=====================Fin separar por casa====================="<<endl;
				break;
			}//Fin del case 1

			case 2: {
				cout<<"=====================Imprimir por casa====================="<<endl;
				hogwarts->toString();
				cout<<"=====================Fin imprimir por casa====================="<<endl;
				break;
			}//Fin del case 2

			case 3: {
				cout<<"=====================Imprimir cualidades de cada mago por casa====================="<<endl;
				cout<<"Me da error no se por que :c"<<endl;
				//hogwarts->promedio_habilidades_por_casa();
				cout<<"=====================Fin imprimir cualidades de cada mago por casaa====================="<<endl;
				break;
			}//Fin del case 3

		}///Fin del swtich del menu
	}//Fin  del while

	//Liberar memoria
	delete temp;
	delete hogwarts;
	for(int i=0; i<magos.size(); i++) {
		delete magos[i];
	}
	magos.clear();
	return 0;
}

vector<Mago*> CreacionMagos(vector<Mago*> &pVector) {
	vector<Mago*> ret;
	srand (time(NULL));
	for(int i=0; i<20; i++) {
		double probabilidad=((double) rand() / (RAND_MAX));
		if(probabilidad>=0.0&& probabilidad<=0.25) {
			int astucia=0, inteligencia=0,lealtad=0, valentia=0;
			astucia = rand() % 100 + 80;
			inteligencia = rand() % 100 + 0;
			lealtad = rand() % 100 + 0;
			valentia = rand() % 100 + 0;
			ret.push_back(new MagoSlytherin(astucia, inteligencia, lealtad, valentia));
		} else if(probabilidad>=0.26&& probabilidad<=0.5) {
			int astucia=0, inteligencia=0,lealtad=0, valentia=0;
			astucia = rand() % 100 + 0;
			inteligencia = rand() % 100 + 0;
			lealtad = rand() % 100 + 80;
			valentia = rand() % 100 + 0;
			ret.push_back(new MagoRavenclaw(astucia, inteligencia, lealtad, valentia));
		} else if(probabilidad>=0.51&& probabilidad<=0.75) {
			int astucia=0, inteligencia=0,lealtad=0, valentia=0;
			astucia = rand() % 100 + 0;
			inteligencia = rand() % 100 + 80;
			lealtad = rand() % 100 + 0;
			valentia = rand() % 100 + 0;
			ret.push_back(new MagoHufflepuff(astucia, inteligencia, lealtad, valentia));
		} else if(probabilidad>=0.51&& probabilidad<=0.75) {
			int astucia=0, inteligencia=0,lealtad=0, valentia=0;
			astucia = rand() % 100 + 0;
			inteligencia = rand() % 100 + 0;
			lealtad = rand() % 100 + 0;
			valentia = rand() % 100 + 80;
			ret.push_back(new MagoGryffindor(astucia, inteligencia, lealtad, valentia));
		}
	}
	return ret;
}

int menu() {
	int op=0;
	while(true) {
		cout<<"========================MENU========================"<<endl
		    <<"1. Separar por casa"<<endl
		    <<"2. Imprimir por casa"<<endl
		    <<"3. Imprimir promedio por casa"<<endl
		    <<"4. Salir"<<endl
		    <<"Ingrese l a opcion: ";
		cin>>op;
		if(op>0 && op<=4) {
			break;
		}
	}
	return op;
}