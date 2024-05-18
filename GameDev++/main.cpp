#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shape.h"
#include "Circle.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");
    Circle c(200, 30);

    sf::CircleShape circle(100, 100);
       
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(c);
        window.display();
    }

    return 0;


}