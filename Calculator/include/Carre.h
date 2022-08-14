#ifndef EXPRESSION_CARRE_H
#define EXPRESSION_CARRE_H

#include "Operateur.h"

class Carre : public Operateur
{
	public:
		Carre(Expression* oD);
		virtual ~Carre();
		
		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif //EXPRESSION_CARRE_H
