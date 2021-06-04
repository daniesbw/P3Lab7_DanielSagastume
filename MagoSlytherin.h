#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include <sstream>
#include <string>
using namespace std;
#include "Mago.h"

class MagoSlytherin : public Mago
{
	public:
		MagoSlytherin();
		MagoSlytherin(int, int, int, int);
		int getLiderazgo();
		virtual string toString();
	private:
		int liderazgo;
};

#endif