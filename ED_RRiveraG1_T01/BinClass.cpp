//
// Created by Roberto Rivera on 9/3/17.
//

#include "BinClass.h"

BinClass::BinClass(){

}
int BinClass::bFetch(int e){
    return bFetch(myArray, e);
}
int BinClass::bFetch(std::vector<int> &a, int e) {
    BinClass temp;
    int choice;
    bool abc = true;
    while (abc != false) {
        std::cout << "*****\n";
        std::cout << " 1 - Selection.\n";
        std::cout << " 2 - Insertion.\n";
        std::cout << " 3 - Bubble.\n";
        std::cout << " 4 - QuickSort.\n";
        std::cout << " 5 - MergeSort.\n";
        std::cout << " Enter your choice and press return: ";

        std::cin >> choice;

        switch (choice) {
            case 1:
                temp.selection(a);
                break;
            case 2:
                temp.insertion(a);
                break;
            case 3:
                temp.bubble(a);
                break;
            case 4:
                temp.quicksort(a, 0, a.size() - 1);
                break;
            case 5:
                temp.mergeSort(a);
                break;
            default:
                std::cout << "Not a Valid Choice. \n";
                std::cout << "Choose again.\n";
                std::cin >> choice;
                break;
        }
        int centro, inicio = 0, fin;
        fin = (a.size() - 1);

        while (inicio <= fin) { //inicio de ciclo para no usar recursividad
            centro = (inicio + fin) / 2; //se calcula el valor del centro

            if (a[centro] == e) { return centro; } //se regresa la posicion del numero al ser encontrado

            if (e < a[centro]) { //Si el dato es menor que el valor centro
                fin = centro - 1; //mover el borde final a centro -1
            } else {
                inicio = centro + 1; //mover el borde inicio a centro +1
            }
        }
        return -1; //en caso de no encontrar el numero se regresa -1
    }
}