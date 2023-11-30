#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#pragma once
class Castillo
{
private:
	Sprite castillo;
	Texture textureCastillo;
public:
	void setCastillo();
	Sprite getCastillo();
};

