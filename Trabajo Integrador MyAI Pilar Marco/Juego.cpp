
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"


Juego::Juego() : enemigo1(),inocente1()
{

}
Sprite Juego::dibujarEnemigo1()
{
	return enemigo1.getEnemigo1();
	
}
Sprite Juego::dibujarInocente1()
{
	return inocente1.getInocente1();

}


void Juego::mostrarPersonajes()
{
	float tiempoPasado = clock.getElapsedTime().asSeconds();
	if (tiempoPasado >= randomclock)
	{
		int i = (rand() % VENTANAS);
		int k = (rand() % VENTANAS);
		bool superposicion = false;

		if (i == k) { superposicion = true; }
		
		if (!superposicion) {
			
		int coordenadax = posiciones[k][0];
		int coordenaday = posiciones[k][1];

		enemigo1.setPositionEnemigo1(coordenadax, coordenaday);

		
		coordenadax = posiciones[i][0];
		coordenaday = posiciones[i][1];

		inocente1.setPositionInocente1(coordenadax, coordenaday);

		}
		

		//cout << "x esta en: " << coordenadax << "y estta en: " << endl << coordenaday << endl;
		//enemigo1.setPosition(posicionenemigo1[13][0], posicionenemigo1[13][1]);

		randomclock = (rand() % 900 + 100) / 1000.0f;
		clock.restart();
	}
}
