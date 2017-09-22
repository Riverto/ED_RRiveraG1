#include <iostream>
#include "MyDLList.cpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MyDLList<int> test;

    test.insertFirst(10);
    test.insertFirst(9);
    test.insertLast(11);
    test.muestraListaFinInicio();
    std::cout << "-------"<< std::endl;
    test.muestraListaInicioFin();
    std::cout << "-------"<< std::endl;
    test.borrarNodo(10);
    test.muestraListaInicioFin();
    std::cout << "-------"<< std::endl;
    test.insertLast(12);
    test.insertFirst(8);
    test.muestraListaInicioFin();
    std::cout << "-------"<< std::endl;
    test.borrarFinal();
    test.muestraListaInicioFin();
    std::cout << "-------"<< std::endl;
    test.borrarInicio();
    test.muestraListaInicioFin();
    std::cout << "-------"<< std::endl;
}