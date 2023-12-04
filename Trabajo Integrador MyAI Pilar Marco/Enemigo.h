#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#define VENTANAS 14
#define COORDENADAS 2
using namespace sf;
using namespace std;
#pragma once
class Enemigo
{   
private:
	Sprite enemigo1;
	Sprite enemigo2;
	Sprite enemigo3;
	Texture enemigotexture1;
	Texture enemigotexture2;
	Texture enemigotexture3;
	Clock clock;
	float randomclock = 0.1f;
	int posicionenemigo1[VENTANAS][COORDENADAS] = { {648,180}, {650,250},{472,387},{598,365},{689,373},{845,490},
		{468,476},{610,476},{709,476},{856,467},{289,567},{538,571},{783,570},{1030,565} };//completar con las posiciones de las ventanitas y copiar del tp de las cartas la logica{}, {};
public:
	void setEnemigo1();
	Sprite getEnemigo1();
	void enemigo1aparecer();
	void enemigo2aparecer();
	void enemigo3aparecer();


};

