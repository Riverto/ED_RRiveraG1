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
public interface Sorting {
    void selection();
    void insertion();
    void swap(int i, int j);
    void burbuja();
    void quickSort(int primero, int ultimo);
    int[] mergeSort(int[] array);
    int[] merge(int[] izquierda,int[] derecha);
}
