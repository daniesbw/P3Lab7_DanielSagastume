#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include "Mago.h"
#include <string>
#include <sstream>
using namespace std;

class MagoRavenclaw : public Mago
{
	public:
		MagoRavenclaw();
		MagoRavenclaw(int, int, int, int);
		int getCreatividad();
		virtual string toString();
	protected:
		int creatividad;
};

#endif