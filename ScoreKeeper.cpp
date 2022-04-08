/*
Troy Smith
IT-312-round4007
2022.04.10
6-1 Programming Assignment: Writing to a File
*/

/* 
ScoreKeeper

A C++ Program that keeps record of Card Games
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Main function
int main()
{
	int playerCount;
	int roundCount;
	string name;
	int score;
	int i;
	int j;

	// Prompt for number of players
	cout << "\n\n Number of players in the game? ";
	cin >> playerCount;

	// Prompt for number of rounds
	cout << "\n\n Number of rounds to be played? ";
	cin >> roundCount;

	// Create or Open file for output
	fstream fout("ScoreRecord.txt", ios::out);

	// Write label to file
	fout << "\n Player Names: ";

	cin.ignore();

		// Read player names
		for (i = 0; i < playerCount; i++)
		{
			// Prompt for each player name
			cout << "\n\n Input player " << (i + 1) << " name: ";
			getline(cin, name);

			// Write each player name to output file
			fout << name << " \t ";
		}

		// Read scores for each round
		for (j = 1; j <= roundCount; j++)
		{
			// Write header for the output file
			fout << "\n\n Round " << j << " scores : ";
			cout << "\n\n Round " << j << " scores : ";

			// Read scores of each player for each round:
			for (i = 1; i <= playerCount; i++)
			{
				// Read player score
				cout << "\n Enter player " << i << " score: ";
				cin >> score;

				// Write score to file
				fout << score << " \t ";
			}
		}

		// Close the file
		fout.close();

		// Notify user of successful output to file
		cout << "\n All Scores have been successfully stored..... \n\n";

	return 0;
}