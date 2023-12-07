
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"


Juego::Juego() : enemigo1(),inocente1(), animacionenemigo1(enemigo1.getEnemigo1())
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
			randomclock = (rand() % 400 + 100) / 1000.0f;
			clock.restart();



			//cout << "x esta en: " << coordenadax << "y estta en: " << endl << coordenaday << endl;
			//enemigo1.setPosition(posicionenemigo1[13][0], posicionenemigo1[13][1]);


		}
	}/*if (clockfrenado == true)
		    {
			/*randomclock = 5;
			if (tiempoPasado >= randomclock) { 
			randomclock = (rand() % 400 + 100) / 1000.0f; clock.restart(); clockfrenado = false;}
			

		    }
	*/
	
	}
void Juego::frenarClock()
{;
	randomclock = 1;
	clockfrenado = true;
}
void Juego::enemigoMuere()
{
	clockfrenado = true;
	animacionenemigo1.setTexturaEnemigo1Inicial(enemigo1.getEnemigo1());
	animacionenemigo1.enemigo1animado(enemigo1.getEnemigo1());
	//clockfrenado = false;
}

