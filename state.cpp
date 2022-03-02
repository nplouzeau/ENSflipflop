//
// Created by Noël Plouzeau on 220228.
//

#include "state.h"
#include "flipflop.h"

class FlipFlop;

State::State(FlipFlop &_flip) : flipFlop(_flip) {}

State::~State() {

}
