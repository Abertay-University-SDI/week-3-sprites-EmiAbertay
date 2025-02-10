#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;


	P.setInput(in);	

	E.setWindow(hwnd);
	E2.setWindow(hwnd);

	BG_1.setWindow(hwnd);
	BG_1.setInput(in);

	C.setInput(in);


	window->setMouseCursorVisible(false);
}

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

	BG_1.handleInput(dt);

	C.handleInput(dt);
	
}

// Update game objects
void Level::update(float dt)
{
	P.update(dt);
	E.update(dt);
	E2.update(dt);

	C.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(BG_1);
	window->draw(testSprite);

	window->draw(C);
	window->draw(P);
	window->draw(E);
	window->draw(E2);



	endDraw();
}
