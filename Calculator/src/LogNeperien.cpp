#include "../include/LogNeperien.h"

using namespace std;

LogNeperien::LogNeperien(Expression* oD) : Operateur(oD, oD) {}

LogNeperien::~LogNeperien()
{
	// dtor
}

void LogNeperien::afficher(ostream& os)
{
	os << " ln( ";
	getOpD()->afficher(os);
	os << " ) ";
}

void LogNeperien::afficherNPI(ostream& os)
{
	getOpD()->afficher(os);
	os << " ln ";
}

float LogNeperien::calculer()
{
	return logf(getOpD()->getValue());
}