/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed_rriverag1_a02;

/**
 *
 * @author Riverto
 */
public class ED_RRiveraG1_A02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println(factorial(5));
        int[] vector = {20,30,10,45};
        System.out.println(sumaVector(vector, vector.length-1));
        System.out.println(multiplicarVector(vector, vector.length-1));
    }
    public static int factorial(int n){
        if(n<=1) return 1;
        return n*factorial(--n);
    }
    
    public static int sumaVector(int [] v, int n){
        if(n==0) return v[n];
        return v[n]+sumaVector(v, n-1);
    }
    
    public static int multiplicarVector(int [] v, int n){
        if(n==0) return v[n];
        return v[n]*multiplicarVector(v, n-1);
    }
}
