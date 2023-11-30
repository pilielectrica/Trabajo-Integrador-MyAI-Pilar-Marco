#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#pragma once
class Enemigo
{   
private:
	Sprite enemigo1;
	Sprite enemigo2;
	Sprite enemigo3;
	Texture enemigotexture1;
	Texture enemigotexture2;
	Texture enemigotexture3;
public:
	void setEnemigo1();
	Sprite getEnemigo1();


};

