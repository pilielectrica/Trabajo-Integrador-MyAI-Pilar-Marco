#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animaciones.h"

void Animaciones::setTexturesAnimacion()
{
	enemigo1frame1.loadFromFile("en1frame1.png");
	enemigo1frame2.loadFromFile("en1frame2.png");
	texturanormal.loadFromFile("Enemigo1.png");
}
void Animaciones::setTexturaEnemigo1Inicial(Sprite _enemigo1)
{
    _enemigo1.setTexture(texturanormal);
}

void Animaciones::enemigo1animado(Sprite& _enemigo1)
{

if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1) {



  if (_enemigo1.getTexture() == &texturanormal) {
            _enemigo1.setTexture(enemigo1frame1);
            
        }
        else if (_enemigo1.getTexture() == &enemigo1frame1) {
            _enemigo1.setTexture(enemigo1frame2);
            
        }
        else{
            _enemigo1.setTexture(texturanormal);

        }
  clockanimacion.restart();
  
  
}
        
      
    
}
	
Animaciones::Animaciones(float duracion)
{
    duracion = duracionframe1;
	setTexturesAnimacion();
}
Animaciones::Animaciones() {}
