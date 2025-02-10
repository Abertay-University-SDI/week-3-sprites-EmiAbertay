#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Enemy_2.h"
#include "Background.h"



class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	//players
	Player P;


	//Npcs 
	Enemy E;
	Enemy_2 E2;


	//Background

	Background BG_1;

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

	

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;

};