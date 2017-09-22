//
// Created by Roberto Rivera on 9/21/17.
//


template <typename T> class NodeDL {
public:
    T data;
    NodeDL<T> *prev;
    NodeDL<T> *next;

    NodeDL(T d) {
        data = d;
        prev = nullptr;
        next = nullptr;
    }
};
