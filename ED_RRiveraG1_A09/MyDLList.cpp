//
// Created by Roberto Rivera on 9/21/17.
//

#include <iostream>
#include "NodeDL.cpp"

template <typename T> class MyDLList {
public:
    NodeDL<T> *first;
    NodeDL<T> *last;
    NodeDL<T> *pointer;
    int length;

    MyDLList() {
        first = nullptr;
        last = nullptr;
        pointer = nullptr;
        length = 0;
    }

    MyDLList(T d) {
        NodeDL<T> *node = new NodeDL<T>(d);
        *first = node;
        *last = node;
        pointer = nullptr;
        length = 1;
    }

    bool isEmpty() {
        return length == 0;
    }

    void insertFirst(T d) {
        NodeDL<T> *node = new NodeDL<T>(d);
        if(isEmpty()){
            first = node;
            last = node;
        } else {
            node->next = first;
            first->prev = node;
            first = node;
        }
        length+=1;
    }
    void insertLast(T d){
        NodeDL<T> *node = new NodeDL<T>(d);
        if(!isEmpty()){
            last->next=node;
            node->prev=last;
            last=node;
        }else{
            first=node;
            last=node;
        }
        length+=1;
    }
    void borrarInicio(){
        if(!isEmpty()){
            first->next->prev= nullptr;
            first=first->next;
            length-=1;
        }
    }
    void borrarFinal(){
        if(!isEmpty()){
            last=last->prev;
            last->next= nullptr;
            length-=1;
        }
    }
    void borrarNodo(T data){
        if(!isEmpty()){
            if(first->data==data){
                borrarInicio();
                length-=1;
                return;
            }
            if(last->data==data){
                borrarFinal();
                length-=1;
                return;
            }
            pointer=first;
            do{
                if(pointer->data==data){
                    pointer->prev->next=pointer->next;
                    pointer->next->prev=pointer->prev;
                    pointer= nullptr;
                    length-=1;
                } else pointer=pointer->next;
            } while(pointer!= nullptr);
        }
    }
    void muestraListaInicioFin(){
        if(!isEmpty()){
            pointer=first;
            std::cout << "First->";
            while(pointer!= nullptr){
                std::cout << "[" << pointer->data << "]";
                pointer=pointer->next;
                if(pointer!= nullptr) std::cout << " -> ";
            }
            std::cout << " <- Last"<< std::endl;
        }
    }

    void muestraListaFinInicio(){
        if(!isEmpty()){
            pointer=last;
            std::cout << "Last->";
            while(pointer!= nullptr){
                std::cout << "[" << pointer->data << "]";
                pointer=pointer->prev;
                if(pointer!= nullptr) std::cout << " -> ";
            }
            std::cout << " <- First"<< std::endl;
        }
    }
};