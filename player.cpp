#include "player.h"

Position Player::get_player(){
    return pos;
}

void Player::move_player(){
    char input{};
    bool valid{false};

    while(valid != true){
        std::cout << "Move your player (w, a, s, d): ";
        std::cin >> input;
        std::cout << input << std::endl;
            switch (input)
            {
            case 'w':
                if(pos.Y > 0){
                    pos.Y -= 1;
                    valid = true;
                }
                break;
            case 'a':
                if(pos.X > 0){
                    pos.X -= 1;
                    valid = true;
                }
                break;
            case 's':
                if(pos.Y < 9){
                    pos.Y += 1;
                    valid = true;
                }
                break;
            case 'd':
                if(pos.X < 9){
                    pos.X += 1;
                    valid = true;
                }
            default: 
                std::cout << "Please enter a valid key!" << std::endl;
            }   
        
    }
}

Player::Player(){
    pos.X = 0;
    pos.Y = 0;
    std::cout << "Player constructor called" << std::endl;
}