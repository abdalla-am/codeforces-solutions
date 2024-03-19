#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfMagnets = 0;
	int plusOrMinus[100000] = {};
	int noOfGroups = 0;
	cin >> noOfMagnets;
	for (int i = 0; i < noOfMagnets; i++)
	{

		cin >> plusOrMinus[i];
		if (i != 0) {

			if (plusOrMinus[i - 1] % 10 == plusOrMinus[i]/10) {
				noOfGroups += 1;
			}
		}

	}
	cout << noOfGroups+1;
}