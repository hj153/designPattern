#include <iostream>
#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior{
    void fly(){
        std::cout << "i am fling~\n";
    }
};