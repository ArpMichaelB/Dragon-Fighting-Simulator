//
//  Turn.cpp
//  Zelda'd Lists
//
//  Created by Michael Arp on 2/26/15.
//  Copyright (c) 2015 Michael Arp. All rights reserved.
//

#include "Turn.h"
Turn::Turn()
{
    srand((unsigned)(NULL));
    space.makeBoard(Player.getLocationx(), Player.getLocationy());
}
void Turn::doThing()
{
    char input;
    space.printBoard();
    cout << "What would you like to do? M for move, A for attack" << endl;
    cin >> input;
    if (input == 'm')
    {
        
    }
    else if (input == 'a')
    {
    
    }
}
void Turn::egg()
{
    int temp = (rand() % 4);
    char i = 'U';
    if (temp == 0)
        i = 'R';
    else if(temp == 1)
        i = 'B';
    else if(temp == 2)
        i = 'Y';
    else if(temp == 3)
        i = 'E';
    else
        i = 'D';
    space.setIdent(i);
}





