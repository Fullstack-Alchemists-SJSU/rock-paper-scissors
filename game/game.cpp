#include <vector>
#include <limits>
#include <ctime>
#include "game.hpp"
#include "input.hpp"

using namespace std;

char Input::getRandomComputerInput()
{
	srand((unsigned int)time(0));
	return this->letterChoices[rand() % 3];
}

vector<pair<char, char>> Input::getInputs()
{

	vector<pair<char, char>> inputs;
	char choice;
	cout << "You can choose one of the following" << endl
		 << "R. Rock\n"
		 << "P. Paper\n"
		 << "S. Scissors\n\n"
		 << flush;

	for (int i = 1; i <= 3; i++)
	{

		pair<char, char> roundInput;

		cout << "Round: " << i << " input: ";

		while (true)
		{
			cin >> choice;

			if (!cin || ((choice != 'r' && choice != 'R') && (choice != 'p' && choice != 'P') && (choice != 's' && choice != 'S')))
			{

				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please choose between R, P and S" << endl;

				continue;
			}
			else
			{
				roundInput.first = choice;
				break;
			}
		}

		char computerChoice = getRandomComputerInput();
		cout << "Computer chose: " << computerChoice << endl;
		roundInput.second = computerChoice;

		inputs.push_back(roundInput);

		cout << "\n";
	}

	return inputs;
}

void Game::startNewGame()
{

	this->score.cleanup();

	vector<pair<char, char>> inputs = this->input.getInputs();

	this->score.calculateRoundScores(inputs);

	this->score.declareResults();
}