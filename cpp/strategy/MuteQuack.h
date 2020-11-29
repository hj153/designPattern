#include <iostream>
#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior{
    void quack(){
        std::cout<<"Silence ~!\n";
    }
};