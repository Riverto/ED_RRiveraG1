package ED.Riverto;

public class MyList <T> {
    Node first;
    Node last;
    Node pointer;
    int length;

    public MyList() {
        this.first = null;
        this.last = null;
        this.pointer = null;
        length = 0;
    }

    public MyList(T data) {
        Node node = new Node(data);
        first = node;
        last = node;
        node.next=null;
        length = 1;
    }

    public boolean isEmpty(){
        return this.first==null;
    }

    public void insertFirst(T n){
        Node node = new Node(n);
        if(isEmpty()){
            first = node;
            last = node;
            node.next=null;
        }else{
            node.next=first;
            first = node;
        }
        length+=1;
    }

    public void insertLast(T n){
        Node node = new Node(n);
        if(isEmpty()){
            first = node;
            last = node;
            node.next=null;
        }else{
            last.next=node;
            last=node;
        }
        length+=1;
    }

    public void deleteFirst(){
        if(!isEmpty()){
            if(first.next==null){
                first = null;
                last = null;
            }else {
                first = first.next;
            }
            length-=1;
        }
    }

    public void deleteLast(){
        if(!isEmpty()){
            if(first.next==null){
                first = null;
                last = null;
            }else{
                pointer=first;
                do{
                    if(pointer.next==null) {
                        last = pointer;
                        last.next = pointer = null;
                    } else {
                        pointer=pointer.next;
                    }
                } while(pointer.next!=null);
            }
            length-=1;
        }
    }

    public boolean deleteNode(T n){
        Node temp = fetchBack(n);
        if(temp!=null) { //si encuentra el nodo
            if (temp.data == n) { //si es el primero o unico
                deleteFirst(); //borra el primer/unico
            } else {
                temp.next = temp.next.next; //si no es el primero/unico lo borra
                length-=1;
            }

            return true;
        }
        return false; //si no lo encuentra regresa false
        /*
        if(!isEmpty()){
            if(first==last){
                if (first.data==n){
                    first=last=null;
                    return true;
                } else{
                    return false;
                }
            }
            if(first.data==n) {
                deleteFirst();
                return true;
            }
            pointer=first;
            do{
                if(pointer.next.data==n) {
                    pointer.next=pointer.next.next;
                    pointer = null;
                    return true;
                } else {
                    pointer=pointer.next;
                }
            } while(pointer.next!=null);
        } return false;*/
    }
    public Node fetchBack(T n){
        if(!isEmpty()){
            if(first==last){//si la lista es de 1 elemento
                if(first.data==n){ //y el primero es el que buscamos
                    return first; //regresamos el primero
                } else return null; //si no null
            } else { //si la lista tiene varios elementos
                if (first.data == n) {  //si es el primero en la lista
                    return first;       //regresamos first
                }
                pointer = first;
                Node result;
                do {
                    if (pointer.next.data == n) { //si el siguente nodo tiene el dato que buscamos
                        result = pointer;       //asignamos el nodo a otra variable
                        pointer = null;         //limpiamos pointer
                        return result;          //regresamos esa variable
                    }else{
                        pointer = pointer.next; //si no, seguimos en la lista
                    }
                } while (pointer.next != null); //mientras que el siguiente no sea nulo
            }
        } return null; //si no lo encontramos regresamos nulo
    }
    public Node fetch(T n){
        if(!isEmpty()) {
            if (first.data == n) return first;
            Node temp = fetchBack(n);
            if (temp != null) {
                return temp.next;
            }
        } return null;
    }

    public void showList(){
        pointer=first;
        System.out.print(" First ->");
        for (int i=0; i<length;i++){
            System.out.print("["+pointer.data.toString()+"]");
            if(i!=length-1) System.out.print("->");
            pointer=pointer.next;
        }
        pointer=null;
        System.out.print("<- Last \n");
    }
}
