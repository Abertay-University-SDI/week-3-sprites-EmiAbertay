#pragma once

#include "Player.h"

class Enemy_2 : public GameObject
{
public:

	Enemy_2();
	~Enemy_2();


	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);

	sf::Texture Beach_Ball;
	sf::Window* Window;
};
