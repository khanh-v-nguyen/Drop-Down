//
// Created by Khanh Nguyen on 3/23/23.
//

#include "InputBox.h"

sf::Font InputBox::font;

InputBox::InputBox()
{
    setUpBox();
    setUpText();
}

void InputBox::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(MouseEvents::isClicked(box, window))
    {
        this -> disableStates(ITEMS_HIDDEN);
    }
}

void InputBox::setColor(sf::Color color)
{
    box.setFillColor(color);
}

sf::RectangleShape & InputBox::getBox()
{
    return box;
}

void InputBox::setUpBox()
{
    box.setSize({300,100});
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(3);
    box.setOutlineColor(sf::Color::White);
}


void InputBox::setSize(sf::Vector2f size)
{
    box.setSize(size);
    title.setCharacterSize(size.y / 3);
    setTextPosition();

}

void InputBox::setUpText()
{
    font.loadFromFile("CHERI___.TTF");
    title.setFont(font);
}

void InputBox::setTextPosition()
{
    sf::FloatRect o1 = box.getGlobalBounds();
    sf::FloatRect o2 = title.getGlobalBounds();

    title.setPosition({o1.left + o1.width/2 - o2.width /2, o1.top + o1.height/2 - o2.height});
}

void InputBox::setText(std::string text)
{
    title.setString(text);
    setTextPosition();
}

void InputBox::setPosition(sf::Vector2f position)
{
    box.setPosition(position);
    setTextPosition();
}

sf::FloatRect InputBox::getGlobalBounds()
{
    return box.getGlobalBounds();
}

std::string InputBox::getTitle()
{
    return title.getString();
}

void InputBox::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box);
    target.draw(title);
}


