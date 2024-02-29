#ifndef SCORE
#define SCORE

#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

enum Choices
{
	Rock,
	Paper,
	Scissors
};

enum Winner
{
	HUMAN,
	COMPUTER,
	DRAW
};

struct Score
{

	vector<Winner> roundScores;

	void declareResults()
	{
		for (auto item : roundScores)
		{
			if (item == HUMAN)
			{
				cout << "Winner is Human" << endl;
			}

			if (item == COMPUTER)
			{
				cout << "Winner is Computer" << endl;
			}

			if (item == DRAW)
			{
				cout << "Round Draw" << endl;
			}
		}
	}

	void calculateRoundScores(vector<pair<char, char>> inputs)
	{

		for (pair<int, int> round : inputs)
		{
			int humanInput = mapInputToChoice(round.first);
			int computerInput = mapInputToChoice(round.second);

			if (humanInput == Rock && computerInput == Scissors)
			{
				roundScores.push_back(HUMAN);
			}
			else if (humanInput == Rock && computerInput == Paper)
			{
				roundScores.push_back(COMPUTER);
			}
			else if (humanInput == Paper && computerInput == Rock)
			{
				roundScores.push_back(HUMAN);
			}
			else if (humanInput == Paper && computerInput == Scissors)
			{
				roundScores.push_back(COMPUTER);
			}
			else if (humanInput == Scissors && computerInput == Rock)
			{
				roundScores.push_back(COMPUTER);
			}
			else if (humanInput == Scissors && computerInput == Paper)
			{
				roundScores.push_back(HUMAN);
			}
			else
			{
				roundScores.push_back(DRAW);
			}
		}
	}

	int mapInputToChoice(char input)
	{
		if (input == 'r' || input == 'R')
		{
			return Rock;
		}

		if (input == 'p' || input == 'P')
		{
			return Paper;
		}

		if (input == 's' || input == 'S')
		{
			return Scissors;
		}

		return -1;
	}

	void cleanup()
	{
		roundScores.clear();
	}
};
#endif