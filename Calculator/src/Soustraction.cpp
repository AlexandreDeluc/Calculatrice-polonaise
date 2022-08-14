#include "../include/Soustraction.h"

Soustraction::Soustraction(Expression* oG, Expression* oD) : Operateur(oG, oD)
{
	//ctor
}

Soustraction::~Soustraction()
{
	//dtor
}

void Soustraction::afficher(ostream& os)
{
	getOpG()->afficher(os);
	os << "-";
	getOpD()->afficher(os);
}

void Soustraction::afficherNPI(ostream& os)
{
	getOpG()->afficher(os);
	getOpD()->afficher(os);
	os << "-";
}

float Soustraction::calculer()
{
	return getOpG()->getValue() - getOpD()->getValue();
}
