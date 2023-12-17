
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"


Juego::Juego() : enemigo1(),enemigo2(),inocente1(),inocente4(),inocente5(),enemigo3(),enemigo4(), animacionenemigo1(0.5), animacionenemigo2(0.5), animacionenemigo3(0.5), animacionenemigo4(0.5)
{
	//setPosicionesIniciales();
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
Sprite Juego::dibujarInocente4()
{
	return inocente4.getInocente4();

}
Sprite Juego::dibujarInocente5()
{
	return inocente5.getInocente5();

}

Sprite Juego::dibujarEnemigo2()
{
	return enemigo2.getEnemigo2();

}
Sprite Juego::dibujarEnemigo3()
{
	return enemigo3.getEnemigo3();

}
Sprite Juego::dibujarEnemigo4()
{
	return enemigo4.getEnemigo4();

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
		int o = (rand() % VENTANAS);
		int p = (rand() % VENTANAS);
		int q = (rand() % VENTANAS);
		int r = (rand() % VENTANAS);
		
		bool superposicion = false;
		bool superposicion2 = false;
		int coordenadax = 0;
		int coordenaday = 0;


		float tiempoPasado = clock.getElapsedTime().asSeconds();


		if ((i == k || i == l || k == l || i == m || k == m || l == m || n == m || n == l || n == k || n == i || o == i || o == k || o == l || o == m || o == n || o == p || p == i || p == k || p == l || p == m || p == n || q == i || q == k || q == l || q == m || q == n || q == o || q == p || r == i || r == k || r == l || r == m || r == n || r == o || r == p)) {
			superposicion = true;

		}

		if (tiempoPasado >= randomclock) {
			if (!superposicion) {


				coordenadax = posiciones[k][0];
				coordenaday = posiciones[k][1];

				int numeroazar = rand() % 10 + 1;
				if (numeroazar == 2 || numeroazar == 4 || numeroazar == 8 && clockfrenado == true) {

					enemigo1.setPositionEnemigo1(7000, 7000);
				}
				else
				{
					enemigo1.setPositionEnemigo1(coordenadax, coordenaday);
				}
				clock.restart();

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


				if (numeroazar == 1 || numeroazar == 7 || numeroazar == 9) { enemigo2.setPositionEnemigo2(7000, 7000); }
				else
				{
					enemigo2.setPositionEnemigo2(coordenadax, coordenaday);
					
					
				}
				clock.restart();

				coordenadax = posiciones[o][0];
				coordenaday = posiciones[o][1];


				if (enemigo1murio == true && enemigo2murio == true && (numeroazar == 1 || numeroazar == 4))
				{
					enemigo3.setPositionEnemigo3(coordenadax, coordenaday);
				}
				else { enemigo3.setPositionEnemigo3(8000, 6000); }
				clock.restart();

				coordenadax = posiciones[p][0];
				coordenaday = posiciones[p][1];


				if (enemigo1murio == true && enemigo2murio == true && (numeroazar == 2 || numeroazar == 3))
				{
					enemigo4.setPositionEnemigo4(coordenadax, coordenaday);
				}
				else { enemigo4.setPositionEnemigo4(8000, 6000); }
				clock.restart();

				coordenadax = posiciones[q][0];
				coordenaday = posiciones[q][1];
				


				inocente4.setPositionInocente4(coordenadax, coordenaday);
				coordenadax = posiciones[r][0];
				coordenaday = posiciones[r][1];
	

				inocente5.setPositionInocente5(coordenadax, coordenaday);
				randomclock = (rand() % 900 + 200) / 1000.0f;
			clock.restart();

			}
			



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
	enemigo1.setPositionEnemigo1(7000, 8000);
	enemigo1murio = true;
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
		enemigo2murio = true;
	}
	clockenemigomurio2.restart();
}
void Juego::enemigo3Muere()
{
	animacionenemigo3.setTexturaEnemigo3Inicial(enemigo3.getEnemigo3());

	if (clockenemigomurio3.getElapsedTime().asSeconds() <= tiempoenemigomurio && animacionenemigo3.getCantidadCambiosTextura3() <= 3)
	{
		clockfrenado = true;
		animacionenemigo3.enemigo3animado(enemigo3.getEnemigo3());
	}
	else if (animacionenemigo3.getCantidadCambiosTextura3() >= 3)
	{
		animacionenemigo3.setTexturaEnemigo3Inicial(enemigo3.getEnemigo3());
		clockfrenado = false;
		enemigo3.setPositionEnemigo3(7000, 8000);
	}
	clockenemigomurio3.restart();
}
void Juego::enemigo4Muere()
{
	animacionenemigo4.setTexturaEnemigo4Inicial(enemigo4.getEnemigo4());

	if (clockenemigomurio4.getElapsedTime().asSeconds() <= tiempoenemigomurio && animacionenemigo4.getCantidadCambiosTextura4() <= 3)
	{
		clockfrenado = true;
		animacionenemigo4.enemigo4animado(enemigo4.getEnemigo4());
	}
	else if (animacionenemigo4.getCantidadCambiosTextura4() >= 3)
	{
		animacionenemigo4.setTexturaEnemigo4Inicial(enemigo4.getEnemigo4());
		clockfrenado = false;
		enemigo4.setPositionEnemigo4(7000, 8000);
	}
	clockenemigomurio4.restart();
}
