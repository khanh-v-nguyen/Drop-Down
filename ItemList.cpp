//
// Created by Khanh Nguyen on 3/23/23.
//

#include "ItemList.h"

ItemList::ItemList()
{

}

void ItemList::addItem(std::string title)
{
    list.emplace_back(title);
    updatePosition();
}

void ItemList::removeItem()
{
    list.pop_back();
}

void ItemList::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    for(int i = 0; i < list.size(); ++i)
    {
        list[i].eventHandler(window,event);
        //Position::bottom(list[i], list[i-1]);
    }
}

void ItemList::setSize(sf::Vector2f size)
{
    for(Item &i : list)
    {
        i.setSize(size);
    }
}

int ItemList::size()
{
    return list.size();
}

void ItemList::updatePosition() // private function for listing all items vertically
{
    if(!list.empty() || list.size() != 1)
    {
        for(int i = 1; i < list.size(); ++i)
        {
            Position::bottom(list[i-1], list[i]);
        }
    }
}

void ItemList::setPosition(sf::Vector2f position) //setting the position of first, the rest will follow
{
    if(!list.empty())
    {
        list[0].setPosition(position);
        updatePosition();
    }
}

std::vector<Item>::iterator ItemList::begin()
{
    return list.begin();
}

std::vector<Item>::iterator ItemList::end()
{
    return list.end();
}

Item &ItemList::operator[](int i)
{
    return list[i];
}

void ItemList::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for(Item i : list)
    {
        target.draw(i);
    }
}
