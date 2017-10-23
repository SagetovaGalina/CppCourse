#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "House");
    window.clear();

    sf::RectangleShape shape0;
    shape0.setSize({800, 600});
    shape0.setPosition(0, 0);
    shape0.setFillColor(sf::Color(255, 255, 255));
    window.draw(shape0);

    sf::RectangleShape shape1;
    shape1.setSize({400, 300});
    shape1.setPosition(200, 300);
    shape1.setFillColor(sf::Color(139, 69, 19));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({100, 200});
    shape2.setPosition(250, 400);
    shape2.setFillColor(sf::Color(128, 128, 128));
    window.draw(shape2);

    sf::ConvexShape triangle;
    triangle.setFillColor(sf::Color(165, 42, 42));
    triangle.setPosition({10, 10});
    triangle.setPointCount(4);

    triangle.setPoint(0, {300, 100});
    triangle.setPoint(1, {500, 100});
    triangle.setPoint(2, {700, 300});
    triangle.setPoint(3, {100, 300});
    window.draw(triangle);

    sf::RectangleShape shape3;
    shape3.setSize({50, 100});
    shape3.setPosition(440, 60);
    shape3.setFillColor(sf::Color(255, 69, 0));
    window.draw(shape3);

    sf::CircleShape shape5(20);
    shape5.setPosition({425, 15});
    shape5.setFillColor(sf::Color(210, 180, 140));
    window.draw(shape5);

    sf::CircleShape shape6(20);
    shape6.setPosition({435, 10});
    shape6.setFillColor(sf::Color(210, 180, 140));
    window.draw(shape6);

    sf::CircleShape shape7(10);
    shape7.setPosition({444, 3});
    shape7.setFillColor(sf::Color(210, 180, 140));
    window.draw(shape7);

    sf::CircleShape shape8(15);
    shape8.setPosition({457, 3});
    shape8.setFillColor(sf::Color(210, 180, 140));
    window.draw(shape8);

    sf::RectangleShape shape4;
    shape4.setSize({80, 20});
    shape4.setPosition(425, 50);
    shape4.setFillColor(sf::Color(255, 69, 0));
    window.draw(shape4);

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