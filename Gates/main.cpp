#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Globals.h"
#include "MainGameLoop.cpp"


int main()
{
	olc::GraphicsMode graphics_mode{ RESOLUTION_WIDTH, RESOLUTION_HEIGHT, 1, 1 };

	Engine engine;
	if (engine.Construct(graphics_mode))
		engine.Start();
	else
		return -1;

	return 0;
}