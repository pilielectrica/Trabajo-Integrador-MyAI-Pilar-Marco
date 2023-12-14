#include "crosshair.h"
#include "enemigo.h"
#include "textos.h"
#include "castillo.h"
#include "juego.h"
#include "audio.h"
#include "animaciones.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main() {
	srand(time(NULL));
	Event evt;
	Crosshair _crosshair;
	_crosshair.seteartexturacrosshair();
	Castillo _castillo;
	_castillo.setCastillo();
	Juego jugar;
	
	bool disparosobrenemigo1 = false;
	bool disparosobrenemigo2 = false;
	bool disparosobrenemigo3 = false;
	bool disparosobrenemigo4 = false;
	int score = 0;
	int vidas = 3;
	bool enemigo1muere = false;
	bool enemigo2muere = false;
	bool enemigo3muere = false;
	bool enemigo4muere = false;
	bool ganaste = false;
	bool inicio = true;
	Textos texto;
	Audio audio;
	audio.setandgetMusic();

	sf::RenderWindow App(sf::VideoMode(1366, 768, 32),
		"Que ventana horrible");
	App.setMouseCursorVisible(false);

	// Loop principal
	while (App.isOpen()) {
		while (App.pollEvent(evt)) {
			Vector2i cursorPosition = Mouse::getPosition(App);
			Vector2f crosshairPosition = _crosshair.mostrarsprite().getPosition();
			/////Procesar eventos//////
			switch (evt.type) {
				/////Si se cerro la ventana//////
			case sf::Event::Closed:
				App.close();
				break;
			case sf::Event::MouseMoved:
				_crosshair.actualizarPosicionCursor(evt.mouseMove.x, evt.mouseMove.y);
				break;
			case Event::MouseButtonPressed:
				//cout << crosshairPosition.x << endl << crosshairPosition.y << endl;
				audio.playgun(); inicio = false;
				break;

			}
			if (jugar.dibujarInocente1().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y) ||
				jugar.dibujarInocente2().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y) || 
				jugar.dibujarInocente3().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y) || 
				jugar.dibujarInocente4().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y) || 
				jugar.dibujarInocente5().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y) )
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un inocente" << endl;
					
					score -= 1;
					vidas -= 1;
					audio.playinocente();
				}
			}

			if (jugar.dibujarEnemigo1().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{   
					
					cout << "matamos un enemigo" << endl;						
					disparosobrenemigo1 = true;								
					score += 1; enemigo1muere = true;
					audio.playenemigo();
					
				}
			}
			if (jugar.dibujarEnemigo2().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo2 = true;
					score += 1; enemigo2muere = true;
					audio.playenemigo();
				}
			}
			if (jugar.dibujarEnemigo3().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo3 = true;
					score += 1; enemigo3muere = true;
					audio.playenemigo();
				}
			}
			if (jugar.dibujarEnemigo4().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo4 = true;
					score += 1; enemigo4muere = true;
					audio.playenemigo();
				}
			}
			
		}
		jugar.mostrarPersonajes();
		if (disparosobrenemigo1 == true) {
			jugar.enemigo1Muere();	
		}if (disparosobrenemigo2 == true) {
			jugar.enemigo2Muere(); 
		}if (disparosobrenemigo3 == true) {
			jugar.enemigo3Muere(); 
		}
		if (disparosobrenemigo4 == true) {
			jugar.enemigo4Muere(); 
		}
		
		if (enemigo1muere == true && enemigo2muere == true && enemigo3muere == true && enemigo4muere == true) { ganaste = true; }
		if (score == -1) { score = 0; }
		if (inicio)
		{ 
		App.clear(); App.draw(texto.getTitulo()); App.draw(texto.getInstruccion1()); 
		App.draw(texto.getInstruccion2()); App.display(); if (!inicio) { App.close(); }
		}
		else if (ganaste)
		{

			App.clear();
			App.draw(texto.getMensajeGanaste());
			App.display();
		}
		else if (vidas == 0)
		{  App.clear();
			App.draw(texto.getMensajePerdiste());
			App.display();
		}
		else
		{
			App.clear();
			
			App.draw(_castillo.getFondo());
			App.draw(_castillo.getCastillo());
			App.draw(jugar.dibujarEnemigo1());
			App.draw(jugar.dibujarEnemigo2());
			App.draw(jugar.dibujarInocente1());
			App.draw(jugar.dibujarInocente2());
			App.draw(jugar.dibujarInocente3());
			App.draw(jugar.dibujarInocente4());
			App.draw(jugar.dibujarInocente5());
			App.draw(jugar.dibujarEnemigo4());
			App.draw(jugar.dibujarEnemigo3());
			App.draw(_crosshair.mostrarsprite());texto.getMensajePuntos(score); 
			App.draw(texto.getMensajePuntos(score));texto.getMensajeVidas(vidas);
			App.draw(texto.getMensajeVidas(vidas));

			App.display();
		}
		//}


	}

	return 0;
	}

