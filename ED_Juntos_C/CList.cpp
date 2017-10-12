//
// Created by Roberto Rivera on 10/11/17.
//
#import "Node.cpp"

template <typename T>
class CList {
public:
    Node<T> *pivot;
    Node<T> *pointer;
    int length;

    CList(){
        pivot = pointer = nullptr;
        length=0;
    }

    CList(T d){
        Node<T> *node = new Node<T>(d);
        *pivot=node;
        pointer= nullptr;
        length=1;
    }

    bool isEmpty(){
        return length==0;
    }

    void insert(T d){
        Node<T> *node= new Node<T>(d);
        if(isEmpty()){
            pivot=node->next=node;
        } else {
            node->next=pivot->next;
            pivot->next=node;
        }
    }

    void deleteNode(T d){
        if(!isEmpty()){
            if(pivot->data==d){
                pivot=pivot->next;
                length-=1;
                return;
            }
            pointer=pivot;
            do{
                if(pointer->next->data==d){
                    pointer->next=pointer->next->next;
                    pointer= nullptr;
                    length-=1;
                    return;
                } else pointer=pointer->next;
            } while(pointer!= pivot);
        }
    }

    void deleteList(){
        pivot=nullptr;
    }

    void showList(){
        pointer=pivot;
        std::cout << " First ->";
        for (int i=0; i<length;i++){
            std::cout << "[" << pointer->data << "]";
            if(i!=length-1) std::cout << "->";
            pointer=pointer->next;
        }
        pointer=nullptr;
        std::cout << "<- Last \n";
    }

    void showListbyAddress(){
        pointer=pivot;
        std::cout << " First ->";
        for (int i=0; i<length;i++){
            std::cout << "[" << &pointer << "]";
            if(i!=length-1) std::cout << "->";
            pointer=pointer->next;
        }
        pointer=nullptr;
        std::cout << "<- Last \n";
    }
};