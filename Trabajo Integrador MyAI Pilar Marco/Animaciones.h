#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#pragma once
class Animaciones
{
private:
	Texture enemigo1frame1;
	Texture enemigo1frame2;
	Texture texturanormal;
	Clock clockanimacion = Clock();
	float duracionframe1 = 1;
public:
	void enemigo1animado(Sprite& _enemigo1);
	Animaciones(float duracion);
	void setTexturesAnimacion();
	void setTexturaEnemigo1Inicial(Sprite _enemigo1);
	Animaciones();
};

