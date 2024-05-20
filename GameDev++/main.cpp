#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vector2.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");
    Circle circle(100, 100);
    Rectangle rect(200, 100);

    Vector2 a(10, 10);
    Vector2 b(-5, 5);

    Vector2 c = Vector2::AddVector2(a, b);

    std::cout << circle.area() << std::endl;
    std::cout << rect.area() << std::endl;
    std::cout << a.Vector2Lenght(a) << std::endl;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sf::CircleShape c(100, 20);

        window.clear();
        circle.draw(window);
        rect.draw(window);
        window.display();
    }

    return 0;


}