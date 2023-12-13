#pragma once
#include "Crosshair.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
class Textos
{ private:
	Font font;
	Text mensajepuntos;
	Text mensajevidas;

public:
	void setFont();
	void setMensajePuntos();
	void setMensajeVidas();
	Text getMensajeGanaste();
	Text getMensajePerdiste();
	Text getMensajePuntos(int s);
	Text getMensajeVidas(int v);
	Textos();
	
	
};

