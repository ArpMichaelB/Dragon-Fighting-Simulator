//
//  Hero.h
//  Zelda'd Lists
//
//  Created by Michael Arp on 2/24/15.
//  Copyright (c) 2015 Michael Arp. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

class Hero
{
public:
    Hero();
    void setArmor();//Lets the player choose armor type
    void setSword();//lets the player choose sword type
    int getHealth();//shows other classes health
    void setDefense(char dragon);//sets player's defense based on inputted dragon, and their armor choice
    int getAttack();//shows other classes attack
    void setAttack(char dragon);//sets player's attack based on inputted dragon, and their sword choice
    void setHealth(int damage);//the damage taking function, with incoming damage based on armor choice and attacking dragon
    void setLocation(int x, int y);//updates player location, usually after movement
    int getLocationx();//returns the player's x coordinate
    int getLocationy();//returns the player's y coordinate
private:
    int health;
    int defense;
    int attack;
    int armortype;
    int weapontype;
    int locationx;
    int locationy;//location x and y on the board
    int printMenu(string choice);
    
};