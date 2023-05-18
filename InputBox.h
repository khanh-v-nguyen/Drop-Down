//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_INPUTBOX_H
#define DROPDOWN_INPUTBOX_H
#include "Item.h"
#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include "States.h"
#include <iostream>
class InputBox : public sf::Drawable, public States
{
public:
    InputBox();
    void eventHandler(sf::RenderWindow &window, sf::Event event);
    void setText(std::string text);
    sf::FloatRect getGlobalBounds();
    void setPosition(sf::Vector2f position);
    std::string getTitle();
    void setSize(sf::Vector2f size);
    void setColor(sf::Color color);
    sf::RectangleShape & getBox();
private:
    sf::RectangleShape box;
    sf::Text title;
    static sf::Font font;
    void setUpBox();
    void setUpText();
    void setTextPosition();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //DROPDOWN_INPUTBOX_H
