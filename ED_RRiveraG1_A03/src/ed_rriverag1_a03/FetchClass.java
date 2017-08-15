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
public abstract class FetchClass {
    protected int[] vector;
    
    abstract int Fetch(int n); //clase que sera sobreescrita
        
    public void setV(int[] v){
        this.vector=v;
    }
    
    public int[] randomV(int n){ 
        int[] vec = new int[n]; //se crea un arreglo con el tamaño definido
        for (int i=0;i<vec.length;i++){
            vec[i]=(int)(Math.random()*100); 
        }
        return vec;
    }
    
    public int[] getV(){
        return vector;
    }
    
    public String showV(){//muestra el vector con estilo de vector [0,1,2,3]
        String result;
        result = "[";
        for (int i=0;i<vector.length;i++){
            result += vector[i];
            if(i<vector.length-1) result+= ",";
        }
        result += "]";
        return result;
    }
    
    public void showF(int n){
        if(n==-1){
            System.out.println("El numero no se encuentra en el arreglo."); //si no encontramos el numero
        } else {
            System.out.println("El numero se encuentra en la posicion:" +n); //si lo encontramos lo mostramos
        }
    }
}
