#include "SombreroClasificador.h"

ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> magos, int year)
{
	ClaseHogwarts* ret=new ClaseHogwarts();
	vector<MagoSlytherin*> magos_slytherin;
	vector<MagoHufflepuff*> magos_hufflepuff;
	vector<MagoGryffindor*> magos_gryffindor;
	vector<MagoRavenclaw*> magos_ravenclaw;
	for(int i=0; i<magos.size(); i++) {
		
		if(typeid( *magos[i] ) == typeid(MagoSlytherin) ) {//Slitherin

			magos_slytherin.push_back(dynamic_cast<MagoSlytherin*>(magos[i]));

		} else if(typeid( *magos[i] ) == typeid(MagoHufflepuff)) {//MagoHufflePuff

			magos_hufflepuff.push_back(dynamic_cast<MagoHufflepuff*>(magos[i]));

		} else if(typeid( *magos[i] ) == typeid(MagoGryffindor)) {//MagoGryffindor

			magos_gryffindor.push_back(dynamic_cast<MagoGryffindor*>(magos[i]));

		} else if(typeid( *magos[i] ) == typeid(MagoRavenclaw)) {//MagoRavenclaw

			magos_ravenclaw.push_back(dynamic_cast<MagoRavenclaw*>(magos[i]));

		}
	}
	ret=new ClaseHogwarts(magos_slytherin, magos_hufflepuff, magos_gryffindor, magos_ravenclaw);
	return ret;
}
