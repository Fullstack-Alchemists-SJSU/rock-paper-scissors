#ifndef INPUT
#define INPUT

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Input
{
private:
	string letterChoices = "rps";

public:
	vector<pair<char, char>> getInputs();
	char getRandomComputerInput();
};

#endif