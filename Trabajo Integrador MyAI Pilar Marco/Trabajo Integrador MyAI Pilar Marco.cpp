#include "crosshair.h"
#include "enemigo.h"
#include "castillo.h"
#include "juego.h"
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
	Music music;
	bool disparosobrenemigo1 = false;
	bool disparosobrenemigo2 = false;
	bool disparosobrenemigo3 = false;
	bool disparosobrenemigo4 = false;
	Clock enemigohamuerto;
	int tiempotranscurrido = 1.5;
	bool enemigomuerto = false;
	int score = 0;
	bool ganaste = false;

	if (!music.openFromFile("joy.ogg"))
	{
		return -1;
	}// error}
	music.setVolume(50);
	music.play();
	music.setLoop(true);
	SoundBuffer buffer;
	SoundBuffer buffer2;
	SoundBuffer buffer3;
	SoundBuffer buffer4;
	SoundBuffer buffer5;
	SoundBuffer buffer6;
	if (!buffer.loadFromFile("gun1.ogg"))
		return -1;
	if (!buffer2.loadFromFile("gun2.ogg"))
		return -1;
	if (!buffer3.loadFromFile("gun3.ogg"))
		return -1;
	if (!buffer4.loadFromFile("gun4.ogg"))
		return -1;
	if (!buffer5.loadFromFile("inocentemuere.ogg"))
		return -1;
	if (!buffer6.loadFromFile("enemigomuere.ogg"))
		return -1;

	Sound inocente;
	inocente.setBuffer(buffer5);
	Sound enemigo;
	enemigo.setBuffer(buffer6);
	Sound gun1;
	gun1.setBuffer(buffer);
	Sound gun2;
	gun2.setBuffer(buffer2);
	Sound gun3;
	gun3.setBuffer(buffer3);
	Sound gun4;
	gun4.setBuffer(buffer4);
	Sound sonidos[4] = { gun1,gun2,gun3,gun4 };
	
	

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
				int i = (rand() % 4);
				sonidos[i].play();
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
					inocente.play();
				}
			}

			if (jugar.dibujarEnemigo1().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;						
					disparosobrenemigo1 = true;								
					score += 1;
					enemigo.play();
				}
			}
			if (jugar.dibujarEnemigo2().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo2 = true;
					score += 1;
					enemigo.play();
				}
			}
			if (jugar.dibujarEnemigo3().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo3 = true;
					enemigo.play();
				}
			}
			if (jugar.dibujarEnemigo4().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;
					disparosobrenemigo4 = true;
					enemigo.play();
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
	

		/*if (ganaste)
		{

			App.clear();
			Text textoGanaste("GANASTE", font, 36);
			textoGanaste.setFillColor(Color::White);
			textoGanaste.setPosition(200, 200);
			App.draw(textoGanaste);
			App.display();
		}
		else
		{*/
			App.clear();

			
			//App.draw(_crosshair.mostrarsprite());
			//mensajepuntos.setString("Puntaje: " + to_string(score));
			//App.draw(mensajepuntos);
			// Mostramos la ventana
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
			App.draw(_crosshair.mostrarsprite());
			
			App.display();

		//}


	}

	return 0;
	}

