//
// Created by Noël Plouzeau on 220228.
//

#pragma once


#include "state.h"

class State;

class FlipFlop {
public:
    FlipFlop();

    void toggle();

private:
    State* currentState;
    State* onState;
    State* offState;

    friend class StateOn;
    friend class StateOff;
};



