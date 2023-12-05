#include "crosshair.h"
#include "enemigo.h"
#include "castillo.h"
#include "juego.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
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
				cout << crosshairPosition.x << endl << crosshairPosition.y << endl;
				break;

			}
/*			if (_enemigo.aparecer().getGlobalBounds().contains(crosshairPosition.x, crosshairPosition.y))
			{
				if (evt.type == Event::MouseButtonReleased)
				{

					score += 1;
					if (score >= 5)
					{
						ganaste = true;
					}
				}
			}

			_enemigo.moverse();*/
			jugar.mostrarPersonajes();
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
			App.draw(_castillo.getCastillo());
			App.draw(jugar.mostrarEnemigo1());
			App.draw(_crosshair.mostrarsprite());
			
			App.display();

		//}


	}

	return 0;
	}

