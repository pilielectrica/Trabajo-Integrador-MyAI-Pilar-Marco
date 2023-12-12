
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
	Sprite inocente4;
	Sprite inocente5;
	Texture inocentetexture1;
	Texture inocentetexture2;
	Texture inocentetexture3;
	Texture inocentetexture4;
	Texture inocentetexture5;
public:
	void setInocente1();
	void setInocente2();
	void setInocente3();
	void setInocente4();
	void setInocente5();
	Sprite getInocente1();
	Sprite getInocente2();
	Sprite getInocente3();
	Sprite getInocente4();
	Sprite getInocente5();
	void setPositionInocente1(int x, int y);
	void setPositionInocente2(int x, int y);
	void setPositionInocente3(int x, int y);
	void setPositionInocente4(int x, int y);
	void setPositionInocente5(int x, int y);
	Inocentes();

};

