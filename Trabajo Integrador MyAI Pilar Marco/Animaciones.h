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
	Texture enemigo3frame1;
	Texture enemigo3frame2;
	Texture enemigo3frame3;
	Texture enemigo3frame4;
	Texture enemigo3frame5;
	Texture texturenormal3;
	Texture enemigo4frame1;
	Texture enemigo4frame2;
	Texture texturenormal4;

	Clock clockanimacion = Clock();
	float duracionframe1;
	bool dalequeva = false;
	int cantidadcambiostextura = 0;
	int cantidadcambiostextura2 = 0;
	int cantidadcambiostextura3 = 0;
	int cantidadcambiostextura4 = 0;
	
public:
	void enemigo1animado(Sprite& _enemigo1);
	void enemigo2animado(Sprite& _enemigo2);
	void enemigo3animado(Sprite& _enemigo3);
	void enemigo4animado(Sprite& _enemigo4);
	Animaciones(float duracion);
	void setTexturesAnimacion1();
	void setTexturesAnimacion2();
	void setTexturesAnimacion3();
	void setTexturesAnimacion4();
	void setTexturaEnemigo1Inicial(Sprite _enemigo1);
	void setTexturaEnemigo2Inicial(Sprite _enemigo2);
	void setTexturaEnemigo3Inicial(Sprite _enemigo3);
	void setTexturaEnemigo4Inicial(Sprite _enemigo4);
	int getCantidadCambiosTextura();
	int getCantidadCambiosTextura2();
	int getCantidadCambiosTextura3();
	int getCantidadCambiosTextura4();
	void setCantidadCambiosTextura(int cantidad);

	
	Animaciones();
};

