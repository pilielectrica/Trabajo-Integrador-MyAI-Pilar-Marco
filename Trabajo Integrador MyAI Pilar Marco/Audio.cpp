#include "Audio.h"

bool Audio::setandgetMusic()
{
	if (!music.openFromFile("joy.ogg"))
	{
		return -1;
	}// error}
	music.setVolume(50);
	music.play();
	music.setLoop(true);
}
bool Audio::setSounds()
{
	if (!buffer.loadFromFile("gun1.ogg"))
		return -1;
	if (!buffer5.loadFromFile("inocentemuere.ogg"))
		return -1;
	if (!buffer6.loadFromFile("enemigomuere.ogg"))
		return -1;
	if (!bufferboom.loadFromFile("boom.ogg"))
		return -1;
	inocente.setBuffer(buffer5);

	enemigo.setBuffer(buffer6);

	gun1.setBuffer(buffer);

	boom.setBuffer(bufferboom);
	
}

void Audio::playenemigo()
{
	enemigo.play();
}
void Audio::playinocente()
{
	inocente.play();
}
void Audio::playgun()
{
	gun1.play();
}
void Audio::playboom()
{
	boom.play();
}
Audio::Audio()
{
	setSounds();

}