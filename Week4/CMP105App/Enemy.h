#pragma once

#include "Player.h"

class Enemy : public GameObject
{
public:

	Enemy();
	~Enemy();


	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);

	sf::Texture Goomba;
	sf::Window* Window;


};

