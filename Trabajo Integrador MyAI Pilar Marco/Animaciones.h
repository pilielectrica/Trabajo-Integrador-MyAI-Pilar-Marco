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
	Clock clockanimacion;
	float duracionframe = 0.5;
	float duracionanimacion = 1;
public:
	void enemigo1animado(Sprite _enemigo1);
	Animaciones(Sprite _enemigo1_);
};

