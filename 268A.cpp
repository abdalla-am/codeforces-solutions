#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfTeams;
	cin >> noOfTeams;
	int homeColors[30];
	int guestColors[30];
	int output = 0;
	for (int i = 0; i < noOfTeams; i++)
	{
		cin >> homeColors[i]>> guestColors[i];
	}
	for (int i = 0; i < noOfTeams; i++)
	{
		for (int j = 0; j < noOfTeams; j++)
		{
			if (i == j) {
				continue;
			}
			else {
				if (homeColors[i] == guestColors[j]) {
					output += 1;
				}
			}
		}
	}
	cout << output;
}