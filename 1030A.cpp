#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main() {
	int responces[100] = {};
	int noOfPeople = 0;
	bool Hard = false;
	cin >> noOfPeople;
	for (int i = 0; i < noOfPeople; i++) {
		cin >> responces[i];
	}
	for (int i = 0; i < noOfPeople; i++)
	{
		if (responces[i] == 1) {
			Hard = true;
			break;
		}
	}
	if (Hard == true) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}

}

