#include <iostream>
#include "Contacto.h"
#include "Queue.cpp"

int main() {
    Contacto contacto = *new Contacto("Francisco","Alvizo","francisco.alvizo@itesm.mx",1234567890);
    Queue<Contacto> fila = *new Queue<Contacto>;
    fila.enqueue(contacto);
    fila.showQueue();
}