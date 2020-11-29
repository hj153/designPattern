#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior{
    void quack(){
        std::cout<<"squeaaaak ~!\n";
    }
};