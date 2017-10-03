package ED.Riverto;

public class CList <T>{
    Node<T> pivot;
    Node<T> pointer;
    int length;

    public CList() {
        pivot = pointer = null;
        length=0;
    }

    public CList(T d) {
        Node<T> node = new Node<>(d);
        pivot=node;
        pointer= null;
        length=1;
    }

    public boolean isEmpty() {
        return length==0;
    }
    
    public void insert(T d) {
        Node<T> node= new Node<>(d);
        if(isEmpty()){
            pivot=node.next=node;
        } else {
            node.next=pivot.next;
            pivot.next=node;
        }
        length+=1;
    }

    public void deleteNode(T d) {
        if(!isEmpty()){
            if(pivot.data==d){
                pivot=pivot.next;
                length-=1;
                return;
            }
            pointer=pivot;
            do{
                if(pointer.next.data==d){
                    pointer.next=pointer.next.next;
                    pointer= null;
                    length-=1;
                    return;
                } else pointer=pointer.next;
            } while(pointer!= pivot);
        }
    }

    public void deleteList() {
        pivot=null;
        length=0;
    }

    public void showList() {
        pointer=pivot;
        if(!isEmpty()){
            System.out.print(" Pivot ->");
            for (int i = 0; i < length; i++) {
                System.out.print("[" + pointer.data.toString() + "]");
                if (i != length - 1) System.out.print("->");
                pointer = pointer.next;
            }
            pointer = null;
            System.out.print("\n");
        } else System.out.println("List is empty.");
    }
}
