#include "include/LoadSave.h"
#include "include/Expression.h"
#include "include/Addition.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>

#include <stack>
#include <vector>

void save(Expression *E, std::string path){
    std::ofstream savefile(path, std::ofstream::out);
    savefile << E->toStringNpi();
    savefile.close();
    return;
}

/* [Equipe integration] Ne compile pas - la methode ParseVector n'existe pas */
Expression *load(std::string path){
    std::string line;
    std::ifstream myfile(path);
    Expression *e;
     if(myfile.is_open())
     {
         while( getline(myfile,line))
         {
           std::cout << line << '\n'; //on affiche la ligne
           std::istringstream myString(line); //stock la ligne dans myString
           std::vector<std::string> tokens{std::istream_iterator<std::string>{myString}, std::istream_iterator<std::string>{}};
           //e = ParseVector(tokens);       /* [Equipe integration] Methode qui n'existe pas */
           e = nullptr;                     /* [Equipe integration] Ajout pour renvoyer quelquechose */
           e = Addition(tokens[0], tokens[1]);

           std::cout << tokens[1]<< '\n';

           //std::cout << e;
         }
         myfile.close();
     }
     else std::cout << "Unable to open file";
     return e;
}
