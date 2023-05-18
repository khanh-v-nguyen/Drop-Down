//
// Created by Khanh Nguyen on 3/30/23.
//

#ifndef DROPDOWN_MENU_H
#define DROPDOWN_MENU_H
#include "DropDownMenu.h"

class Menu : public DropDownMenu
{
public:
    Menu();
    void eventHandler(sf::RenderWindow & window, sf::Event event);

private:
    void setState();


};


#endif //DROPDOWN_MENU_H
