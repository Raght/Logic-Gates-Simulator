#include "olcPixelGameEngine.h"


class Engine : public olc::PixelGameEngine
{
public:
	Engine()
	{
		sAppName = "Logic Gates Simulator";
	}

	bool OnUserCreate() override
	{


		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{


		return true;
	}
};