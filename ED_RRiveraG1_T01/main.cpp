#include <iostream>
#include "SecClass.h"
#include "BinClass.h"

int main() {

    std::cout << "Binary Search" << std::endl;

    BinClass binario;
    std::cout << "Enter the size of your array: ";
    int size;
    std::cin >> size;
    binario.setArray(binario.RandArray(size));
    binario.showArray();
    std::cout << "Enter the number you are searching for (1 to 10): ";
    int search;
    std::cin >> search;
    binario.showFetch(binario.bFetch(search));
    binario.showArray();
}