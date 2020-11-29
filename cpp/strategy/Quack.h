#include <iostream>
#include "QuackBehavior.h"

class Quack : public QuackBehavior{
    void quack(){
        std::cout<<"Quack~!\n";
    }
};