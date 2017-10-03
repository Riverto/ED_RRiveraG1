package ED.Riverto;

public class Main {

    public static void main(String[] args) {
        MyDLList<Integer> test = new MyDLList<Integer>();

        test.insertFirst(10);
        test.insertFirst(9);
        test.insertLast(11);
        test.muestraListaFinInicio();
        System.out.println("-------");
        test.muestraListaInicioFin();
        System.out.println("-------");
        test.borrarNodo(10);
        test.muestraListaInicioFin();
        System.out.println("-------");
        test.insertLast(12);
        test.insertFirst(8);
        test.muestraListaInicioFin();
        System.out.println("-------");
        test.borrarFinal();
        test.muestraListaInicioFin();
        System.out.println("-------");
        test.borrarInicio();
        test.muestraListaInicioFin();
        System.out.println("-------");
    }
}
