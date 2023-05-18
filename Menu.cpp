//
// Created by Khanh Nguyen on 3/30/23.
//

#include "Menu.h"

Menu::Menu()
{

}

void Menu::setState()
{

}


void Menu::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    this -> disableStates(NAME_CHANGEABLE);
    DropDownMenu::eventHandler(window, event);
}


