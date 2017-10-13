package ED.Riverto;

public class DLNode<T>{
    T data;
    DLNode next;
    DLNode prev;

    public DLNode(T data){
        this.data=data;
        this.next=null;
        this.prev=null;
    }

    public void print() {
        System.out.println(data.toString());
    }
}
