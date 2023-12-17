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
	Enemigo enemigo3;
	Enemigo enemigo4;
	Sprite bang;
	Texture texturebang;
	Inocentes inocente1;
	Inocentes inocente2;
	Inocentes inocente3;
	Inocentes inocente4;
	Inocentes inocente5;
	Animaciones animacionenemigo1;
	Animaciones animacionenemigo2;
	Animaciones animacionenemigo3;
	Animaciones animacionenemigo4;
	;
	int posiciones[VENTANAS][COORDENADAS] = { {648,180}, {650,250},{472,387},{598,365},{689,373},{841,390},
		{468,476},{610,476},{709,476},{856,469},{289,567},{538,571},{783,570},{1030,565} };
	Clock clock;
	float randomclock = 0.1;
	Clock clockenemigomurio = Clock();
	Clock clockenemigomurio2 = Clock();
	Clock clockenemigomurio3 = Clock();
	Clock clockenemigomurio4 = Clock();
	int tiempoenemigomurio = 1.5;
	bool clockfrenado = false;
	Clock clockbang = Clock();
public:
	Juego();
	void mostrarPersonajes();
	Sprite dibujarEnemigo1();
	Sprite dibujarEnemigo2();
	Sprite dibujarEnemigo3();
	Sprite dibujarEnemigo4();
	Sprite dibujarInocente1();
	Sprite dibujarInocente2();
	Sprite dibujarInocente3();
	Sprite dibujarInocente4();
	Sprite dibujarInocente5();
	
	void enemigo1Muere();
	void enemigo2Muere();
	void enemigo3Muere();
	void enemigo4Muere();
	int getCantidadCambiosTextura();
	void enemigoAtaca();
	bool enemigo1murio = false;
	bool enemigo2murio = false;
	bool enemigo3murio = false;
	bool enemigo4murio = false;
	void setBang();
	Sprite getBang();
	bool getClockFrenado();
	
};

