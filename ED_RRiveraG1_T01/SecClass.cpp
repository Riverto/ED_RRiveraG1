//
// Created by Roberto Rivera on 9/3/17.
//

#include "SecClass.h"
SecClass::SecClass(){

}
int SecClass::sFetch(int e){
    return sFetch(myArray, e);
}
int SecClass::sFetch(std::vector<int> &a, int e){
    for (int i=0;i<a.size(); i+=1){
        if(a[i]==e){return i;}//al encontrar el numero buscado regresa su posicion
    }
    return -1;//en caso de no encontrarlo se regresa -1
}
