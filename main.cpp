//
//  main.cpp
//  Final Project
//
//  Created by Stonnneee on 2019/10/12.
//  Copyright © 2019 Stonnneee. All rights reserved.

#include <iostream>
#include <string>
using namespace std;

#include "compound.h"

int main() {
    compound cp;
    string name;
    double i, m;
   
    cout << "Please enter the empirical formula for the compound: \n";
    getline(cin, name);
    cp.setempirical(name);
    
    cout<< "How many gram of a substance do you have? \n";
    cin >> i;
    cp.setinitial(i);
    
    cout << "Please enter the molar mass for the empirical forumla of the compound:\n";
    cin >> m;
    cp.setmolar(m);
    
    cp.print();
    
    return 0;
}
