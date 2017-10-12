//
// Created by Roberto Rivera on 10/5/17.
//

#include "Node.cpp"

template <typename T> class Stack{
private:
    Node<T> *top;
    int size;

public:
    Stack<T>(){
        top= nullptr;
        size=0;
    }

    Stack<T>(T d){
        Node<T> *node = new Node<T>(d);
        top=node;
        size=1;
    }

    ~Stack<T>(){}

    int getSize(){
        return size;
    }

    void push(T d){
        Node<T> *node = new Node<T>(d);
        node->next=top;
        top=node;
        size++;
    }

    T pop(){
        if(size>0){//isEmpty(3lines) vs 6 chars
            T d = top->data;
            top=top->next;
            size--;
            return d;
        } else return nullptr;
    }

    T getTop(){
        if (size>0){
            return top->data;
        } else return nullptr;
    }

    void showStack(){
        Node<T> *t = top;
        while (t){
            t->printS();
            t=t->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
};
