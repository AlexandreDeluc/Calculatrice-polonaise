#ifndef DIVISION_H
#define DIVISION_H

#include "Operateur.h"

using namespace std;

class Division : public Operateur
{
	public:
		Division(Expression* oG, Expression* oD);
		virtual ~Division();
		
		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif // DIVISION_H
