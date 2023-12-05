#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "enemigo.h"
#define VENTANAS 14
#define COORDENADAS 2
using namespace sf;
using namespace std;

#pragma once
class Juego
{
private:
	Enemigo enemigo1;
	int posicionenemigo1[VENTANAS][COORDENADAS] = { {648,180}, {650,250},{472,387},{598,365},{689,373},{841,390},
		{468,476},{610,476},{709,476},{856,465},{289,567},{538,571},{783,570},{1030,565} };
	Clock clock;
	float randomclock = 0.1f;
public:
	Juego();
	void mostrarPersonajes();
	Sprite mostrarEnemigo1();
};

