#pragma once
#include "olcPixelGameEngine.h"


using logic_table = std::unordered_map<uint32_t, uint32_t>;

inline const logic_table MAP_NOT_CACHED;


uint32_t booleans_to_uint32_t(std::vector<bool> booleans, bool& successful_conversion, bool reverse_order = false)
{
	if (booleans.size() > 32)
	{
		successful_conversion = false;
		return 0xFFFFFFFF;
	}

	uint32_t booleans_as_integer = 0;
	if (!reverse_order)
	{
		for (int i = 0; i < booleans.size(); i++)
		{
			booleans_as_integer |= (1 << i) & (uint32_t)booleans[i] << i;
		}
	}
	else
	{
		for (int i = 0; i < booleans.size(); i++)
		{
			booleans_as_integer |= (1 << i) & (uint32_t)booleans[booleans.size() - 1 - i] << i;
		}
	}

	return booleans_as_integer;
}

std::vector<bool> uint32_t_as_booleans(uint32_t integer, bool reverse_order = false)
{
	std::vector<bool> booleans;

	if (!reverse_order)
	{
		for (int i = booleans.size() - 1; i >= 0; i--)
		{
			uint32_t boolean_as_integer = 0;
			boolean_as_integer = ((1 << i) & integer) >> i;
			booleans.push_back((bool)boolean_as_integer);
		}
	}
	else
	{
		for (int i = 0; i < booleans.size(); i++)
		{
			uint32_t boolean_as_integer = 0;
			boolean_as_integer = ((1 << i) & integer) >> i;
			booleans.push_back((bool)boolean_as_integer);
		}
	}

	return booleans;
}


class OutputInterface
{
	bool* pOutput = nullptr;
	bool output;

	void UpdateState();
};
class InputInterface
{
	bool input;
};


class InputsToOutputsMatch
{

};

class Gate 
{
public:
	Gate();
	Gate(logic_table logic_table, GateAppearence gate_appearence);
	Gate(const Circuit& circuit);

	void CacheLogicTable();
	
	void ChangeInputs();
	void UpdateOutputs();

public:
	olc::vi2d position;
	bool is_custom = false;

	
	

public:
	int inputs_size() const;
	int outputs_size() const;

	std::vector<Gate*> outputs_gates;
	std::vector<bool*> outputs_bools;

	std::vector<bool> GetInputs() const;

private:
	std::vector<bool> inputs;
	
	logic_table logic_table_cached = MAP_NOT_CACHED;

	friend class OutputInterface;
	friend class InputInterface;
};