//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_GUICOMPONENT_H
#define DROPDOWN_GUICOMPONENT_H
#include "States.h"
#include "SnapshotInterface.h"
#include <SFML/Graphics.hpp>

class GUIComponent :public States, public SnapshotInterface, public sf::Drawable
{

};


#endif //DROPDOWN_GUICOMPONENT_H
