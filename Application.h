//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_APPLICATION_H
#define DROPDOWN_APPLICATION_H
#include <SFML/Graphics.hpp>
#include "DropDownMenu.h"
#include <iostream>
#include "Menu.h"
class Application
{
public:
    Application();
    void runApp();

private:
    sf::RenderWindow window;

};


#endif //DROPDOWN_APPLICATION_H
