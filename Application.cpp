//
// Created by Khanh Nguyen on 3/23/23.
//

#include "Application.h"

Application::Application() : window({1080,720,32}, "Drop Down Menu")
{

}

void Application::runApp()
{
    sf::Event event;

    DropDownMenu drop;
    drop.push_back("About");
    drop.push_back("Projects");
    drop.push_back("Pictures");
    drop.setPosition({100,100});

    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
            {
                window.close();
            }
            drop.eventHandler(window,event);
        }
        window.clear();
        window.draw(drop);
        window.display();
    }
}
