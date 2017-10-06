package ED.Riverto;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Stack<Double> pila = new Stack<>();

        System.out.println(pila.getSize());
        pila.push((double)1);
        System.out.println(pila.getSize());
        pila.push((double)10);
        pila.push((double)40);
        pila.showStack();
        System.out.println("----------");
        pila.push((double)2);
        pila.push((double)102);
        pila.push((double)893);
        pila.showStack();
        System.out.println(pila.getSize());
        System.out.println(pila.pop());
        System.out.println(pila.getSize());
        pila.showStack();
    }
}
