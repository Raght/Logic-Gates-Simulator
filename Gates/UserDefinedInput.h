#pragma once
#include "Gate.h"



class UserDefinedInput
{
	void ChangeInput(bool new_input);
	void InverseInput();

	bool GetInput() const;

private:
	bool input;
	Gate* gate_to_output;
	bool* gate_input;
};