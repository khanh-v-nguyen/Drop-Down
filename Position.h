//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_POSITION_H
#define DROPDOWN_POSITION_H

#include <SFML/Graphics.hpp>

class Position
{
public:
    template <class T>
    static void top(T& obj1, T& obj2);

    template <class T>
    static void bottom(T &obj1, T &obj2);

    template <class T>
    static void left(T& obj1, T& obj2);

    template <class T>
    static void right(T& obj1, T& obj2);

    template <class T>
    static void center(T& obj1, T& obj2);

    template <class T>
    static void centerBottom(T& obj1, T& obj2);

};

#include "Position.cpp"

#endif //DROPDOWN_POSITION_H
