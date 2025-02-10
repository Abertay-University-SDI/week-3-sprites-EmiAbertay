#include "Background.h"
Background::Background() {

	BG.loadFromFile("gfx/Level1_1.png");
	setTexture(&BG);

	setSize(sf::Vector2f (11038, 675));
}

void Background::setWindow(sf::RenderWindow* wnd) {

	window = wnd;

}

void Background::handleInput(float dt) {

	sf::View V = window->getView();

	if (input->isKeyDown(sf::Keyboard::Space)) {

		V.setCenter(V.getCenter().x + 5, V.getCenter().y);


	}

	window->setView(V);

}