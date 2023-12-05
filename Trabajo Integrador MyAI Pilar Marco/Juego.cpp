
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"


Juego::Juego() : enemigo1()
{

}
Sprite Juego::mostrarEnemigo1()
{
	return enemigo1.getEnemigo1();
}

void Juego::mostrarPersonajes()
{
	float tiempoPasado = clock.getElapsedTime().asSeconds();
	if (tiempoPasado >= randomclock)
	{


		int k = (rand() % VENTANAS);
		int coordenadax = posicionenemigo1[k][0];
		int coordenaday = posicionenemigo1[k][1];

		enemigo1.setPositionEnemigo1(coordenadax, coordenaday);

		cout << "x esta en: " << coordenadax << "y estta en: " << endl << coordenaday << endl;
		//enemigo1.setPosition(posicionenemigo1[13][0], posicionenemigo1[13][1]);

		randomclock = (rand() % 900 + 100) / 1000.0f;
		clock.restart();
	}
}
