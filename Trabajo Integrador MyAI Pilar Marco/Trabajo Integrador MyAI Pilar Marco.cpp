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
	Texture frame1enemigo1;
	Texture frame2enemigo1; 
	Texture frame3enemigo1;
	frame1enemigo1.loadFromFile("en1frame1.png"); 
	frame2enemigo1.loadFromFile("en1frame2.png");
	frame3enemigo1.loadFromFile("Enemigo1.png");
	
	Clock clock;
	float frameDuration1 = 0.5f;
	float frameDuration2 = 1;

	if (!music.openFromFile("PrimerNivelSTTSok.ogg"))
	{
		return -1;
	}// error}
	music.play();
	music.setLoop(true);
	
	

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
				break;

			}
			if (jugar.dibujarEnemigo1().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonPressed)
				{
					cout << "matamos un enemigo" << endl;

					jugar.enemigoMuere(); 
					/*score += 1;
					if (score >= 5)
					{
						ganaste = true;
					}*/
				}
			}
			
		}
		jugar.mostrarPersonajes();
	

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
			App.draw(_crosshair.mostrarsprite());
			
			App.display();

		//}


	}

	return 0;
	}

