#include <iostream>
#include <memory>
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck : public Duck{
    public:
     MallardDuck() : Duck(new FlyWithWings(), new Quack()){         
     }
     void display(){
         std::cout << "i am water duck\n";
     }
};

/*
MallardDuck::MallardDuck() : Duck(new FlyWithWings(), new Quack()){

}*/