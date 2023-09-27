#include "olcPixelGameEngine.h"
#include "Globals.h"
#include "Gate.h"


class Engine : public olc::PixelGameEngine
{
public:
	Engine()
	{
		sAppName = "Logic Gates Simulator";
	}

	std::vector<Gate> gates;

	bool OnUserCreate() override
	{
		GATE_SPRITE_AND =  new olc::Sprite(SPRITES_PATH + "Gate_AND.png" );
		GATE_SPRITE_NAND = new olc::Sprite(SPRITES_PATH + "Gate_NAND.png");
		GATE_SPRITE_NOR =  new olc::Sprite(SPRITES_PATH + "Gate_NOR.png" );
		GATE_SPRITE_NOT =  new olc::Sprite(SPRITES_PATH + "Gate_NOT.png" );
		GATE_SPRITE_OR =   new olc::Sprite(SPRITES_PATH + "Gate_OR.png"  );
		GATE_SPRITE_XNOR = new olc::Sprite(SPRITES_PATH + "Gate_XNOR.png");
		GATE_SPRITE_XOR =  new olc::Sprite(SPRITES_PATH + "Gate_XOR.png" );

		GATE_DECAL_AND =  new olc::Decal(GATE_SPRITE_AND );
		GATE_DECAL_NAND = new olc::Decal(GATE_SPRITE_NAND);
		GATE_DECAL_NOR =  new olc::Decal(GATE_SPRITE_NOR );
		GATE_DECAL_NOT =  new olc::Decal(GATE_SPRITE_NOT );
		GATE_DECAL_OR =   new olc::Decal(GATE_SPRITE_OR  );
		GATE_DECAL_XNOR = new olc::Decal(GATE_SPRITE_XNOR);
		GATE_DECAL_XOR =  new olc::Decal(GATE_SPRITE_XOR );

		gates.push_back()

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// Update user defined inputs




		// Update gates
		// Traverse gates in a specific order to change the outputs of the whole Circuit
		std::vector<int> order_to_traverse_gates;
		// BFS-like wave propagation from gates with outputs connected to no other gates
		// gives us the correct order to traverse and update gates
		
		std::vector<int> gates_with_known_input;

		for (Gate& gate : gates)
		{
			if (gate)
		}



		return true;
	}
};