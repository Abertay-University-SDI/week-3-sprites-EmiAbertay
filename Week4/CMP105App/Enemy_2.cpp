#include "Enemy_2.h"
#include <iostream>

Enemy_2::Enemy_2() {


	setPosition(sf::Vector2f(600, 600));
	setSize(sf::Vector2f(100, 100));

	Beach_Ball.loadFromFile("gfx/Beach_Ball.png");
	setTexture(&Beach_Ball);

	setVelocity(0.f, 2.f);

}

Enemy_2::~Enemy_2() {




}


void Enemy_2::setWindow(sf::RenderWindow* wnd) {

	window = wnd;

}


void Enemy_2::update(float dt) {


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

	move(velocity);
}



