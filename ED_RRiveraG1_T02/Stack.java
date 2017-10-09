package ED.Riverto;

public class Stack<T>{
    private Node<T> top;
    private int size;

    public Stack(){
        top= null;
        size=0;
    }
    public Stack(T d){
        Node<T> node = new Node<T>(d);
        top=node;
        size=1;
    }

    public int getSize(){
        return size;
    }
    public void push(T d){
        Node<T> node = new Node<T>(d);
        node.next=top;
        top=node;
        size++;
    }
    public T pop(){
        if(size>0){//isEmpty(3lines) vs 6 chars
            T d = top.data;
            top=top.next;
            size--;
            return d;
        } else return null;
    }
    public T getTop(){
        if (size>0){
            return top.data;
        } else return null;
    }
    public void showStack(){
        Node<T> t = top;
        while (t!=null){
            t.printS();
            t=t.next;
        }
        System.out.println("NULL");;
    }
}