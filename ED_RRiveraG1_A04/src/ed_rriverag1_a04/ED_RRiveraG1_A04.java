/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed_rriverag1_a04;

/**
 *
 * @author Riverto
 */
public class ED_RRiveraG1_A04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Binario test = new Binario();
        test.setV(test.randomV(20));
        test.sorter();
        System.out.println(test.showV());
    }
    
}
