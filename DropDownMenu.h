//
// Created by Khanh Nguyen on 3/23/23.
//

#ifndef DROPDOWN_DROPDOWNMENU_H
#define DROPDOWN_DROPDOWNMENU_H
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"
#include "GUIComponent.h"
#include "DropDownSnapshot.h"
#include "History.h"

#include <vector>
#include <SFML/Graphics.hpp>
class DropDownMenu : public GUIComponent
{
public:
    DropDownMenu();

    void eventHandler(sf::RenderWindow &window, sf::Event event);
    void push_back(std::string title);
    void pop_back();
    void setPosition(sf::Vector2f position);
    void setSize(sf::Vector2f size);
    sf::FloatRect getGlobalBounds();

private:
    ItemList menuItems;
    InputBox inputBox;

    void init();
    void setUpPosition();

    void update();

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    Snapshot *getSnapshot() override;

    void applySnapshot(Snapshot *snapshot) override;
};


#endif //DROPDOWN_DROPDOWNMENU_H
