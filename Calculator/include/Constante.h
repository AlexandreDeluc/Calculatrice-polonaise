#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Expression.h"

using namespace std;

class Constante : public Expression
{
	public:
		Constante(float val);
		virtual ~Constante();
};

#endif // CONSTANTE_H
