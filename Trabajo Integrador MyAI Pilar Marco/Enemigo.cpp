#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemigo.h"


Sprite Enemigo::getEnemigo1()
{ 
	return enemigo1;
}
void Enemigo::setEnemigo1()
{
	enemigotexture1.loadFromFile("Enemigo1.png");
	enemigo1.setTexture(enemigotexture1);
	enemigo1.setScale(0.7, 0.7);
}

void Enemigo::enemigo1aparecer()
{

}