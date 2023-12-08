
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"


Juego::Juego() : enemigo1(),enemigo2(),inocente1(), animacionenemigo1(0.5), animacionenemigo2(0.5)
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
Sprite Juego::dibujarInocente2()
{
	return inocente2.getInocente2();

}
Sprite Juego::dibujarInocente3()
{
	return inocente3.getInocente3();

}

Sprite Juego::dibujarEnemigo2()
{
	return enemigo2.getEnemigo2();

}
void Juego::mostrarPersonajes()
{
	if (clockfrenado == false)
	{
			int i = (rand() % VENTANAS);
			int k = (rand() % VENTANAS);
			int l = (rand() % VENTANAS);
			int m = (rand() % VENTANAS);
			int n = (rand() % VENTANAS);
			bool superposicion = false;

			float tiempoPasado = clock.getElapsedTime().asSeconds();




			if (i == k || i == l || k == l || i == m || k == m || l == m || n == m || n == l || n == k || n == i) { superposicion = true; }
			if (tiempoPasado >= randomclock) {
				if (!superposicion) {


					int coordenadax = posiciones[k][0];
					int coordenaday = posiciones[k][1];

					int numeroazar = rand() % 10 + 1;
					if (numeroazar == 2 || numeroazar == 4 || numeroazar == 6 || numeroazar == 8 && clockfrenado == true) {

						enemigo1.setPositionEnemigo1(7000, 7000);
					}
					else
					{
						enemigo1.setPositionEnemigo1(coordenadax, coordenaday);
					}


					coordenadax = posiciones[i][0];
					coordenaday = posiciones[i][1];

					inocente1.setPositionInocente1(coordenadax, coordenaday);

					coordenadax = posiciones[l][0];
					coordenaday = posiciones[l][1];

					inocente2.setPositionInocente2(coordenadax, coordenaday);


					coordenadax = posiciones[m][0];
					coordenaday = posiciones[m][1];

					inocente3.setPositionInocente3(coordenadax, coordenaday);

					coordenadax = posiciones[n][0];
					coordenaday = posiciones[n][1];


					if (numeroazar == 1 || numeroazar == 4 || numeroazar == 7 || numeroazar == 8) { enemigo2.setPositionEnemigo2(7000, 7000); }
					else
					{
						enemigo2.setPositionEnemigo2(coordenadax, coordenaday);
					}
					clock.restart();

				}
				randomclock = (rand() % 900 + 100) / 1000.0f;
				clock.restart();


			}
		}

	
}

void Juego::enemigo1Muere()
{
animacionenemigo1.setTexturaEnemigo1Inicial(enemigo1.getEnemigo1());

if (clockenemigomurio.getElapsedTime().asSeconds() <= tiempoenemigomurio && animacionenemigo1.getCantidadCambiosTextura() <= 3)
{ 	
    clockfrenado = true;          
	animacionenemigo1.enemigo1animado(enemigo1.getEnemigo1());
}	
else if (animacionenemigo1.getCantidadCambiosTextura() >= 3)
{   	
	animacionenemigo1.setTexturaEnemigo1Inicial(enemigo1.getEnemigo1());
	clockfrenado = false;	
	//animacionenemigo1.setCantidadCambiosTextura(0);
	enemigo1.setPositionEnemigo1(7000, 8000);
}
clockenemigomurio.restart();	
}
void Juego::enemigo2Muere()
{
	animacionenemigo2.setTexturaEnemigo2Inicial(enemigo2.getEnemigo2());

	if (clockenemigomurio2.getElapsedTime().asSeconds() <= tiempoenemigomurio && animacionenemigo2.getCantidadCambiosTextura2() <= 3)
	{
		clockfrenado = true;
		animacionenemigo2.enemigo2animado(enemigo2.getEnemigo2());
	}
	else if (animacionenemigo2.getCantidadCambiosTextura2() >= 3)
	{
		animacionenemigo2.setTexturaEnemigo2Inicial(enemigo2.getEnemigo2());
		clockfrenado = false;
		enemigo2.setPositionEnemigo2(7000, 8000);
	}
	clockenemigomurio2.restart();
}
bool Juego::getClockFrenado()
{
	return clockfrenado;
}
bool Juego::getEndAnimacion()
{
	return endanimacion;
}
