#include "Inocentes.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

Sprite Inocentes::getInocente1()
{
	return inocente1;
}
void Inocentes::setInocente1()
{
	inocentetexture1.loadFromFile("inocente1.png");
	inocente1.setTexture(inocentetexture1);
	inocente1.setScale(1, 1);
}
void Inocentes::setPositionInocente1(int x, int y)
{
	inocente1.setPosition(x, y);
}
Inocentes::Inocentes()
{
	setInocente1();
}
