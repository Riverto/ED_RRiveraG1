//
// Created by Roberto Rivera on 9/3/17.
//

#ifndef BUSQUEDA_2_BINCLASS_H
#define BUSQUEDA_2_BINCLASS_H

#include "FetchClass.h"
#include "SortClass.h"
#include <stdio.h>

class BinClass : public FetchClass, public SortClass{
public:
    BinClass();
    int bFetch(int e);
    static int bFetch(std::vector<int> &a, int e);
};


#endif //BUSQUEDA_2_BINCLASS_H
