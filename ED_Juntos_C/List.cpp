//
// Created by Roberto Rivera on 10/11/17.
//
#import "Node.cpp"

template <class T> class List{
public:
    Node<T>* first;
    Node<T>* last;
    Node<T>* pointer;

    List(){
        first = nullptr;
        last = nullptr;
        pointer = nullptr;
    }

    List(int d){
        Node* node = new Node(d);
        first = node;
        last = node;
        node->next = nullptr;
    }

    bool isEmpty(){
        return first == nullptr;
    }

    void insertFirst(int n){
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

    void insertLast(int n){
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

    void deleteFirst(){
        if(!isEmpty()){
            if(first->next==nullptr){
                first = nullptr;
                last = nullptr;
            }else {
                first = first->next;
            }
        }
    }

    void deleteLast(){
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

};