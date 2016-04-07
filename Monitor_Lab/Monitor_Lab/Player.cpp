#include "Player.h"

Player::Player()
{
	texture.loadFromFile("Jake_the_Dog_head.png");
	sprite.setTexture(texture);
	sprite.setPosition(300, 350);	
}

void Player::Move(int direction)
{
	if (direction == 1)//right
	{
		sprite.setPosition(sprite.getPosition().x + 10, sprite.getPosition().y);
	}
	else if (direction == 2)//left
	{
		sprite.setPosition(sprite.getPosition().x - 10, sprite.getPosition().y);
	}
}

void Player::Draw(sf::RenderWindow &window)
{
	window.draw(sprite);
}

