//
// Created by Noël Plouzeau on 220228.
//

#include <iostream>
#include "stateoff.h"

void StateOff::handle() {
    std::cerr << "Off -> On" << std::endl;
    flipFlop.currentState = flipFlop.onState;

}

StateOff::StateOff(FlipFlop &_flip) : State(_flip) {

}
