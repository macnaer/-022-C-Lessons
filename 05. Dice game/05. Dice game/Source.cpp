#include <iostream>
#include <ctime>



using namespace std;



int main() {
	srand(unsigned(time(NULL)));



	char name[255];
	char botName[255] = "Watson";
	bool exit = false;
	int score = 0, playerScore = 0, botScore = 0;
	int playerDiceOne = 0, playerDiceTwo = 0, playerDiseSum = 0;
	int botDiceOne = 0, botDiceTwo = 0, botDiceSum = 0;



	cout << "Your name? ";
	cin >> name;
	cout << "Enter score count: ";
	cin >> score;



	cout << "===============================Dice Game======================" << endl;
	cout << name << " vs " << botName << endl;
	cout << "Game until " << score << " score" << endl;
	while (exit == false)
	{
		// Drop dice
		cout << name << " turn => " << endl;;
		system("pause");
		playerDiceOne = rand() % 6 + 1;
		playerDiceTwo = rand() % 6 + 1;
		playerDiseSum = playerDiceOne + playerDiceTwo;
		cout << name << " draw " << playerDiceOne << " X " << playerDiceTwo << endl;
		cout << "-----------------------------------------" << endl;
		cout << botName << " turn =>" << endl;
		system("pause");
		botDiceOne = rand() % 6 + 1;
		botDiceTwo = rand() % 6 + 1;
		botDiceSum = botDiceOne + botDiceTwo;
		cout << botName << " draw " << botDiceOne << " X " << botDiceTwo << endl;
		cout << "-----------------------------------------" << endl;
		// Drop dice result
		if (playerDiseSum > botDiceSum) {
			playerScore++;
		}
		else if (playerDiseSum < botDiceSum) {
			botScore++;
		}
		if (playerDiceOne == playerDiceTwo) {
			playerScore += 2;
		}
		if (botDiceOne == botDiceTwo) {
			botScore += 2;
		}


		cout << "-----------------------------------------" << endl;
		cout << name << " = " << playerScore << " score" << endl;
		cout << botName << " = " << botScore << " score" << endl;
		cout << "-----------------------------------------" << endl;



		if (playerScore >= score) {
			cout << name << " Won!!!" << endl;
			exit = true;
		}
		else if (botScore >= score) {
			cout << botName << " Won!!!" << endl;
			exit = true;
		}
	}
	system("pause");
}