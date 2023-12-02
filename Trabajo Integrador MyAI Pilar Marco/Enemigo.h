#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#define VENTANAS 14;
#define COORDENADAS 2;
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
	//int posicionenemigo1[VENTANAS][COORDENADAS] = //completar con las posiciones de las ventanitas y copiar del tp de las cartas la logica{}, {};
public:
	void setEnemigo1();
	Sprite getEnemigo1();
	void enemigo1aparecer();
	void enemigo2aparecer();
	void enemigo3aparecer();


};

