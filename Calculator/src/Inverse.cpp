#include "../include/Inverse.h"

using namespace std;

Inverse::Inverse(Expression* oD) : Operateur(oD, oD) {}

Inverse::~Inverse()
{
	// dtor
}

void Inverse::afficher(ostream& os)
{
	os << "1 / ";
	getOpD()->afficher(os);
}

void Inverse::afficherNPI(ostream& os)
{
	os << " 1 ";
	getOpD()->afficher(os);
	os << " / ";
}

float Inverse::calculer()
{
	return 1 / getOpD()->getValue();
}