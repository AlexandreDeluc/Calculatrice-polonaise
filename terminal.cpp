#include <iostream>
#include "Soustraction.h"
#include "Addition.h"
#include "Multiplication.h"
#include "Division.h"
#include <stack>

using namespace std;

int terminal()
{
    stack<string> stock;

    cout << "Saisissez votre expression, en separant chaque membre par entree." << endl;
    cout << "Lorsque la saisie est finie, saisissez le caractere 'p'." << endl;
    string ma_saisie;

    while (ma_saisie != "p"){

        cin >> ma_saisie; //caractere qui va etre saisi et enregistre dans une pile

        bool digit = true;
        bool alpha = true;
        int init = 0;

        if(ma_saisie.length()>1) {
            if ((char)ma_saisie[0] == '-') {
                init = 1;
            }
        }

        for(int i=init; i<=ma_saisie.length()-1; i++) {
            if(!isdigit(((char)ma_saisie[i]))) {
                digit = false;
            }
        }

        for(int i=init; i<=ma_saisie.length()-1; i++) {
            if(!isalpha(((char)ma_saisie[i]))) {
                alpha = false;
            }
        }

        if(digit){ //si l'utilisateur saisit un nombre
            float saisie = stof(ma_saisie);
            ma_saisie = to_string(saisie);
            stock.push(ma_saisie);
        }

        else if(alpha && ma_saisie != "p"){//si l'utilisateur saisit une lettre differente de p
            cout << "Vous avez saisi une lettre." << endl;
            stock.push(ma_saisie);
        }


        else if(ma_saisie == "p"){//si l'utilisateur saisit la lettre p, qui signifie la fin de la saisie
            cout << endl << "Vous avez saisi le caractere 'p' : la saisie est finie." << endl;

        }
        else { //si l'utilisateur saisit tout autre type de caractere

            if (ma_saisie == "+") {
                string sa = stock.top();
                stock.pop();
                string sb = stock.top();
                stock.pop();
                float a = stof(sa);
                float b = stof(sb);
                Addition *adt = new Addition (b, a);
                float c = adt -> Add(b, a);
                string sc = to_string(c);
                stock.push(sc);
            }
            else if (ma_saisie == "-") {
                string sa = stock.top();
                stock.pop();
                string sb = stock.top();
                stock.pop();
                float a = stof(sa);
                float b = stof(sb);
                Soustraction *stc = new Soustraction (b, a);
                float c = stc -> Sous(b, a);
                string sc = to_string(c);
                stock.push(sc);
            }
            else if (ma_saisie == "*"){
                string sa = stock.top();
                stock.pop();
                string sb = stock.top();
                stock.pop();
                float a = stof(sa);
                float b = stof(sb);
                Multiplication *mct = new Multiplication (b, a);
                float c = mct -> Mul(b, a);
                string sc = to_string(c);
                stock.push(sc);
            }
            else if (ma_saisie == "/"){
                string sa = stock.top();
                stock.pop();
                string sb = stock.top();
                stock.pop();
                float a = stof(sa);
                float b = stof(sb);
                Division *dvt = new Division (b, a);
                float c = dvt -> Div(b, a);
                string sc = to_string(c);
                stock.push(sc);
            }
            else {
                cout << "ERROR" << endl;
            }
        }
    }

    cout << "Le resultat de l'operation est : " << stock.top() << endl;
    return 0;
}
