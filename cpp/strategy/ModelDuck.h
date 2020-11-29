#include <iostream>
#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"

class ModelDuck : public Duck{
    public:
     ModelDuck() : Duck(new FlyNoWay(), new Quack()){

     }

     void display(){
         std::cout << "i am model duck \n";
     }
};
