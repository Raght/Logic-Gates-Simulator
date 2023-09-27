#pragma once
#include "olcPixelGameEngine.h"


class GateAppearance
{
	GateAppearance() = default;
	GateAppearance(olc::Decal* decal, float scale,
		const std::vector<olc::vi2d>& relative_positions_inputs,
		const std::vector<olc::vi2d>& relative_positions_outputs);
	GateAppearance(const std::vector<olc::vi2d>& relative_positions_inputs,
		const std::vector<olc::vi2d>& relative_positions_outputs);

private:
	bool uses_decal = false;
	olc::Decal* decal = nullptr;
	std::vector<olc::vi2d> relative_positions_inputs;
	std::vector<olc::vi2d> relative_positions_outputs;
};