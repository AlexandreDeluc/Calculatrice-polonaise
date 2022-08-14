#include "../include/Puissance.h"

using namespace std;

Puissance::Puissance(Expression* oG, Expression* oD) : Operateur(oG, oD) {}

Puissance::~Puissance()
{
	// dtor
}

void Puissance::afficher(ostream& os)
{
	getOpG()->afficher(os);
	os << " ^ ";
	getOpD()->afficher(os);
}

void Puissance::afficherNPI(ostream& os)
{
	getOpG()->afficher(os);
	getOpD()->afficher(os);
	os << " ^ ";
}

float Puissance::calculer()
{
	return pow(getOpG()->getValue(), getOpD()->getValue());
}