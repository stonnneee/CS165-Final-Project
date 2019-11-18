//
//  compound.cpp
//  Final Project
//
//  Created by Stonnneee on 2019/11/16.
//  Copyright © 2019 Stonnneee. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include "compound.h"

using namespace std;

compound::compound() {
    initial_mass = 0;
    molar_mass = 0;
    empirical =" ";
}
void compound::setempirical(string name){
    empirical = name;
}
void compound::setinitial(double i_mass){
    initial_mass = i_mass;
}
void compound::setmolar(double m_mass){
    molar_mass = m_mass;
}
//getters
double compound::getmolar(){
    return molar_mass;
}
double compound::getinitial(){
    return initial_mass;
}
string compound::getempirical(){
    return empirical;
}
void compound::print(){
    cout << "You have " << setprecision(3) << getinitial() / getmolar()
        << " mole(s).\n";
    cout << "Name: " << getempirical() << "\n";
}
