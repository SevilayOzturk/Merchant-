//
//  antique.hpp
//  asa
//
//  Created by Sevilay Ozturk on 3/4/20.
//  Copyright © 2020 Sevilay Ozturk. All rights reserved.
//

#ifndef antique_h
#define antique_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

class Antique{
private:
    string name;
    float price;
    
public:
    Antique();
    string getName();
    void setName(string nName);
    float getPrice();
    void setPrice(float nPrice);
    string toString();
};

#endif /* antique_hpp */
