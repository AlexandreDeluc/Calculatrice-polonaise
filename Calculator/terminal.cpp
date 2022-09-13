#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <regex>
#include "include/Soustraction.h"
#include "include/Addition.h"
#include "include/Multiplication.h"
#include "include/Division.h"

using namespace std;

const string HELP_MSG = "";
const string INFO_MSG = "Saisissez votre expression (utilisez des points pour les virgules):";

const struct {
	char Addition = '+';
	char Carre = 'C';
	char Division = '/';
	char Inverse = 'I';
	char LogNeperien = 'L';
	char Multiplication = '*';
	char Oppose = 'O';
	char Puissance = 'E';
	char RacineCarre = 'V';
	char Soustraction = '-';
	char ValeurAbsolue = '|';
}Operateurs;

regex getRegexExpression()
{
	return regex("[a-z0-9 .") +
		Operateurs.Addition +
		Operateurs.Carre +
		Operateurs.Division +
		Operateurs.Inverse +
		Operateurs.LogNeperien +
		Operateurs.Multiplication +
		Operateurs.Oppose +
		Operateurs.Puissance +
		Operateurs.RacineCarre +
		Operateurs.ValeurAbsolue +
		Operateurs.Soustraction + // last of class definition
		"]*";
}

bool cinValid(string str)
{
	if (str.size() == 0)
		return false;
	else if (str == "help")
	{
		cout << HELP_MSG << endl;
		return false;
	}
	else if (str == "exit")
		exit(EXIT_SUCCESS);
	else if (!regex_match(str, regex(getRegexExpression())))
		return false;
	else
		return true;
}

string charToStr(char c)
{
	string str(1, c);
	return str;
}

vector<string> splitCalcul(string str)
{
	vector<string> vtr;
	string::size_type sz;
	float trash; // we will trash stof return to avoid nodiscard warning
	while (str.size() != 0)
	{
		try {
			trash = stof(str, &sz); // to_string(stof) conversion will lose some unit
			vtr.push_back(str.substr(0, sz)); // so we use substr()
			str.erase(0, sz);
		}
		catch (...) {
			vtr.push_back(charToStr(str[0]));
			str.erase(0, 1);
		}
	}
	return vtr;
}

void terminal()
{	stack<Expression*> stock;
	// stack<Operateur*> stock;
	vector<string> calcul_atoms;
	cout << INFO_MSG << endl;
	string ma_saisie = "";

	while (!cinValid(ma_saisie))
		cin >> ma_saisie;

	calcul_atoms = splitCalcul(ma_saisie);


	while (ma_saisie != "p") {

		cin >> ma_saisie; //caractere qui va etre saisi et enregistre dans une pile

		bool digit = true;
			bool alpha = true;
			int init = 0;

			if (ma_saisie.length() > 1) {
				if ((char)ma_saisie[0] == '-') {
					init = 1;
				}
			}

			for (int i = init; i <= ma_saisie.length() - 1; i++) {
				if (!isdigit(((char)ma_saisie[i]))) {
					digit = false;
				}
				
			}

			for (int i = init; i <= ma_saisie.length() - 1; i++) {
				if (!isalpha(((char)ma_saisie[i]))) {
					alpha = false;
				}
				
			}

			if (digit) { //si l'utilisateur saisit un nombre
				float saisie = stof(ma_saisie);
				Constante *e =  new Constante((float) saisie);
				stock.push(e);
			}

			else if (alpha && ma_saisie != "p") {//si l'utilisateur saisit une lettre differente de p
				cout << "Vous avez saisi une lettre." << endl;
				stock.push(ma_saisie);
			}


			else if (ma_saisie == "p") {//si l'utilisateur saisit la lettre p, qui signifie la fin de la saisie
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
					Addition* adt = new Addition(b, a);
					float c = adt->calculer();
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
					Soustraction* stc = new Soustraction(b, a);
					float c = stc->calculer();
					string sc = to_string(c);
					stock.push(sc);
				}
				else if (ma_saisie == "*") {
					string sa = stock.top();
					stock.pop();
					string sb = stock.top();
					stock.pop();
					float a = stof(sa);
					float b = stof(sb);
					Multiplication* mct = new Multiplication(b, a);
					float c = mct->calculer();
					string sc = to_string(c);
					stock.push(sc);
				}
				else if (ma_saisie == "/") {
					string sa = stock.top();
					stock.pop();
					string sb = stock.top();
					stock.pop();
					float a = stof(sa);
					float b = stof(sb);
					Division* dvt = new Division(b, a);
					float c = dvt->calculer();
					string sc = to_string(c);
					stock.push(sc);
				}
				else {
					cout << "ERROR" << endl;
				}
			}
		}

		cout << "Le resultat de l'operation est : " << stock.top() << endl;
}
