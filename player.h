#include "movingObject.h"

class Player : public MovingObject{
    public:
        Player();
        Position get_player();
        void move_player();
    private:
};