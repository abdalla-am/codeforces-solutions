#include <iostream>
#include <string>
using  namespace std;
int main() {
	int noOfStatements = 0;
	string statement[150];
	int  X = 0;
	cin >> noOfStatements;
	for ( int i = 0; i < noOfStatements; i++)
	{
		cin >> statement[i];
		if (statement[i].at(1) == '+') {
			X = X + 1;
		}
		else {
			X = X - 1;
		}
	}
	cout << X;
}