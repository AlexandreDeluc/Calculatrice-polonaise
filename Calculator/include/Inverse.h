#ifndef EXPRESSION_INVERSE_H
#define EXPRESSION_INVERSE_H

#include "Operateur.h"

class Inverse : public Operateur
{
	public:
		Inverse(Expression* oD);
		virtual ~Inverse();
		
		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif //EXPRESSION_INVERSE_H
