#ifndef EXPRESSION_RACINECARRE_H
#define EXPRESSION_RACINECARRE_H

#include "Operateur.h"

class RacineCarre : public Operateur
{
	public:
		RacineCarre(Expression* oD);
		virtual ~RacineCarre();
		
		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif //EXPRESSION_RACINECARRE_H
