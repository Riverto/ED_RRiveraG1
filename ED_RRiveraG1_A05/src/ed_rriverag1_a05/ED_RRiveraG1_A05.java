/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed_rriverag1_a05;

/**
 *
 * @author Riverto
 */
public class ED_RRiveraG1_A05 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Binario test = new Binario();
        test.setV(test.randomV(20));
        test.vector=test.mergeSort(test.vector);
        System.out.println(test.showV());
    }
    
}
