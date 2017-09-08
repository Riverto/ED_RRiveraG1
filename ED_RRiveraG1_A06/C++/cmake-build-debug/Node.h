//
// Created by Roberto Rivera on 9/7/17.
//

#ifndef C_NODE_H
#define C_NODE_H


class Node {
protected:
    int data;
    Node next;
public:
    Node();
    Node(int data);
    Node(int data, Node next);
};


#endif //C_NODE_H
