
#include "RacineCarre.h"
using namespace std;

RacineCarre::RacineCarre(Expression *oD) : Operateur(oD, oD) {}

void RacineCarre::afficher(ostream &os) {
    os << " rac( ";
    getOpD()->afficher(os);
    os << " ) ";
}

void RacineCarre::afficherNPI(ostream &os) {
    getOpD()->afficher(os);
    os << " 1 2 / ^";
}

float RacineCarre::calculer() {
    return sqrt(getOpD()->calculer());
}