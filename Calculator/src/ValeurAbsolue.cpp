#include "../include/ValeurAbsolue.h"

using namespace std;

ValeurAbsolue::ValeurAbsolue(Expression* oD) : Operateur(oD, oD) {}

ValeurAbsolue::~ValeurAbsolue()
{
	// dtor
}

void ValeurAbsolue::afficher(ostream& os)
{
	os << " | ";
	getOpD()->afficher(os);
	os << " | ";
}

void ValeurAbsolue::afficherNPI(ostream& os)
{
	getOpD()->afficher(os);
	os << " || ";
}

float ValeurAbsolue::calculer()
{
	return abs(getOpD()->getValue());
}