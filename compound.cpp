//
//  compound.cpp
//  Final Project
//
//  Created by Stonnneee on 2019/11/16.
//  Copyright © 2019 Stonnneee. All rights reserved.
//
#include <iostream>
#include "compound.h"

using namespace std;

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
