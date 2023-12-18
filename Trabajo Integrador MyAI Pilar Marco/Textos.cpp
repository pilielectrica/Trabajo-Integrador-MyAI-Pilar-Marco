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
Text Textos::getTitulo()
{
	Text titulo(" INSTRUCCIONES:", font, 50);
	titulo.setPosition(400, 100);
	return titulo;
}
Text Textos::getInstruccion1()
{
	Text instruccion1("- Dispara a los enemigos, suma puntos y gana cuando los elimines a todos.", font, 30);
	instruccion1.setPosition(380, 450);
	return instruccion1;
}
Text Textos::getInstruccion2()
{
	Text instruccion2("- No mates a un inocente o perderás una de tus 3 vidas y un punto.", font, 30);
	instruccion2.setPosition(380, 350);
	return instruccion2;
}
Text Textos::getInstruccion3()
{
	Text instruccion3("- Si un enemigo te dispara perderas una vida", font, 30);
	instruccion3.setPosition(380, 250);
	return instruccion3;
}
Text Textos::getInstruccion4()
{
	Text instruccion4(" ¡Haz click para jugar!", font, 40);
	instruccion4.setPosition(400, 600);
	instruccion4.setFillColor(Color::Red);;
	return instruccion4;
}
Text Textos::getCreditos()
{
	Text gamesoundmusic("Game, sound & music", font, 25);	
	gamesoundmusic.setPosition(900, 600);	
	return gamesoundmusic;
	
}
Text Textos::getCreditos2()
{
	Text nombre("by Pilar Marco", font, 25);
	nombre.setPosition(900, 620);
	return nombre;
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