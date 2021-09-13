#include <iostream>

#ifndef _DATA_TYPES_
#define _DATA_TYPES_

#include "dataTypes.h"
#include "player.h"

#endif

class Board{
    public:
        Board();
        Position get_treasure();
        void printBoard(Player &player);
    private:
        Position pos_treasure; 
};