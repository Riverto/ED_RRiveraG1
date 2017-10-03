package ED.Riverto;

public class Main {

    public static void main(String[] args) {
        MyList<Integer> Lista = new MyList<>();
        Lista.insertFirst(10);
        Lista.showList();
        Lista.insertLast(101);
        Lista.showList();
        Lista.insertFirst(30);
        Lista.showList();
        Lista.deleteNode(101);
        Lista.showList();
        Lista.deleteNode(30);
        Lista.showList();
    }
}
