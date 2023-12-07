#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "enemigo.h"
#include "inocentes.h"
#include "animaciones.h"
#define VENTANAS 14
#define COORDENADAS 2
using namespace sf;
using namespace std;

#pragma once
class Juego
{
private:
	Enemigo enemigo1;
	Enemigo enemigo2;
	Inocentes inocente1;
	Inocentes inocente2;
	Inocentes inocente3;
	Animaciones animacionenemigo1;
;
	int posiciones[VENTANAS][COORDENADAS] = { {648,180}, {650,250},{472,387},{598,365},{689,373},{841,390},
		{468,476},{610,476},{709,476},{856,469},{289,567},{538,571},{783,570},{1030,565} };
	Clock clock;
	float randomclock = 0.4;
	Clock clockenemigomurio = Clock();
	int tiempoenemigomurio = 3;
	bool clockfrenado = false;
	bool enemigomuere = false;

public:
	Juego();
	void mostrarPersonajes();
	Sprite dibujarEnemigo1();
	Sprite dibujarEnemigo2();
	Sprite dibujarInocente1();
	Sprite dibujarInocente2();
	Sprite dibujarInocente3();
	void enemigoMuere();
	void frenarClock();
	
};

