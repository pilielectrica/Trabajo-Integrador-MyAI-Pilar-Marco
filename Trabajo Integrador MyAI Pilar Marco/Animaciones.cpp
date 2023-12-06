#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animaciones.h"

void Animaciones::enemigo1animado(Sprite _enemigo1)
{
	if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe)
	{
		_enemigo1.setTexture(enemigo1frame1);
		if (_enemigo1.getTexture() == &enemigo1frame1)
		{
			_enemigo1.setTexture(enemigo1frame2);
		} 
		
	}
	if (clockanimacion.getElapsedTime().asSeconds() >= duracionanimacion){clockanimacion.restart();}
	
}
Animaciones::Animaciones(Sprite _enemigo1_) : enemigo1frame1(), enemigo1frame2()
{
	enemigo1frame1.loadFromFile("en1frame1.png");
	enemigo1frame2.loadFromFile("en1frame2.png");
	enemigo1animado(_enemigo1_);
}
