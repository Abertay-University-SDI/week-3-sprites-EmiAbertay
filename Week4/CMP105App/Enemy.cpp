#include "Enemy.h"
#include <iostream>

Enemy::Enemy() {


	setPosition(sf::Vector2f(400, 400));
	setSize(sf::Vector2f(100, 100));

	Goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&Goomba);

	setVelocity(1.f,2.f);

}

Enemy::~Enemy() {
		



}


void Enemy::setWindow(sf::RenderWindow* wnd) {

	window = wnd;

}


void Enemy::update(float dt) {


	//if going down bellow window

	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y) {

		setVelocity(0.f, -1.f); // go up
		std::cout << "Moving Up \n";

	}

	//if going down bellow window

	if (getVelocity().y < 0 && getPosition().y < 0) {

		setVelocity(0.f, 1.f); // go down
		std::cout << "Moving Down \n";
	}


	// If hitting the right side of the window
	if (getVelocity().x > 0 && getPosition().x + getSize().x > window->getSize().x) {
		setVelocity(-1.f, getVelocity().y); // Reverse X direction (bounce left)
		std::cout << "Moving Left \n";
	}

	// If hitting the left side of the window
	if (getVelocity().x < 0 && getPosition().x < 0) {
		setVelocity(1.f, getVelocity().y); // Reverse X direction (bounce right)
		std::cout << "Moving Right \n";
	}

	move(velocity);
}


