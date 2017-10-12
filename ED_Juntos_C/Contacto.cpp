//
// Created by Roberto Rivera on 10/9/17.
//

#include "Contacto.h"

Contacto::Contacto() {

}

Contacto::Contacto(string n, string a, string c, int t) {
    nombre=n;
    apellido=a;
    correo=c;
    tel=t;
}

Contacto::~Contacto(){

}

string Contacto::toString(){
    string d= nombre + " " + apellido + " " + correo + " " + to_string(tel);
    return d;
}