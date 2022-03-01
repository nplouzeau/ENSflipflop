//
// Created by Noël Plouzeau on 220228.
//

#include <iostream>
#include "stateon.h"

void StateOn::handle() {
    std::cerr << "On -> Off" << std::endl;
    flipFlop.currentState = flipFlop.offState;
}

StateOn::StateOn(FlipFlop &_flip) : State(_flip) {

}
