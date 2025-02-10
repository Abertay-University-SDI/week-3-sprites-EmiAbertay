#include "Player.h"
#include <iostream>


Player::Player() {

	setPosition(sf::Vector2f(100, 00));
	setSize(sf::Vector2f(100, 100));

	Mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&Mushroom);

	setSize(sf::Vector2f(100, 100));

	setVelocity(0.f, 0.f);

}


Player::~Player() {




}

void Player::handleInput(float dt) {

	if (input->isKeyDown(sf::Keyboard::A)) {

		// Go Left
		setVelocity(getVelocity().x - 0.0001, getVelocity().y);

	}

	if (input->isKeyDown(sf::Keyboard::D)) {

		// Go Right 
		setVelocity(getVelocity().x + 0.0001, getVelocity().y);

	}

	if (input->isKeyDown(sf::Keyboard::W)) {

		// Go Up
		setVelocity(getVelocity().x , getVelocity().y - 0.0001);

	}


	if (input->isKeyDown(sf::Keyboard::S)) {

		// Go Down
		setVelocity(getVelocity().x , getVelocity().y + 0.0001);

	}

}

void Player::update(float dt) {



	move(velocity);


}