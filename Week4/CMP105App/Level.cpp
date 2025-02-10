#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;


	P.setInput(in);


};

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	P.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	P.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(P);


	endDraw();
}
