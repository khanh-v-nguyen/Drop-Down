//
// Created by Khanh Nguyen on 3/23/23.
//

#include "States.h"

States::States()
{
    load();
}

void States::load() //add all states to map, default them to false
{
    for(int i = 0; i<LAST_STATE; i++)
    {
        map[static_cast<ObjectState>(i)] = false;
    }
}

bool States::checkStates(ObjectState state) const
{
    return map.at(state);
}

void States::enableStates(ObjectState state)
{
    setState(state, true);
}

void States::disableStates(ObjectState state)
{
    setState(state, false);
}

void States::setState(ObjectState state, bool value)
{
    map.at(state) = value;
}

void States::toggleState(ObjectState state)
{
    setState(state, !map.at(state));
}