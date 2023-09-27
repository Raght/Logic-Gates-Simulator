#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Globals.h"
#include "Engine.cpp"


int main()
{
	Engine engine;
	if (engine.Construct(RESOLUTION_WIDTH, RESOLUTION_HEIGHT, 1, 1))
		engine.Start();
	else
		return -1;

	return 0;
}