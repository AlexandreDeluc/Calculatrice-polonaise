#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "Expression.h"

class Operateur
{
    public:
        Operateur();
        virtual ~Operateur();
        Operateur(Expression *_oG, Expression *_oD);
        Expression *getOpG() const;
        Expression *getOpD() const;

    protected:

    private:
        Expression *_opD;
        Expression *_opG;
};

#endif // OPERATEUR_H
