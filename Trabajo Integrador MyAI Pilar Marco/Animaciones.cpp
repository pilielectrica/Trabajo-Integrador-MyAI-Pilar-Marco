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
    texturenormal2.loadFromFile("Enemigo2.png");
}
void Animaciones::setTexturesAnimacion3()
{
    enemigo3frame1.loadFromFile("en3frame1.png");
    enemigo3frame2.loadFromFile("en3frame2.png");
    texturenormal3.loadFromFile("Enemigo3.png");
}
void Animaciones::setTexturesAnimacion4()
{
    enemigo4frame1.loadFromFile("en4frame1.png");
    enemigo4frame2.loadFromFile("en4frame2.png");
    texturenormal4.loadFromFile("Enemigo4.png");
}
void Animaciones::setTexturaEnemigo1Inicial(Sprite _enemigo1)
{
    _enemigo1.setTexture(texturanormal);
}
void Animaciones::setTexturaEnemigo2Inicial(Sprite _enemigo2)
{
    _enemigo2.setTexture(texturenormal2);
}
void Animaciones::setTexturaEnemigo3Inicial(Sprite _enemigo3)
{
    _enemigo3.setTexture(texturenormal3);
}
void Animaciones::setTexturaEnemigo4Inicial(Sprite _enemigo4)
{
    _enemigo4.setTexture(texturenormal4);
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
void Animaciones::enemigo3animado(Sprite& _enemigo3)
{
    if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1)
    {
        if (_enemigo3.getTexture() == &texturenormal3) { _enemigo3.setTexture(enemigo3frame1); cantidadcambiostextura3++; }
        else if (_enemigo3.getTexture() == &enemigo3frame1) { _enemigo3.setTexture(enemigo3frame2); cantidadcambiostextura3++; }
        else { _enemigo3.setTexture(texturenormal3); cantidadcambiostextura3++; }
        clockanimacion.restart();
    }
}
void Animaciones::enemigo4animado(Sprite& _enemigo4)
{
    if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe1)
    {
        if (_enemigo4.getTexture() == &texturenormal4) { _enemigo4.setTexture(enemigo4frame1); cantidadcambiostextura4++; }
        else if (_enemigo4.getTexture() == &enemigo4frame1) { _enemigo4.setTexture(enemigo4frame2); cantidadcambiostextura4++; }
        else { _enemigo4.setTexture(texturenormal4); cantidadcambiostextura4++; }
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
int Animaciones::getCantidadCambiosTextura3()
{
    return cantidadcambiostextura3;
}
int Animaciones::getCantidadCambiosTextura4()
{
    return cantidadcambiostextura4;
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
    setTexturesAnimacion3();
    setTexturesAnimacion4();


}
Animaciones::Animaciones() {}
