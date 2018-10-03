//
//  Dragons.cpp
//  Crikey Dragoons
//
//  Created by Dallas Feuerbach on 2/24/15.
//  Copyright (c) 2015 Dallas Feuerbach. All rights reserved.
//

#include "Dragons.h"
using namespace std;

dragon::dragon(int h, int a, int d)//constructor
{
    health = h;
    attack = a;
    defense = d;
}

elder::elder(int h, int a, int d) : dragon(h,a,d)
{
   
}
blue::blue(int h, int a, int d) : dragon(h,a,d)
{
   
}
red::red(int h, int a, int d) : dragon(h,a,d)
{
    
}
yellow::yellow(int h, int a, int d) : dragon(h,a,d)
{
    
}
void dragon::sethealth(int x)
{
    health = x;
}
int dragon::gethealth()
{
    return health;
}
void dragon::setattack(int x)
{
    attack = x;
}
int dragon::getattack()
{
    return attack;
}
void dragon::setdefense(int x)
{
    defense = x;
}
int dragon::getdefense()
{
    return defense;
}
