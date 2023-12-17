#include "Castillo.h"

Sprite Castillo::getCastillo()
{
	return castillo;
}
Sprite Castillo::getFondo()
{
	return fondo;
}


void Castillo :: setCastillo()
{
	textureCastillo.loadFromFile("castle.png");
	castillo.setTexture(textureCastillo);
	castillo.setScale(1.7, 1.7);
	castillo.setPosition(250, 0);
	textureFondo.loadFromFile("background.png");
	fondo.setTexture(textureFondo);
	fondo.setScale(3.7, 3.5);

}
void Castillo::setAnimationSuncloud()
{
	
	suncloud2.loadFromFile("cloudsun2.png");
	suncloud3.loadFromFile("cloudsun3.png");
	suncloud4.loadFromFile("cloudsun4.png");
	
	
}
void Castillo::animacionSuncloud()
{
	if (clockanimacion.getElapsedTime().asSeconds() >= duracionframe)
	{
		if (suncloud.getTexture() == &suncloud1) { suncloud.setTexture(suncloud2); }
		else if (suncloud.getTexture() == &suncloud2) { suncloud.setTexture(suncloud3); }
		else if (suncloud.getTexture() == &suncloud3) { suncloud.setTexture(suncloud4); }
		else { suncloud.setTexture(suncloud1);}
		clockanimacion.restart();
	}
}

void Castillo::setSunCloud()
{   
	suncloud1.loadFromFile("cloudsun1.png");
	suncloud.setTexture(suncloud1);
	suncloud.setPosition(200, 200);
	suncloud.setScale(0.5, 0.5);
}
Sprite Castillo::getSunCloud()
{
	return suncloud;
}

void Castillo::setNubes()
{
	cloud1.loadFromFile("cloud1.png");
	cloud2.loadFromFile("cloud2.png");
	cloud3.loadFromFile("cloud3.png");
	cloud4.loadFromFile("cloud4.png");
	nube1.setTexture(cloud1);
	nube2.setTexture(cloud1);
	nube3.setTexture(cloud1);
	nube4.setTexture(cloud1);
	nube1.setScale(0.5, 0.5);
	nube2.setScale(0.5, 0.5);
	nube3.setScale(0.5, 0.5);
	nube4.setScale(0.5, 0.5);
	nube1.setPosition(1118, 148);
	nube2.setPosition(900, 146);
	nube3.setPosition(450, 137);
	nube4.setPosition(962, 372);
}
Sprite& Castillo::getCloud1()
{
	return nube1;
}
Sprite& Castillo::getCloud2()
{
	return nube2;
}
Sprite& Castillo::getCloud3()
{
	return nube3;
}
Sprite& Castillo::getCloud4()
{
	return nube4;
}
Castillo::Castillo()
{
	setAnimationSuncloud();
	setSunCloud();
	setNubes();
	
}