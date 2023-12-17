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
	Sprite fondo;
	Texture textureFondo;
	Sprite suncloud;
	Sprite nube1;
	Sprite nube2;
	Sprite nube3;
	Sprite nube4;
	Texture suncloud1;
	Texture suncloud2;
	Texture suncloud3;
	Texture suncloud4;
	Texture cloud1;
	Texture cloud2;
	Texture cloud3;
	Texture cloud4;
	Clock clockanimacion = Clock();
	Clock clockanimacion2 = Clock();
	Clock clockanimacion3 = Clock();
	Clock clockanimacion4 = Clock();
	Clock clockanimacion5 = Clock();

	float duracionframe = 0.5;
public:
	void setCastillo();
	Sprite getCastillo();
	Sprite getFondo();
	void setAnimationSuncloud();
	void setSunCloud();
	void animacionSuncloud();
	Sprite getSunCloud();
	void setNubes();
	Castillo();
	void animacionCloud();
	void animacionCloud2();
	void animacionCloud3();
	void animacionCloud4();
	Sprite& getCloud1();
	Sprite& getCloud2();
	Sprite& getCloud3();
	Sprite& getCloud4();
};

