package ED.Riverto;

public class NodeDL<T>{
    T data;
    NodeDL next;
    NodeDL prev;

    public NodeDL(T data){
        this.data=data;
        this.next=null;
        this.prev=null;
    }
}
