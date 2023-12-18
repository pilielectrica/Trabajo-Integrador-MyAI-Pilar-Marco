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
	void setInstrucciones();
	Text getMensajeGanaste();
	Text getTitulo();	
	Text getMensajePerdiste();
	Text getMensajePuntos(int s);
	Text getMensajeVidas(int v);
	Text getInstruccion1();
	Text getInstruccion2();
	Text getInstruccion3();
	Text getInstruccion4();
	Text getCreditos();
	Text getCreditos2();

	Textos();
	
	
};

