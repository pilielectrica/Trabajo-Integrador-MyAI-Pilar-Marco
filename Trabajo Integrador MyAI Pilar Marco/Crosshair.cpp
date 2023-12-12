#include "Crosshair.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

void Crosshair::seteartexturacrosshair()
{
	crosshairtexture.loadFromFile("crosshair.png");
	crosshair.setTexture(crosshairtexture);
	crosshair.setScale(0.2, 0.2);
}
void Crosshair::actualizarPosicionCursor(int x, int y)
{
	crosshair.setPosition(x, y);
	
}
Sprite Crosshair::mostrarsprite() {
	return crosshair;
}
