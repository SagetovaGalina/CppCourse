#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({650, 300}), "name");

    window.clear();

    sf::CircleShape shape1(40);
    shape1.setPosition({40, 40});
    shape1.setFillColor(sf::Color(0, 0, 0));
    shape1.setOutlineThickness(20);
    shape1.setOutlineColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape1);

    sf::CircleShape shape2(50);
    shape2.setPosition({30, 140});
    shape2.setFillColor(sf::Color(0, 0, 0));
    shape2.setOutlineThickness(20);
    shape2.setOutlineColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({40, 70});
    shape3.setPosition(100, 50);
    shape3.setFillColor(sf::Color(0, 0, 0));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({50, 100});
    shape4.setPosition(0, 140);
    shape4.setFillColor(sf::Color(0, 0, 0));
    window.draw(shape4);

    sf::CircleShape shape5(100);
    shape5.setPosition(170, 40);
    shape5.setFillColor(sf::Color(0, 0, 0));
    shape5.setOutlineThickness(20);
    shape5.setOutlineColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({100, 80});
    shape6.setPosition(320, 70);
    shape6.setFillColor(sf::Color(0, 0, 0));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({80, 40});
    shape7.setPosition(320, 140);
    shape7.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({250, 20});
    shape8.setRotation(65);
    shape8.setPosition(495, 7);
    shape8.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({260, 20});
    shape9.setRotation(110);
    shape9.setPosition(490, 7);
    shape9.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({120, 20});
    shape10.setPosition(425, 130);
    shape10.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape10);

    window.display();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }
}