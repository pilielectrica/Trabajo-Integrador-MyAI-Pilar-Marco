#include "Castillo.h"

Sprite Castillo::getCastillo()
{
	return castillo;
}

void Castillo :: setCastillo()
{
	textureCastillo.loadFromFile("castle.png");
	castillo.setTexture(textureCastillo);
	castillo.setScale(2, 2);
}
