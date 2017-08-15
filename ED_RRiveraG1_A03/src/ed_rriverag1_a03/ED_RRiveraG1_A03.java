/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed_rriverag1_a03;

/**
 *
 * @author Riverto
 */
public class ED_RRiveraG1_A03 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Secuencial test = new Secuencial();
        test.setV(test.randomV(10000));
        System.out.println(test.showV());
    }
    
}
