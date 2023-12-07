#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animaciones.h"

void Animaciones::setTexturesAnimacion()
{
	enemigo1frame1.loadFromFile("en1frame1.png");
	enemigo1frame2.loadFromFile("en1frame2.png");
}


void Animaciones::enemigo1animado(Sprite& _enemigo1)
{
	if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1)
	{
		{_enemigo1.setTexture(enemigo1frame1);}
		
		if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe2)
		{
			_enemigo1.setTexture(enemigo1frame2);
		} 
		else if(clockanimacion.getElapsedTime().asSeconds() >= duracionframenormal)
		{ _enemigo1.setTexture(texturanormal); }

		clockanimacion.restart();
	}
	
	
}
Animaciones::Animaciones(Sprite _enemigo1_)
{
	setTexturesAnimacion();
}
Animaciones::Animaciones() {}
