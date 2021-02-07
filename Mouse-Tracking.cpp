// Mouse-Tracking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //update shit
        sf::Vector2i mouse = sf::Mouse::getPosition(window);
        sf::Vector2f position = sf::Vector2f(-mouse.x, -mouse.y);
        shape.setOrigin(position);
        

        window.draw(shape);



        window.display();
    }

    return 0;
}