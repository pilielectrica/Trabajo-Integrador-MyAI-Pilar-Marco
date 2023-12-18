#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#pragma once
using namespace sf;
using namespace std;
class Audio
{
private:
	Music music;
	SoundBuffer buffer;
	SoundBuffer buffer5;
	SoundBuffer buffer6;
	SoundBuffer bufferboom;
	Sound inocente;
	Sound boom;
	Sound enemigo;
	Sound gun1;
	

public:
	bool setandgetMusic();
	bool setSounds();
	void playinocente();
	void playenemigo();
	void playgun();
	void playboom();
	Audio();
};

