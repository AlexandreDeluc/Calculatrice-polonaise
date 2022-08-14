#ifndef EXPRESSION_OPPOSE_H
#define EXPRESSION_OPPOSE_H

#include "Operateur.h"

class Oppose : public Operateur
{
	public:
		Oppose(Expression* oD);
		virtual ~Oppose();

		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif //EXPRESSION_OPPOSE_H
