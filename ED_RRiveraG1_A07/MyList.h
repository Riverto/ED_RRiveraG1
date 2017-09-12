//
// Created by Roberto Rivera on 9/11/17.
//

#ifndef ED_RRIVERAG1_A07_MYLIST_H
#define ED_RRIVERAG1_A07_MYLIST_H

#include "Node.h"

class MyList {
public:
    Node* first;
    Node* last;
    Node* pointer;

    MyList();
    MyList(int d);
    bool isEmpty();
    void insertFirst(int n);
    void insertLast(int n);
    void deleteFirst();
    void deleteLast();
};


#endif //ED_RRIVERAG1_A07_MYLIST_H
