#include <iostream>
#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior{
    void fly(){
        std::cout << "i can't fly~\n";
    }
};