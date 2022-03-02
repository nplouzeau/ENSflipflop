//
// Created by Noël Plouzeau on 220228.
//

#pragma once


//#include "flipflop.h"

class FlipFlop;

class State {
public:
    State(FlipFlop& _flip);
    virtual ~State();
    virtual void handle() = 0;
protected:
    FlipFlop& flipFlop;
};



