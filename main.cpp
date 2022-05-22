#include <iostream>

#include "Expression.h"
#include "Constante.h"
#include "Operateur.h"
#include "Addition.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"



#include <string.h>
#include <math.h>

using namespace std;

int main()
{

    char op;
    float val;
    Expression *expr = nullptr;


    int i = 0;
    int j=0;

    cout<<"Bienvenue dans le simplificateur"<<endl;

    //Tableau de tabVal
    char tabOp[10];
   //Tableau de constante
    Constante tabVal[10];
    //Tableau binaire piur savoir les opérations prioritaires (Mul/Div)
    int tabPrio[10]={0};



//-------------- SAISIE DE L'EXPRESSION A SIMPLIFIER --------------


    cout << "Entrez la premiere constante ou variable" << endl;
    cin >> val;
    tabVal[i]=val;

    do
    {
        cout<< "Entrez un operateur (+,x,-,/,=)"<<endl;
        cin >> op;

        if((op == '*')||(op == '/'))
        {
            tabPrio[i]=1;
        }

        tabOp[i]=op;
        if(op=='=')
        {
            break;
        }
          i++;
        cout<< "Entrez une constante ou variable" << endl;
        cin >> val;
        tabVal[i]=val;
    }while(1);

/*for(int n=0; n<10; n++)
{
     if(tabOp[n]=='=')
    {
        break;
    }
    cout << tabPrio[n] << "-" << endl;

}*/

//------------ AFFICHE L'EXPRESSION A SIMPLIFIER ----------------

cout << endl<< endl<< "Expression : ";
do
{
    //affiche la const
    tabVal[j].afficher(cout);
    //Verifie si on souhaite le resultat
    if(tabOp[j]=='=')
    {
        break;
    }
    //Affiche l'operande
    cout<< tabOp[j] << " ";
    j++;
}while(1);

cout << "= " ;


 Expression *membreGauche;
 Expression *membreDroite;

//-------------------EFFECTUE L'OPERATION MULTIPLICATION/DIVISION----------------------------------

for(j=0; j<10; j++)
{

    if(j==0)
    {
        membreGauche = new Constante(tabVal[j]);
        membreDroite = new Constante(tabVal[j+1]);

    }else{
        membreGauche = new Constante(val);
        membreDroite = new Constante(tabVal[j+1]);
    }


     Addition add(membreGauche, membreDroite);
     Soustraction sus(membreGauche, membreDroite);
     Multiplication mul(membreGauche, membreDroite);
     Division div(membreGauche, membreDroite);

    switch(tabOp[j])
    {
        case '+':
                val = add.calculer();

            break;

         case '-':
                val = sus.calculer();

            break;

        case '*':
                val = mul.calculer();
            break;

        case '/':
                val = div.calculer();
            break;
    }

      if(tabOp[j+1]== '=')
    {
        break;
    }


}



//-------------------EFFECTUE L'OPERATION ADDITION/SOUSTRACTION------------------------------------




for(j=0; j<10; j++)
{
        if(j==0)
        {
            membreGauche = new Constante(tabVal[j]);
            membreDroite = new Constante(tabVal[j+1]);

        }else{
            membreGauche = new Constante(val);
            membreDroite = new Constante(tabVal[j+1]);
        }

         Addition add(membreGauche, membreDroite);
         Soustraction sus(membreGauche, membreDroite);
         Multiplication mul(membreGauche, membreDroite);
         Division div(membreGauche, membreDroite);

        switch(tabOp[j])
        {
            case '+':
                    val = add.calculer();
                break;

             case '-':
                    val = sus.calculer();
                break;

            case '*':
                    val = mul.calculer();
                break;

            case '/':
                    val = div.calculer();
                break;
        }
          if(tabOp[j+1]== '=')
        {
            break;
        }


}

cout << val << endl;

 return 0;
}
