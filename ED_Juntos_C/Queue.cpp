//
// Created by Roberto Rivera on 10/11/17.
//
#import "Node.cpp"
template <class T> class Queue{
private:
    Node<T> *front;
    Node<T> *rear;
    int size;
public:
    //Constructor
    Queue(){
        front=rear=NULL;
        size=0;
    }

    Queue(T d){
        Node<T> *node = new Node<T>(d);
        front=rear=node;
        size =  1;
    }

    ~Queue(){}

    void enqueue(T d){
        Node<T> *node = new Node<T>(d);
        if(isEmpty()){
            front=rear=node;
            size=1;
        }else{
            rear->next=node;
            rear=node;
            size++;
        }
    }

    T dequeue(){
        if (isEmpty()){
            return NULL;
        }else{
            Node<T> *fd=front;
            front=front->next;
            size--;
            return fd->data;
        }
    }

    T getFront(){
        if (isEmpty()){
            return NULL;
        }else{
            return front->data;
        }
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void clearQueue(){
        front=rear=NULL;
        size=0;
    }

    void showQueue(){
        std::cout<<"front->";
        Node<T>* p = front;
        if (!p) std::cout<<"NULL";
        while(p){
            p->print();
            p=p->next;
        }
        std::cout<<"<-rear"<<std::endl;
    }
};