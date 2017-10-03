package ED.Riverto;

public class MyDLList <T> {
    NodeDL<T> first;
    NodeDL<T> last;
    NodeDL<T> pointer;
    int length;

    public MyDLList() {
        first = null;
        last = null;
        pointer = null;
        length = 0;
    }
    public MyDLList(T d) {
        NodeDL<T> node = new NodeDL<T>(d);
        first = null;
        last = node;
        pointer = null;
        length = 1;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public void insertFirst(T d) {
        NodeDL<T> node = new NodeDL<T>(d);
        if(isEmpty()){
            first = node;
            last = node;
        } else {
            node.next = first;
            first.prev = node;
            first = node;
        }
        length+=1;
    }
    public void insertLast(T d){
        NodeDL<T> node = new NodeDL<T>(d);
        if(!isEmpty()){
            last.next=node;
            node.prev=last;
            last=node;
        }else{
            first=node;
            last=node;
        }
        length+=1;
    }
    public void borrarInicio(){
        if(!isEmpty()){
            first.next.prev= null;
            first=first.next;
            length-=1;
        }
    }
    public void borrarFinal(){
        if(!isEmpty()){
            last=last.prev;
            last.next= null;
            length-=1;
        }
    }
    public void borrarNodo(T data){
        if(!isEmpty()){
            if(first.data==data){
                borrarInicio();
                length-=1;
                return;
            }
            if(last.data==data){
                borrarFinal();
                length-=1;
                return;
            }
            pointer=first;
            do{
                if(pointer.data==data){
                    pointer.prev.next=pointer.next;
                    pointer.next.prev=pointer.prev;
                    pointer= null;
                    length-=1;
                } else pointer=pointer.next;
            } while(pointer!= null);
        }
    }
    public void muestraListaInicioFin(){
        if(!isEmpty()){
            pointer=first;
            System.out.print("First->");
            while(pointer!= null){
                System.out.print("[" + pointer.data + "]");
                pointer=pointer.next;
                if(pointer!= null) System.out.print(" <=> ");
            }
            System.out.print(" <- Last \n");
        }
    }

    public void muestraListaFinInicio(){
        if(!isEmpty()){
            pointer=last;
            System.out.print("Last->");
            while(pointer!= null){
                System.out.print("[" + pointer.data + "]");
                pointer=pointer.prev;
                if(pointer!= null) System.out.print(" <=> ");
            }
            System.out.print(" <- First\n");
        }
    }
}
