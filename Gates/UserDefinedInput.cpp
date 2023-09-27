#include "UserDefinedInput.h"

void UserDefinedInput::ChangeInput(bool new_input)
{
	input = new_input;
	(*gate_input) = input;
}

void UserDefinedInput::InverseInput()
{
	ChangeInput(!input);
}

bool UserDefinedInput::GetInput() const
{
	return input;
}
