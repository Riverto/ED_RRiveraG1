package ED.Riverto;

public class Queue<T> {

    private Node<T> front;
    private Node<T> rear;
    private int size;


    //Constructor
    public Queue(){
        front=rear=null;
        size=0;
    }

    public Queue(T d){
        Node<T> node = new Node<>(d);
        front=rear=node;
        size = 1;
    }

    public void enqueue(T d){
        Node<T> node = new Node<>(d);
        if(isEmpty()){
            front=rear=node;
            size=1;
        }else{
            rear.next=node;
            rear=node;
            size++;
        }
    }

    public T dequeue(){
        if (isEmpty()){
            return null;
        }else{
            Node<T> fd=front;
            front=front.next;
            size--;
            return fd.data;
        }
    }

    public T getFront(){
        if (isEmpty()){
            return null;
        }else{
            return front.data;
        }
    }

    public int getSize(){
        return size;
    }

    public boolean isEmpty(){
        return size==0;
    }

    public void clearQueue(){
        front=rear=null;
        size=0;
    }

    public void showQueue(){
        System.out.print("front->");
        Node<T> p = front;
        if (p==null) System.out.print("NULL");
        while(p!=null){
            p.print();
            p=p.next;
        }
        System.out.println("<-rear");
    }
}
