//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_STATES_H
#define DROPDOWN_STATES_H
#include <map>

class States
{
public:
    States();

    enum ObjectState
    {
        HIDDEN,
        HIGHLIGHTED,
        DISABLED,
        SELECTED,
        ITEMS_HIDDEN,
        NAME_CHANGEABLE,

        LAST_STATE
    };

    bool checkStates(ObjectState state) const; //check if enum in map?, const bc we just wanna check not change a value
    void enableStates(ObjectState state); // make state true inside of map
    void disableStates(ObjectState state);
    void setState(ObjectState state, bool value); //pass in state , pass in what i want it to be
    void toggleState(ObjectState state);//change state from true to false
private:
    std::map<ObjectState, bool> map;
    void load();
};

#endif //DROPDOWN_STATES_H
