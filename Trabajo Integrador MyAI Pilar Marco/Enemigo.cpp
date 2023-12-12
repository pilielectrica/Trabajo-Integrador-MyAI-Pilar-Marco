#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemigo.h"



Sprite& Enemigo::getEnemigo1()
{ 
	return enemigo1;
}

void Enemigo::setEnemigo1()
{
	enemigotexture1.loadFromFile("Enemigo1.png");
	
	enemigo1.setTexture(enemigotexture1);
	enemigo1.setScale(0.2, 0.2);
	enemigo1.setPosition(6000, 6000);
}

void Enemigo::setPositionEnemigo1(int x, int y)
{
	enemigo1.setPosition(x, y);
}
void Enemigo::setPositionEnemigo2(int x, int y)
{
	enemigo2.setPosition(x, y);
}
Sprite& Enemigo::getEnemigo2()
{
	return enemigo2;
}
void Enemigo::setEnemigo2()
{
	enemigotexture2.loadFromFile("Enemigo2.png");
	enemigo2.setTexture(enemigotexture2);
	enemigo2.setScale(0.5, 0.5);
	enemigo2.setPosition(6000, 6000);
}
Sprite& Enemigo::getEnemigo3()
{
	return enemigo3;
}

void Enemigo::setEnemigo3()
{
	enemigotexture3.loadFromFile("Enemigo3.png");

	enemigo3.setTexture(enemigotexture3);
	enemigo3.setScale(0.5, 0.5);
	enemigo3.setPosition(6000, 6000);
}

void Enemigo::setPositionEnemigo3(int x, int y)
{
	enemigo3.setPosition(x, y);
}
Sprite& Enemigo::getEnemigo4()
{
	return enemigo4;
}

void Enemigo::setEnemigo4()
{
	enemigotexture4.loadFromFile("Enemigo4.png");

	enemigo4.setTexture(enemigotexture4);
	enemigo4.setScale(0.5, 0.5);
	enemigo4.setPosition(6000, 6000);
}

void Enemigo::setPositionEnemigo4(int x, int y)
{
	enemigo4.setPosition(x, y);
}
Enemigo::Enemigo()
{
	setEnemigo1();
	setEnemigo2();
	setEnemigo3();
	setEnemigo4();
}
