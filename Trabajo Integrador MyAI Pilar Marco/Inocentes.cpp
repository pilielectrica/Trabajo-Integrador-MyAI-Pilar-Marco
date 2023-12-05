#include "Inocentes.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

Sprite Inocentes::getInocente1()
{
	return inocente1;
}
Sprite Inocentes::getInocente2()
{
	return inocente2;
}
Sprite Inocentes::getInocente3()
{
	return inocente3;
}
void Inocentes::setInocente1()
{
	inocentetexture1.loadFromFile("inocente1.png");
	inocente1.setTexture(inocentetexture1);
	inocente1.setScale(1, 1);
}
void Inocentes::setInocente2()
{
	inocentetexture2.loadFromFile("inocente2.png");
	inocente2.setTexture(inocentetexture2);
	inocente2.setScale(1, 1);
}
void Inocentes::setInocente3()
{
	inocentetexture3.loadFromFile("inocente3.png");
	inocente3.setTexture(inocentetexture3);
	inocente3.setScale(1, 1);
}
void Inocentes::setPositionInocente1(int x, int y)
{
	inocente1.setPosition(x, y);
}
void Inocentes::setPositionInocente2(int x, int y)
{
	inocente2.setPosition(x, y);
}
void Inocentes::setPositionInocente3(int x, int y)
{
	inocente3.setPosition(x, y);
}
Inocentes::Inocentes()
{
	setInocente1();
	setInocente2();
	setInocente3();
}
