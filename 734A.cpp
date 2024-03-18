#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfGames;
	string whoWon;
	int AntonWins = 0;
	int DanikWins = 0;
	cin >> noOfGames >> whoWon;
	for (int i = 0; i < noOfGames; i++)
	{
		if (whoWon[i] == 'A') {
			AntonWins += 1;
		}
		else {
			DanikWins += 1;
		}
	}
	if (AntonWins < DanikWins) {
		cout << "Danik";
	}
	else if (AntonWins > DanikWins) {
		cout << "Anton";
	}
	else {
		cout << "Friendship";
	}

}