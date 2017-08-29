/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed_rriverag1_a05;

import java.util.ArrayList;

/**
 *
 * @author Riverto
 */
public class Binario extends FetchClass implements Sorting{
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

    @Override
    public void selection() {
        int m,temp;
        for(int i=0; i<vector.length;i++){
            m=i;
            for(int j=i+1;j<vector.length;j++){
                if(vector[j]<vector[m]){
                    m=j;
                }
            }
            if(i != m){
            temp=vector[i];
            vector[i]=vector[m];
            vector[m]=temp;
        }
    }
    }

    @Override
    public void insertion() {
        int temp,j;
        for(int i=0;i<vector.length;i++){
            temp = vector[i];
            j = i-1;
            while((j>=0)&&(vector[j]>temp)){
                vector[j+1] = vector[j];
                j-=1;
            }
            vector[j+1] = temp;
        }
    }

    @Override
    public void burbuja() {
        for(int i=1;i<vector.length;i++){
            for(int j=0;j<vector.length-1;j++){
                if(vector[j]>vector[j+1]){
                swap(j, (j+1));
                }
            }
        }
    }

    @Override
    public void quickSort(int primero, int ultimo) {
        int i=primero;
        int j=ultimo;
        int pivot = vector[((primero+ultimo)/2)];
        do{
            while(vector[i]<pivot){
                i += 1;
            }
            while(vector[j]>pivot){
                j -= 1;
            }
            if(i<=j){
                swap(i,j);
                i += 1;
                j -= 1;
            }
            
        } while (i<=j);
        if(primero<j){
            quickSort(primero, j);
        }
        if(i<ultimo){
            quickSort(i, ultimo);
        }
    }

    @Override
    public int[] mergeSort(int[] array) {
        ArrayList<Integer> list = new ArrayList<>(array.length);
        for (int x=0;x<array.length;x++) {
            list.add(array[x]);
        }
        if(array.length <= 1){
            return array;
        }
        ArrayList<Integer> izquierda=new ArrayList<>();
        ArrayList<Integer> derecha= new ArrayList<>();
        for(int i=0;i<array.length;i++){
            if(i<(array.length/2)){
                izquierda.add(list.get(i));
            } else {
                derecha.add(list.get(i));
            }
        }
        int[] izq = new int[izquierda.size()];
        for(int j=0;j<izquierda.size();j++){
            izq[j]=izquierda.get(j);
        }
        int[] der = new int[derecha.size()];
        for(int j=0;j<derecha.size();j++){
            der[j]=derecha.get(j);
        }
        izq=mergeSort(izq);
        der=mergeSort(der);
        
        return merge(izq,der);
    }

    @Override
    public int[] merge(int[] izq, int[] der) {
        ArrayList<Integer> result = new ArrayList<>((izq.length)+(der.length));
        ArrayList<Integer> izquierda = new ArrayList<>(izq.length);
        for(int x=0;x<izq.length;x++) {
            izquierda.add(izq[x]);
        }
        ArrayList<Integer> derecha = new ArrayList<>(der.length);
        for (int x=0;x<izq.length;x++) {
            derecha.add(der[x]);
        }
        while((!izquierda.isEmpty())&&(!derecha.isEmpty())){
            if(izquierda.get(0) <= derecha.get(0)){
                result.add(izquierda.get(0));
                izquierda.remove(0);
            } else {
                result.add(derecha.get(0));
                derecha.remove(0);
            }
        }
        while(!izquierda.isEmpty()){
            result.add(izquierda.get(0));
            izquierda.remove(0);
        }
        while(!derecha.isEmpty()){
            result.add(derecha.get(0));
            derecha.remove(0);
        }
        int[] res = new int[result.size()];
        for(int j=0;j<result.size();j++){
            res[j]=result.get(j);
        }
        return res;
    }

    @Override
    public void swap(int i, int j) {
        int temp;
        temp = vector[i];
        vector[i] = vector[j];
        vector[j] = temp;
    }
}