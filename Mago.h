#ifndef MAGO_H
#define MAGO_H
#include <string>

using namespace std;
class Mago {
	public:
		Mago();
		Mago(int, int, int, int);
		 int getAstucia();
		 int getInteligencia();
		 int getLealtad();
		 int getValentia();
		virtual string toString();
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif