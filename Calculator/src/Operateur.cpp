#include <string>
#include "../include/Operateur.h"
#include "../include/Constante.h"
#include "../include/Variable.h"

Operateur::Operateur(Expression* g, Expression* d)
{
	_opD = d;
	_opG = g;
}

Operateur::~Operateur()
{
	//dtor
}

Expression* Operateur::getOpG() const
{
	return _opG;
}

Expression* Operateur::getOpD() const
{
	return _opD;
}