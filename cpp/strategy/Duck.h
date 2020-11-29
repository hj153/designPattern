#include <iostream>
#include <memory>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
    public:
     
     Duck(FlyBehavior* _fb, QuackBehavior* _qb): _flyBehavior(_fb), _quackBehavior(_qb){}
     Duck(){}
     ~Duck(){}

     std::unique_ptr<FlyBehavior> _flyBehavior;
     std::unique_ptr<QuackBehavior> _quackBehavior;

     virtual void display() = 0;

     void setFlyBehavior(FlyBehavior* _fb){
         _flyBehavior = std::unique_ptr<FlyBehavior>(_fb);
     }

     void setQuackBehavior(QuackBehavior* _qb){
         _quackBehavior = std::unique_ptr<QuackBehavior>(_qb);
     }

     void performFly(){
         _flyBehavior->fly();
     }

     void performQuack(){
         _quackBehavior->quack();
     }

     void swim(){
         std::cout<< "every duck floating on the water, even fake duck\n";
     }
};