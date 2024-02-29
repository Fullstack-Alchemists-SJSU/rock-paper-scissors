#ifndef GAME
#define GAME

#include <vector>
#include "score.hpp"
#include "input.hpp"

using namespace std;

class Game
{

private:
	Score score = {};
	vector<int> scores;
	Input input;

public:
	void startNewGame();
};

#endif