//
//  Game.cpp
//  Gods' Gift to Man
//
//  Created by Dallas Feuerbach on 12/16/14.
//  Copyright (c) 2014 Dallas Feuerbach. All rights reserved.
//

#include "Board.h"
using namespace std;
board::board()
{
    xCoX = 7;
    xCoY = 7;
    ident = 'U';
}
void board::makeBoard(int px, int py)//creates a 15x15 board with an "X" in the very center square
{
    for (int x = 0; x <= 14; x++)
    {
        for (int y = 0; y <= 14; y++)
        {
            arena[x][y] = '`';
        }
    }
    
    arena [7][7] = ident;
    arena[px][py] = 'H';
}

void board::printBoard()//couts the board onto the display
{
    cout << "-----------------------------" << endl;
    for (int x = 0; x <= 14; x++)
    {
        for (int y = 0; y <= 14; y++)
        {
            cout << arena[x][y] << " ";
        }
        cout << endl;
    }
}

void board::setIdent(char drag)
{
    ident = drag;
}

void board::move(char input, int x, int y, char name)
{
    if (input == 'u')
    {
        arena[x-1][y] = name;
        arena[x][y] = '`';
    }
    else if (input == 'd')
    {
        arena[x+1][y] = name;
        arena[x][y] = '`';
    }
    else if (input == 'l')
    {
        arena[x][y-1] = name;
        arena[x][y] = '`';
    }
    else if (input == 'r')
    {
        arena[x][y+1] = name;
        arena[x][y] = '`';
    }
}

bool board::isLegal(char input, int x, int y)
{
    if (input == 'u')
    {
        if (x-1 < 0 || arena[x-1][y] != '`')
        {
            cout << "stupid stupid dumb" << endl;
            return false;
        }
    }
    else if (input == 'd')
    {
        if (x + 1 > 14 || arena[x+1][y] != '`')
        {
            cout << "stupid stupid dumb" << endl;
            return false;
        }
    }
    else if (input == 'l')
    {
        if (y-1 < 0 || arena[x][y-1] != '`')
        {
            cout << "stupid stupid dumb" << endl;
            return false;
        }
    }
    else if (input == 'r')
    {
        if (y+1 > 14 || arena[x][y+1] != '`')
        {
            cout << "stupid stupid dumb" << endl;
            return false;
        }
    }
    return true;
}

