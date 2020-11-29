#include <iostream>
#include <memory>
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

// https://webnautes.tistory.com/1158 : vs compile guide
// namespace 분리 필요

int main(){
    std::unique_ptr<Duck> mallard(new MallardDuck());
    mallard->performFly();
    mallard->performQuack();

    std::unique_ptr<ModelDuck> modelduck(new ModelDuck());
    modelduck->performFly();
    modelduck->setFlyBehavior(new FlyRocketPowered());
    modelduck->performFly();

    return 0;
}