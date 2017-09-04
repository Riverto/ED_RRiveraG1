//
// Created by Roberto Rivera on 9/3/17.
//

#include "SortClass.h"

void SortClass::selection(std::vector<int>& a){
    for (int i = 0; i < a.size() - 1; i++) {			 //Para un numero i igual a cero, i debe ser menor que el largo del vector menos uno
        int min = i;                                     //declarar variable minimo es igual a i
        for (int j = i + 1; j < a.size(); j++) {        //Aquí se irá corriendo el vector j que será donde se acomoden los numeros
            if (a[j] < a[min]) {						 //Si el vector j es menor se colocara
                min = j;
            }
        }
        if (i != min) {									//Si i es diferente  que el minimo
            int aux = a[i];
            a[i] = a[min];
            a[min] = aux;
        }
    }
}
void SortClass::insertion(std::vector<int>& a){
    int temp;
    for (int i = 1; i<a.size(); i++) {
        temp = a[i];
        int j = i - 1;
        while ((j >= 0) && (a[j] > temp)) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
void SortClass::swap(std::vector<int>& a, int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void SortClass::bubble(std::vector<int>& a){
    for (int i = 1; i<a.size(); i++) {
        for (int j = 0; j<a.size() - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a,j,j+1);
            }
        }
    }
}
void SortClass::quicksort(std::vector<int>& a, int i, int f){
    int primero=i;
    int ultimo=f;
    int pivot = a[((primero+ultimo)/2)];
    do{
        while(a[i]<pivot){
            i += 1;
        }
        while(a[f]>pivot){
            f -= 1;
        }
        if(i<=f){
            swap(a,i,f);
            i += 1;
            f -= 1;
        }

    } while (i<=f);
    if(primero<f){
        quicksort(a, primero, f);
    }
    if(i<ultimo){
        quicksort(a, i, ultimo);
    }
}
void SortClass::mergeSort(std::vector<int>& a){
    if(a.size() <= 1){
        return;
    }
    std::vector<int> izquierda;
    std::vector<int> derecha;
    for (int index=0; index<a.size(); index+=1){
        if(index<(a.size()/2)){
            izquierda.push_back(a[index]);
        } else {
            derecha.push_back(a[index]);
        }
    }
    mergeSort(izquierda);
    mergeSort(derecha);

    a=merge(izquierda, derecha);
}
std::vector<int> SortClass::merge(std::vector<int> &a, std::vector<int> &b){
    std::vector<int> result;
    while((!a.empty())&&(!b.empty())){
        if(a.front() <= b.front()){
            result.push_back(a[0]);
            a.erase(a.begin());
        } else {
            result.push_back(b[0]);
            b.erase(b.begin());
        }
    }
    while(!a.empty()){
        result.push_back(a[0]);
        a.erase(a.begin());
    }
    while(!b.empty()){
        result.push_back(b[0]);
        b.erase(b.begin());
    }
    return result;
}