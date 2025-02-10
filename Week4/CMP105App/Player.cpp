#include "Player.h"

Player::Player() {


	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));

	Mushroom.loadFromFile("gtx/Mushroom.png");
	setTexture(&Mushroom);

	setVelocity(0.f, 0.f);

}


Player::~Player () {




}



void Player::handleInput(float dt) {

	if(input->isKeyDown(sf::Keyboard::A)){

		// Go Left

		setVelocity(getVelocity().x - 0.10, getVelocity().y);
		 
	}


	if (input->isKeyDown(sf::Keyboard::D)) {

		// Go Right

		setVelocity(getVelocity().x + 0.10, getVelocity().y);

	}


	if (input->isKeyDown(sf::Keyboard::W)) {

		// Go Up

		setVelocity(getVelocity().x, getVelocity().y + 0.10);

	}


	if (input->isKeyDown(sf::Keyboard::S)) {

		// Go Down

		setVelocity(getVelocity().x, getVelocity().y - 0.10);

	}





}

void Player::update(float dt) {

	move(velocity);

}