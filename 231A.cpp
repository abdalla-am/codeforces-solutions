#include <iostream>
#include <string>
using namespace std;
int main() {
	int noOfProblemsToSolve=0 ;
	int noOfProblemsWillBeSolved=0;
	cin >> noOfProblemsToSolve;
	int canSolve[1000][3];
	for (int i = 0; i < noOfProblemsToSolve; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> canSolve[i][j];
			sum += canSolve[i][j];
		}
		if (sum >= 2) {
			noOfProblemsWillBeSolved =noOfProblemsWillBeSolved+ 1;
		}
		
	}
	cout << noOfProblemsWillBeSolved << endl;
}

