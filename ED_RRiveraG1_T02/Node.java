package ED.Riverto;

public class Node <T> {
    //Atributos
    Node next; //Apuntador a siguiente nodo.
    T data; //Dato genérico.

    //Declaración de constructores.
    public Node(){
        next= null;
    }
    public Node(T d){
        next=null;
        data = d;
    }

    //Declaración Método mostrar
    public void print(){
        System.out.println(data + "->");
    }
    public void printS(){
        System.out.println(data + "\n ↓");
    }
}
