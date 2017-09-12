//
// Created by Roberto Rivera on 9/11/17.
//

#include "MyList.h"

MyList::MyList() {
    first = nullptr;
    last = nullptr;
    pointer = nullptr;
}

MyList::MyList(int d) {
    Node* node = new Node(d);
    first = node;
    last = node;
    node->next = nullptr;
}

bool MyList::isEmpty() {
    return first == nullptr;
}

void MyList::insertFirst(int n) {
    Node* node = new Node(n);
    if(isEmpty()){
        first = node;
        last = node;
        node->next=nullptr;
    }else{
        node->next=first;
        first = node;
    }
}

void MyList::insertLast(int n) {
    Node* node = new Node(n);
    if(isEmpty()){
        first = node;
        last = node;
        node->next=nullptr;
    }else{
        last->next=node;
        last=node;
    }
}

void MyList::deleteFirst() {
    if(!isEmpty()){
        if(first->next==nullptr){
            first = nullptr;
            last = nullptr;
        }else {
            first = first->next;
        }
    }
}

void MyList::deleteLast() {
    if(!isEmpty()){
        if(first->next==nullptr){
            first = nullptr;
            last = nullptr;
        }else{
            pointer=first;
            do{
                pointer=pointer->next;
                if(pointer->next==last) {
                    last = pointer;
                    last->next = pointer = nullptr;
                }
            } while(pointer->next!=last);
        }

    }
}
