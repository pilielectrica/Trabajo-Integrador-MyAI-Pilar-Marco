#include "Castillo.h"

Sprite Castillo::getCastillo()
{
	return castillo;
}

void Castillo :: setCastillo()
{
	textureCastillo.loadFromFile("castle.png");
	castillo.setTexture(textureCastillo);
	castillo.setScale(1.7, 1.7);
	castillo.setPosition(250, 0);
}
