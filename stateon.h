//
// Created by Noël Plouzeau on 220228.
//

#pragma once


#include "state.h"

class StateOn : public State {
public:
    StateOn(FlipFlop& _flip);
    virtual void handle() override;
};



