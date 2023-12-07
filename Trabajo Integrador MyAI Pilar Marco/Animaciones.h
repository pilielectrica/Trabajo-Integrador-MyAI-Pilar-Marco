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
	Clock clockanimacion;
	float duracionframe1 = 0.5;
	float duracionframe2 = 1;
public:
	void enemigo1animado(Sprite _enemigo1);
	Animaciones(Sprite _enemigo1_);
	void setTexturesAnimacion();
	Animaciones();
};

