package ED.Riverto;

public class Main {

    public static void main(String[] args) {
        CList<Integer> test = new CList<>();

        test.insert(10);
        test.insert(9);
        test.insert(11);
        test.showList();
        System.out.println("-------");
        test.deleteNode(10);
        test.showList();
        System.out.println("-------");
        test.insert(12);
        test.showList();
        System.out.println("-------");
        test.deleteList();
        test.showList();
    }
}
