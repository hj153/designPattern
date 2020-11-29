#include <iostream>
#include "FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior{
    void fly(){
        std::cout << "i am going to the galaxy by boom\n";
    }
};