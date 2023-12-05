
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#pragma once
class Inocentes
{
private:
	Sprite inocente1;
	Sprite inocente2;
	Sprite inocente3;
	Texture inocentetexture1;
	Texture inocentetexture2;
	Texture inocentetexture3;
public:
	void setInocente1();
	void setInocente2();
	void setInocente3();
	Sprite getInocente1();
	Sprite getInocente2();
	Sprite getInocente3();
	void setPositionInocente1(int x, int y);
	void setPositionInocente2(int x, int y);
	void setPositionInocente3(int x, int y);
	Inocentes();

};

