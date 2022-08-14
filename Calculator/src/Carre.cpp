#include "../include/Carre.h"

using namespace std;

Carre::Carre(Expression* oD) : Operateur(oD, oD) {}

Carre::~Carre()
{
	// dtor
}

void Carre::afficher(ostream& os)
{
	os << " ( ";
	getOpD()->afficher(os);
	os << " )² ";
}

void Carre::afficherNPI(ostream& os)
{
	getOpD()->afficher(os);
	getOpD()->afficher(os);
	os << " * ";
}

float Carre::calculer()
{
	return getOpD()->getValue() * getOpD()->getValue();
}