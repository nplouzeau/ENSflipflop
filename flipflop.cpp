//
// Created by Noël Plouzeau on 220228.
//

#include "flipflop.h"
#include "stateon.h"
#include "stateoff.h"

FlipFlop::FlipFlop() {
    onState = new StateOn(*this);
    offState = new StateOff(*this);

    currentState = offState;
}

void FlipFlop::toggle() {
    currentState->handle();
}
