#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include <string>
#include "Mago.h"
#include <sstream>

using namespace std;
class MagoHufflepuff : public Mago
{
	public:
		MagoHufflepuff();
		MagoHufflepuff(int, int, int, int);

		int getPaciencia();
		virtual string toString();
	protected:
		int paciencia;
};

#endif