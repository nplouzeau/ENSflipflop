//
// Created by Noël Plouzeau on 220228.
//

#pragma once


#include "state.h"

class StateOff : public State {
public:
    StateOff(FlipFlop& _flip);
    virtual void handle() override;
};



