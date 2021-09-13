#include  <iostream>

#include "board.h"

int main(){
    Board b;
    Player p;

    bool win{false};

    while(win != true){
         b.printBoard(p);
         p.move_player();
         if(b.get_treasure().X == p.get_player().X && b.get_treasure().Y == p.get_player().Y){
             win = true;
             std::cout << "Congratulations!" << std::endl;
         }
    }  

    return 0;
}