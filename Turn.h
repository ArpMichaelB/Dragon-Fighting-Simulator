//
//  Turn.h
//  Zelda'd Lists
//
//  Created by Michael Arp on 2/26/15.
//  Copyright (c) 2015 Michael Arp. All rights reserved.
//

#include <iostream>
#include "Hero.h"
#include "Board.h"

class Turn
{
public:
    void doThing();
    Turn();
private:
    void egg();//decides what dragon is going to be in the arena
    board space;
    Hero Player;
};
