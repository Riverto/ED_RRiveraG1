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
public class Binario extends FetchClass {
@Override
public int Fetch(int x){ 
    int n = vector.length;
  
    int centro,inicio=0,fin=n-1; //declaracion de bordes y centro
   
    
    while(inicio<=fin){ //inicio de ciclo para no usar recursividad
     centro=(inicio+fin)/2; //se calcula el valor del centro
     
     if(vector[centro]==x) return centro; //se regresa la posicion del numero al ser encontrado
     
     if(x < vector [centro] ){ //Si el dato es menor que el valor centro
        fin=centro-1; //mover el borde final a centro -1
     }
     else {
       inicio=centro+1; //mover el borde inicio a centro +1
     }
     
   }
   return -1; //en caso de no encontrar el numero se regresa -1
 
 }
}
