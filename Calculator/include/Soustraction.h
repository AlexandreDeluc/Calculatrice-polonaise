#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include "Operateur.h"

using namespace std;

class Soustraction : public Operateur
{
	public:
		Soustraction(Expression* oG, Expression* oD);
		virtual ~Soustraction();

		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif // SOUSTRACTION_H
