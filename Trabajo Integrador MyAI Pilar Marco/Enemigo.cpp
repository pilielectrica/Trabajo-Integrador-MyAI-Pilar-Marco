#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemigo.h"


void Enemigo::_getTexture()
{
	enemigo1.getTexture();
}

Sprite& Enemigo::getEnemigo1()
{ 
	return enemigo1;
}

void Enemigo::setEnemigo1()
{
	enemigotexture1.loadFromFile("Enemigo1.png");
	
	enemigo1.setTexture(enemigotexture1);
	enemigo1.setScale(0.2, 0.2);
}

void Enemigo::setPositionEnemigo1(int x, int y)
{
	enemigo1.setPosition(x, y);
}
void Enemigo::setPositionEnemigo2(int x, int y)
{
	enemigo2.setPosition(x, y);
}
Sprite Enemigo::getEnemigo2()
{
	return enemigo2;
}
void Enemigo::setEnemigo2()
{
	enemigotexture2.loadFromFile("Enemigo3.png");
	enemigo2.setTexture(enemigotexture2);
	enemigo2.setScale(0.5, 0.5);
}
bool Enemigo::texturaboolenemigo()
{
	if (enemigo1.getTexture() == &enemigotexture1) { return true; }
}

Enemigo::Enemigo()
{
	setEnemigo1();
	setEnemigo2();
}
/*void Enemigo::enemigo1aparecer()
{
    float tiempoPasado = clock.getElapsedTime().asSeconds();
    if (tiempoPasado >= randomclock) 
	{

			
				int k = (rand() % VENTANAS);
				int coordenadax = posicionenemigo1[k][0];
				int coordenaday = posicionenemigo1[k][1];

				enemigo1.setPosition(coordenadax, coordenaday);
				
				cout << "x esta en: " << coordenadax << "y estta en: "<< endl << coordenaday << endl;
		//enemigo1.setPosition(posicionenemigo1[13][0], posicionenemigo1[13][1]);
		
        randomclock = (rand() % 900 + 100) / 1000.0f;
        clock.restart();
    }
}*/