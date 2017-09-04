//
// Created by Roberto Rivera on 9/3/17.
//

#include "FetchClass.h"

std::vector<int> FetchClass::RandArray(int size){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);

    std::vector<int> tempArray(size);
    for(int i=0; i < tempArray.size();i+=1){
        tempArray[i]=dis(gen);
    }
    return tempArray;
}

FetchClass::FetchClass(){

}

void FetchClass::setArray(std::vector<int> a){
    std::cout << a.size() <<"set"<< std::endl;
    myArray=a;
    a.size();
}

std::vector<int> FetchClass::getArray(){
    return myArray;
}

void FetchClass::showArray(){
    showArray(myArray);
}

void FetchClass::showFetch(int position){
    std::cout << "El numero se encuentra en la posición: " << position << std::endl;
}

void FetchClass::showArray(std::vector<int>& a){
    for(int i=0; i<a.size();i+=1){
        std::cout << a[i] << std::endl;
    }
}
