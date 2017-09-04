//
// Created by Roberto Rivera on 9/3/17.
//

#ifndef BUSQUEDA_2_SECCLASS_H
#define BUSQUEDA_2_SECCLASS_H


#include "FetchClass.h"

#include <stdio.h>
class SecClass : public FetchClass{
public:
    SecClass();
    int sFetch(int e);
    static int sFetch(std::vector<int> &a, int e);
};


#endif //BUSQUEDA_2_SECCLASS_H
