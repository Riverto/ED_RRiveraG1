//
// Created by Roberto Rivera on 10/11/17.
//

#ifndef ED_JUNTOS_CONTACTO_H
#define ED_JUNTOS_CONTACTO_H
#include "iostream"
using namespace std;

class Contacto {
private:
    string nombre;
    string apellido;
    string correo;
    int tel;

public:
    Contacto();
    Contacto(string n, string a, string c, int t);
    ~Contacto();

    string toString();
};


#endif //ED_JUNTOS_CONTACTO_H
