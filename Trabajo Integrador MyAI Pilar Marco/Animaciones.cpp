#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animaciones.h"

void Animaciones::setTexturesAnimacion1()
{
	enemigo1frame1.loadFromFile("en1frame1.png");
	enemigo1frame2.loadFromFile("en1frame2.png");
	texturanormal.loadFromFile("Enemigo1.png");
}
void Animaciones::setTexturesAnimacion2()
{
    enemigo2frame1.loadFromFile("en2frame1.png");
    enemigo2frame2.loadFromFile("en2frame2.png");
    texturenormal2.loadFromFile("Enemigo3.png");
}
void Animaciones::setTexturaEnemigo1Inicial(Sprite _enemigo1)
{
    _enemigo1.setTexture(texturanormal);
}
void Animaciones::setTexturaEnemigo2Inicial(Sprite _enemigo2)
{
    _enemigo2.setTexture(texturenormal2);
}

void Animaciones::enemigo1animado(Sprite& _enemigo1)
{  
    if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1)
    {
        if (_enemigo1.getTexture() == &texturanormal) { _enemigo1.setTexture(enemigo1frame1); cantidadcambiostextura++; }
        else if (_enemigo1.getTexture() == &enemigo1frame1) { _enemigo1.setTexture(enemigo1frame2); cantidadcambiostextura++; }
        else { _enemigo1.setTexture(texturanormal); cantidadcambiostextura++; }
         clockanimacion.restart();
    }    
}
void Animaciones::enemigo2animado(Sprite& _enemigo2)
{
    if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1)
    {
        if (_enemigo2.getTexture() == &texturenormal2) { _enemigo2.setTexture(enemigo2frame1); cantidadcambiostextura2++; }
        else if (_enemigo2.getTexture() == &enemigo2frame1) { _enemigo2.setTexture(enemigo2frame2); cantidadcambiostextura2++; }
        else { _enemigo2.setTexture(texturenormal2); cantidadcambiostextura2++; }
        clockanimacion.restart();
    }
}
int Animaciones::getCantidadCambiosTextura()
{
    return cantidadcambiostextura;
}
int Animaciones::getCantidadCambiosTextura2()
{
    return cantidadcambiostextura2;
}
void Animaciones::setCantidadCambiosTextura(int cantidad)
{
    cantidadcambiostextura = cantidad;
}

Animaciones::Animaciones(float duracion)
{
    duracionframe1 = duracion;
	setTexturesAnimacion1();
    setTexturesAnimacion2();


}
Animaciones::Animaciones() {}
