#include "Textos.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>


Text Textos::getMensajeGanaste()
{
	Text ganaste("¡GANASTE!", font, 50);
	ganaste.setPosition(600, 300);
	return ganaste;
}
Text Textos::getMensajePerdiste()
{
	Text perdiste("PERDISTE", font, 50);
	perdiste.setPosition(600, 300);
	return perdiste;
}
void Textos::setFont()
{
	font.loadFromFile("SIXTY.TTF");
}
void Textos::setMensajePuntos()
{

	mensajepuntos.setFont(font);
	mensajepuntos.setCharacterSize(24);
	mensajepuntos.setPosition(10, 10);
	mensajepuntos.setFillColor(sf::Color::White);
}

void Textos::setMensajeVidas()
{
	mensajevidas.setFont(font);
	mensajevidas.setCharacterSize(24);
	mensajevidas.setPosition(120, 10);
	mensajevidas.setFillColor(sf::Color::White);

}


Text Textos::getMensajePuntos(int s)
{   mensajepuntos.setString("Puntaje: " + to_string(s));
	return mensajepuntos;
}
Text Textos::getMensajeVidas(int v)
{
	mensajevidas.setString("Vidas: " + to_string(v));
	return mensajevidas;
}
Textos::Textos()
{
	setFont();
	setMensajePuntos();
	setMensajeVidas();
}