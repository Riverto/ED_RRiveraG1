package ED.Riverto;

public class Node<T> {
    T data;
    Node next;

    public Node(T data) {
        this.data = data;
        this.next = null;
    }

    public void print() {
        System.out.println(data.toString());
    }
}
