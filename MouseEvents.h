//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_MOUSEEVENTS_H
#define DROPDOWN_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>
class MouseEvents
{
public:
    template<class T>
    static bool isHovered(const T& Obj, const sf::RenderWindow& window);

    template<class T>
    static bool isClicked(const T& Obj, const sf::RenderWindow& window);

    template<class T>
    static bool isNotClicked(const T& Obj, const sf::RenderWindow& window);
};

#include "MouseEvents.cpp"

#endif //DROPDOWN_MOUSEEVENTS_H
