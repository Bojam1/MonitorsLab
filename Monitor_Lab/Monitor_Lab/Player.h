#ifndef PLAYER_H
#define PLAYER_H

#include "SFML\Graphics.hpp"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;

public:
	Player();
	void Move(int direction);
	void Draw(sf::RenderWindow &window);
};

#endif