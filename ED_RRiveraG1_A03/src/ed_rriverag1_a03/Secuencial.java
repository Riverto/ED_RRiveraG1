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
public class Secuencial extends FetchClass{
   @Override
    int Fetch(int n) {
        for(int i=0;i<vector.length;i++){//se crea un loop que recorre el arreglo completo
            if(vector[i]==n)return i; //al encontrar el numero buscado regresa su posicion
        }
        return -1; //en caso de no encontrarlo se regresa -1
    }
}
