//
//  Game.h
//  Gods' Gift to Man
//
//  Created by Dallas Feuerbach on 12/16/14.
//  Copyright (c) 2014 Dallas Feuerbach. All rights reserved.
//

#include <iostream>
#include <time.h>
using namespace std;

class board
{
public:
    board();//constructor
    void turn();
    void makeBoard(int px, int py);
    void printBoard();
    void move(char input, int x, int y, char name);//uses player inputs to move the player about, make sure to run isLegal
    bool isLegal(char input, int x, int y);//gets the thing's input, as well as their x and y coordinate, to see if it is a legal move, gets name to know who's moving, and speed because reasons?
    void setIdent(char drag);//sets the dragon's character so the board can use it, based on what it is fed
private:
    char arena[15][15]; //builds batter area on a 5x5 grid
    char ident;
    int xCoX;
    int xCoY;
};