#include "board.h"

void Board::printBoard(Player &player){

    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 10; x++){
            if(x == pos_treasure.X && y == pos_treasure.Y)
                std::cout << "T  ";
            else if (x == player.get_player().X && y == player.get_player().Y)
            {
                std::cout << "P  ";
            }   
            else
                std::cout << ".  ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;
}

Position Board::get_treasure(){
    return pos_treasure;
}

Board::Board(){
    bool valid{false};
    int input{0};

    // Read the X coordinate of the treasure
    std::cout << "Please enter the X coordinate of the treasure between 1 - 9: " << std::endl;
    while (valid != true)
    {
        std::cin >> input;
        if (input >= 0 && input < 10)
            valid = true;
        else
            std::cout << "Enter a value between 1 and 9!" << std::endl; 
    }
    pos_treasure.X = input;
    valid = false;

    // Read the Y coordinate of the treasure
    std::cout << "Please enter the Y coordinate of the treasure between 1 - 9: " << std::endl;
    while (valid != true)
    {
        std::cin >> input;
        if (input >= 0 && input < 10)
            valid = true;
        else
            std::cout << "Enter a value between 0 and 9!" << std::endl; 
    }
    pos_treasure.Y = input;
}