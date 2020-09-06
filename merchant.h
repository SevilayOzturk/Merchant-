//
//  merchant.hpp
//  asa
//
//  Created by Sevilay Ozturk on 3/4/20.
//  Copyright © 2020 Sevilay Ozturk. All rights reserved.
//

#ifndef merchant_h
#define merchant_h

#include "antique.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Merchant{
private:
    Antique antiques[10];
    int quantities[10];
    float revenue;
    bool hasChanged;
    
public:
    Merchant(Antique antiques[], int quantities[]);
    void haggle();
    void printMenu();
    void selectAntique(float &budget);
    void leave(float budget);
};





#endif /* merchant_hpp */
