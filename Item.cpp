//
// Created by Khanh Nguyen on 3/23/23.
//

#include "Item.h"
sf::Font Item::font;

Item::Item()
{

}

Item::Item(std::string string)
{
    this -> title = string;
    init();
}

void Item::init()
{
    setUpItem();
    positionText();
}

std::string Item::getText()
{
    return title;
}

void Item::setUpItem()
{
    font.loadFromFile("CHERI___.TTF");
    text.setFont(font);
    text.setString(title);
    text.setCharacterSize(30);
    text.setFillColor(sf::Color::White);
    box.setFillColor(defaultColor);
    box.setSize({300,100});
}

void Item::setSize(sf::Vector2f size)
{
    box.setSize(size);
    text.setCharacterSize(size. y / 3);
    positionText();

}

void Item::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(MouseEvents::isHovered(box,window))
    {
        box.setFillColor(sf::Color::Blue);
        if(MouseEvents::isClicked(box,window))
        {
            this -> enableStates(SELECTED);
        }
    }
    else
    {
        this -> disableStates(SELECTED);
        box.setFillColor(defaultColor);
    }

}

const sf::FloatRect Item::getGlobalBounds()
{
    return box.getGlobalBounds();
}

const sf::RectangleShape &Item::getBox()
{
    return box;
}

void Item::setPosition(sf::Vector2f position)
{
    box.setPosition(position);
    positionText();
}


void Item::positionText()
{
    sf::FloatRect o1 = box.getGlobalBounds();
    sf::FloatRect o2 = text.getGlobalBounds();

    text.setPosition({o1.left + o1.width/2 - o2.width /2, o1.top + o1.height/2 - o2.height});
}

void Item::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box);
    target.draw(text);
}
