#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <string>
#include "Mago.h"
#include <sstream>
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
using namespace std;
using namespace std;
class MagoGryffindor : public Mago
{
	public:
		MagoGryffindor();
		MagoGryffindor(int, int, int, int);

		int getAtrevimiento();
		virtual string toString();
	protected:
		int atrevimiento;
};

#endif