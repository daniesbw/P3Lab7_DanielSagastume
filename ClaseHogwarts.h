#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include <vector>
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include <string>

using namespace std;
class ClaseHogwarts
{
	public:
		ClaseHogwarts();
		ClaseHogwarts(vector<MagoSlytherin*>, vector<MagoHufflepuff*>, vector<MagoGryffindor*>, vector<MagoRavenclaw*>);
		void promedio_habilidades_por_casa();
		void toString();
	protected:
		vector<MagoSlytherin*> magos_slytherin;
		vector<MagoHufflepuff*> magos_hufflepuff;
		vector<MagoGryffindor*> magos_gryffindor;
		vector<MagoRavenclaw*> magos_ravenclaw;
};

#endif