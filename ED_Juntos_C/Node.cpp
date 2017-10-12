//
// Created by Roberto Rivera on 10/9/17.
//

#import "iostream"
template <class T> class Node {
public:
    //Atributos
    Node *next; //Apuntador a siguiente nodo.
    T data; //Dato genérico.


    Node() {
        next = nullptr;
    }

//Consturctor con un elemento
    Node(T d) {
        data = d;
        next = nullptr;
    }

//Imprimir Nodo
    void print() {
        std::cout << data.toString() << "->";
    }

//Imprimir Nodo para pila
    void printS() {
        std::cout << data << std::endl << "↓" << std::endl;
    }

//Destructor
    ~Node() {}
};