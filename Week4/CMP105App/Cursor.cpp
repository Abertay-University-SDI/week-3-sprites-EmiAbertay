#include "Cursor.h"
Cursor::Cursor() {
	cursorTexture.loadFromFile("gfx/icon.png");
	setTexture(&cursorTexture);
	setSize(sf::Vector2f(48, 48));
	

}

Cursor::~Cursor() {


}

void Cursor::handleInput(float dt) {

	float MouseX = input->getMouseX();
	float MouseY = input->getMouseY();

	setPosition(MouseX-24, MouseY-24);

}

void Cursor::update(float dt) {

	handleInput(dt);
}

