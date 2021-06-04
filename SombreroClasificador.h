#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "ClaseHogwarts.h"
#include <vector>
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include <typeinfo>

using namespace std;
class SombreroClasificador
{
	public:
		ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*>, int);
		
	protected:
};

#endif