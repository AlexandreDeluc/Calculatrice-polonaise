
#include "ValeurAbsolue.h"
using namespace std;

ValeurAbsolue::ValeurAbsolue(Expression *oD) : Operateur(oD, oD) {}

void ValeurAbsolue::afficher(ostream &os) {
    os << " | ";
    getOpD()->afficher(os);
    os << " | ";
}

void ValeurAbsolue::afficherNPI(ostream &os) {
    getOpD()->afficher(os);
    os << " || ";
}

float ValeurAbsolue::calculer() {
    return abs(getOpD()->calculer());
}