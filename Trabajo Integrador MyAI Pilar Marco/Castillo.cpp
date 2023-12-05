#include "Castillo.h"

Sprite Castillo::getCastillo()
{
	return castillo;
}
Sprite Castillo::getFondo()
{
	return fondo;
}


void Castillo :: setCastillo()
{
	textureCastillo.loadFromFile("castle.png");
	castillo.setTexture(textureCastillo);
	castillo.setScale(1.7, 1.7);
	castillo.setPosition(250, 0);
	textureFondo.loadFromFile("background.png");
	fondo.setTexture(textureFondo);
	fondo.setScale(3.7, 3.5);

}
