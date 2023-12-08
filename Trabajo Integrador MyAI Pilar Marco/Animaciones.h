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
	Texture enemigo2frame1;
	Texture enemigo2frame2;
	Texture texturenormal2;
	Clock clockanimacion = Clock();
	float duracionframe1;
	bool dalequeva = false;
	int cantidadcambiostextura = 0;
	int cantidadcambiostextura2 = 0;
	
public:
	void enemigo1animado(Sprite& _enemigo1);
	void enemigo2animado(Sprite& _enemigo2);
	Animaciones(float duracion);
	void setTexturesAnimacion1();
	void setTexturesAnimacion2();
	void setTexturaEnemigo1Inicial(Sprite _enemigo1);
	void setTexturaEnemigo2Inicial(Sprite _enemigo2);
	int getCantidadCambiosTextura();
	int getCantidadCambiosTextura2();
	void setCantidadCambiosTextura(int cantidad);

	
	Animaciones();
};

