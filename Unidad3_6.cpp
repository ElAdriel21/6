#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "6");

    sf::Texture texture1, texture2, texture3, texture4;

    texture1.loadFromFile("cuad_red.png");
    sf::Sprite sprite1(texture1);

    texture2.loadFromFile("cuad_yellow.png");
    sf::Sprite sprite2(texture2);

    texture3.loadFromFile("cuad_blue.png");
    sf::Sprite sprite3(texture3);

    texture4.loadFromFile("cuad_grey.png");
    sf::Sprite sprite4(texture4);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        sprite1.setPosition(0,0);
        window.draw(sprite1);

        sprite2.setPosition(256, 0);
        sprite2.setScale(0.5, 0.5);
        window.draw(sprite2);

        sprite3.setPosition(0, 256);
        sprite3.setScale(2, 2);
        window.draw(sprite3);

        sprite4.setPosition(256, 256);
        sprite4.setScale(4, 4);
        window.draw(sprite4);

        window.display();
    }
}