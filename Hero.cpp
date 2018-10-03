//
//  Hero.cpp
//  Zelda'd Lists
//
//  Created by Michael Arp on 2/24/15.
//  Copyright (c) 2015 Michael Arp. All rights reserved.
//

#include "Hero.h"

Hero::Hero()
{
    setArmor();
    setSword();
    attack = 50;
    health = 200;
    locationx = 0;
    locationy = 0;
}
void Hero::setArmor()
{
    int weakness = printMenu("armor");
    if (weakness == 1)
    {
        armortype = 1;
    }
    else if (weakness == 2)
    {
        armortype = 2;
    }
    else if (weakness == 3)
    {
        armortype = 3;
    }
}
void Hero::setSword()
{
    int strength = printMenu("sword");
    if (strength == 1)
    {
        weapontype = 1;
    }
    else if (strength == 2)
    {
        weapontype = 2;
    }
    else if (strength == 3)
    {
        weapontype = 3;
    }
}
void Hero::setHealth(int damage)
{
    health-=(damage-defense);
}
void Hero::setDefense(char dragon)
{
    int dragontype = 0;
    if (dragon == 'B')
        dragontype = 1;
    else if (dragon == 'R')
        dragontype = 2;
    else if (dragon == 'E')
        dragontype = 3;
    //makes the type of dragon an int so I don't have to type as much
    if (dragontype == armortype && dragontype != 3)
    {
        defense = 0;
    }
    else if (dragontype == 1 && armortype == 2)
    {
        defense = 5;
    }
    else if (dragontype == 2 && armortype == 1)
    {
        defense = 5;
    }
    else if (armortype == 3 && dragontype != 3)
    {
        defense = 0;
    }
    else if (armortype == dragontype && armortype == 3)
    {
        defense = 10;
    }
}
int Hero::getAttack()
{
    return attack;
}
void Hero::setAttack(char dragon)
{
    int dragontype = 0;
    if (dragon == 'B')
        dragontype = 1;
    else if (dragon == 'R')
        dragontype = 2;
    else if (dragon == 'E')
        dragontype = 3;
    //makes the type of dragon an int so I don't have to type as much
    if (dragontype == weapontype && dragontype != 3)
    {
        attack += 0;
    }
    else if (dragontype == 1 && weapontype == 2)
    {
        attack += 5;
    }
    else if (dragontype == 2 && weapontype == 1)
    {
        attack += 5;
    }
    else if (weapontype == 3 && dragontype != 3)
    {
        attack += 0;
    }
    else if (weapontype == dragontype && weapontype == 3)
    {
        attack += 10;
    }

    
}
/*int Hero::getArmor()
{
    return armortype;
}*/
int Hero::getHealth()
{
    return health;
}
/*int Hero::getSword()
{
    return weapontype;
}*/
int Hero::getLocationx()
{
    return locationx;
}
int Hero::getLocationy()
{
    return locationy;
}
void Hero::setLocation(int x, int y)
{
    locationx = x;
    locationy = y;
}
int Hero::printMenu(string choice)
{
    int temp = 0;
    int descmenu = 0;
    cout << "Choose a " << choice << " type, to protect against the dragons you must slay!" << endl;
    cout << "There are three types of " << choice << ":\n 1.Ice\n 2.Fire\n 3.Ancient\n Enter 42 to get descriptions, or choose a type: 1, 2, or 3." << endl;
    cin >> temp;
    if (temp == 42 && choice == "sword")
    {
        cout << "Welcome to the Description menu! Choose what you want to hear about, or 5 to continue on to sword selection!" << endl;
        cin >> descmenu;
        while (descmenu !=5)
        {
            if (descmenu == 1)
                cout << "1. Ice sword, which makes your attacks damage fire dragons, but not ice dragons." << endl;
            else if (descmenu == 2)
                cout << "2. Fire sword, which makes your attacks damage ice dragons, but not fire dragons." << endl;
            else if (descmenu == 3)
                cout << "3. Ancient sword, which makes your attacks damage old dragons, but not any other type of dragon." << endl;
            cout << "Choose what you want to hear about, or 5 to continue on to sword selection!" << endl;
            cin >> descmenu;
        }
        cout << "There are three types of " << choice << "\n 1.Ice\n 2.Fire\n 3.Ancient\n Choose a type: 1, 2, or 3." << endl;
        cin >> temp;
    }
    else if (temp == 42 && choice == "armor")
    {
        int descmenu = 0;
        cout << "Choose an armor type, to protect against the dragons you must slay!" << endl;
        cout << "There are three types of armor:\n 1.Ice armor\n 2.Fire armor\n 3.Ancient Armor\n Enter 42 to get descriptions, or choose a type of armor, 1, 2, or 3." << endl;
        cin >> temp;
        if (temp == 42)
        {
            cout << "Welcome to the Description menu! Choose what you want to hear about, or 5 to continue on to armor selection!" << endl;
            cin >> descmenu;
            while (descmenu !=5)
            {
                if (descmenu == 1)
                    cout << "1. Ice armor, which makes you weak to ice, but lessens the fire damage." << endl;
                else if (descmenu == 2)
                    cout << "2. Fire armor, which makes you weak to fire, but lessens ice damage." << endl;
                else if (descmenu == 3)
                    cout << "3. Ancient armor, which makes you weak to both fire and ice, but makes you more resistant to attacks from old dragons." << endl;
                cout << "Choose what you want to hear about, or 5 to continue on to armor selection!" << endl;
                cin >> descmenu;
            }
            cout << "There are three types of " << choice << "\n 1.Ice\n 2.Fire\n 3.Ancient\n Choose a type: 1, 2, or 3." << endl;
            cin >> temp;
        }

    }
    return temp;
}





