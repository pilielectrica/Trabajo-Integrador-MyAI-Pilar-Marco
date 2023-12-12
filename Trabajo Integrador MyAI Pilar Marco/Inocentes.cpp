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
Sprite Inocentes::getInocente4()
{
	return inocente4;
}
Sprite Inocentes::getInocente5()
{
		return inocente5;
}

void Inocentes::setInocente1()
{
	inocentetexture1.loadFromFile("inocente1.png");
	inocente1.setTexture(inocentetexture1);
	inocente1.setScale(1, 1);
	inocente1.setPosition(6000, 6000);
}
void Inocentes::setInocente2()
{
	inocentetexture2.loadFromFile("inocente2.png");
	inocente2.setTexture(inocentetexture2);
	inocente2.setScale(1, 1);
	inocente2.setPosition(6000, 6000);
}
void Inocentes::setInocente3()
{
	inocentetexture3.loadFromFile("inocente3.png");
	inocente3.setTexture(inocentetexture3);
	inocente3.setScale(1, 1);
	inocente3.setPosition(6000, 6000);
}
void Inocentes::setInocente4()
{
	inocentetexture4.loadFromFile("inocente4.png");
	inocente4.setTexture(inocentetexture4);
	inocente4.setScale(1, 1);
	inocente4.setPosition(6000, 6000);
}
void Inocentes::setInocente5()
{
	inocentetexture5.loadFromFile("inocente5.png");
	inocente5.setTexture(inocentetexture5);
	inocente5.setScale(1, 1);
	inocente5.setPosition(6000, 6000);
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
void Inocentes::setPositionInocente4(int x, int y)
{
	inocente4.setPosition(x, y);
}
void Inocentes::setPositionInocente5(int x, int y)
{
	inocente5.setPosition(x, y);
}
Inocentes::Inocentes()
{
	setInocente1();
	setInocente2();
	setInocente3();
	setInocente4();
	setInocente5();
}
