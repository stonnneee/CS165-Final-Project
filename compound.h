//
//  compoud.h
//  Final Project
//
//  Created by Stonnneee on 2019/11/16.
//  Copyright © 2019 Stonnneee. All rights reserved.
//

#ifndef compound_h
#define compound_h

#include <string>
using namespace std;

class compound{
public:
    //constructor
    compound();
    //setters
    void setinitial(double);
    void setmolar(double);
    void setempirical(string);
    //getters
    double getinitial();
    double getmolar();
    string getempirical();
    void print();
private:
    //variable intilization
    double initial_mass;
    double molar_mass;
    string empirical;
};

#endif /* compound_h */
