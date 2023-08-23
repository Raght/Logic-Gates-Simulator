#pragma once
#include "olcPixelGameEngine.h"


inline const std::map<uint64_t, uint64_t> MAP_NOT_CACHED; 


class Gate
{
public:
	Gate();
	Gate(...);

	void CacheLogicTable();


public:
	olc::vi2d position;
	olc::Decal* decal;
	
	std::vector<bool*> inputs;
	std::vector<bool*> outputs;
	std::map<uint64_t, uint64_t> logic_table_cached = MAP_NOT_CACHED;
};