#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
///Punto de entrada a la aplicación///
using namespace std;
class Crosshair
{
private:
	Sprite crosshair;
	Texture crosshairtexture;



public:
	void seteartexturacrosshair();
	void actualizarPosicionCursor(int x, int y);
	Sprite mostrarsprite();

};


