//
//  Dragons.h
//  Crikey Dragoons
//
//  Created by Dallas Feuerbach on 2/24/15.
//  Copyright (c) 2015 Dallas Feuerbach. All rights reserved.
//

#include <iostream>
using namespace std;

class dragon
{
public:
    dragon(int h, int a, int d); //constructor
    void sethealth(int x);//imput health
    int gethealth();//output health
    void setattack(int x);//input attack
    int getattack();//output health
    void setdefense(int x);//imput defense
    int getdefense();//output defense
    
private:
    int health;
    int attack;
    int defense;
    int special;
};
//So do all the dragons get fed their health, attack, and damage amounts so you can set them manually, or is that for something else?
class elder : public dragon
{
public:
    elder(int h, int a, int d);//constructor
    
private:

};

class blue : public dragon
{
public:
    blue(int h, int a, int d); //constructor
    
private:
    
};

class red : public dragon
{
public:
    red(int h, int a, int d);//constructor
    
private:
    
};
class yellow : public dragon
{
public:
    yellow(int h, int a, int d);//constructor
    
private:
    
};
