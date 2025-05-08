#include <SFML/Graphics.hpp>
#include<cmath>

using namespace sf;

class Player
{
private:
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	// Where is the player
	

	// Of course we will need a sprite
	
	// And a texture
	// !!Watch this space!!
	

	// What is the screen resolution
	

	// What size is the current arena
	

	// How big is each tile of the arena
	

	// Which directions is the player currently moving in
	
	
	// How much health has the player got?
	
	
	// What is the maximum health the player can have
	

	// When was the player last hit
	

	// Speed in pixels per second
	


// All public methods will come next
public:
        //default constructor

	//spawn the player within the arena
	
	// Where is the player

	// Send a copy of the sprite to main

	// Where is the center of the player

	// Which angle is the player facing

	// The next four functions move the player

	// Stop the player moving in a specific direction

	// update(), we will call this method once every frame


	// Handle the player getting hit by a zombie

	// How long ago was the player last hit

	// How much health has the player currently got?

	// Give player a speed boost

	// Give the player some health

	// Increase the maximum amount of health the player can have

	
};

Player::Player()
{
	//initialize m_Speed, m_Health, m_MaxHealth

	// Associate a texture with the sprite
	// !!Watch this space!!

	// Set the origin of the sprite to the centre, 
	// for smooth rotation

}

void Player::spawn(IntRect arena, Vector2f resolution, int tileSize)
{
	// Place the player in the middle of the arena
	
	// Copy the details of the arena to the player's m_Arena
	
	// Remember how big the tiles are in this arena
	
	// Strore the resolution for future use
	
}

Time Player::getLastHitTime()
{
	
}

bool Player::hit(Time timeHit)
{

}

FloatRect Player::getPosition()
{

}

Vector2f Player::getCenter()
{

}

float Player::getRotation()
{

}

Sprite Player::getSprite()
{

}

int Player::getHealth()
{

}

void Player::moveLeft()
{

}

void Player::moveRight()
{

}

void Player::moveUp()
{

}

void Player::moveDown()
{

}

void Player::stopLeft()
{

}

void Player::stopRight()
{

}

void Player::stopUp()
{

}

void Player::stopDown()
{

}

void Player::update(float elapsedTime, Vector2i mousePosition)
{




	// Keep the player in the arena

	// Calculate the angle the player is facing

}

void Player::upgradeSpeed()
{
	// 20% speed upgrade

}

void Player::upgradeHealth()
{
	// 20% max health upgrade


}

void Player::increaseHealthLevel(int amount)
{

	// But not beyond the maximum

}

