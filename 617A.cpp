#include<iostream>
#include<string>
using namespace std;
int main() {
	int coordinate;
	int minNoOfSteps = 0;
	cin >> coordinate;
	while (coordinate != 0) {
		if (coordinate >= 5)
		{
			minNoOfSteps = minNoOfSteps + 1;
			coordinate=coordinate-5;
		}
		else if (coordinate == 4) {
			minNoOfSteps = minNoOfSteps + 1;
			coordinate = coordinate - 4;
		}
		else if (coordinate == 3) {
			minNoOfSteps = minNoOfSteps + 1;
			coordinate = coordinate - 3;
		}
		else if (coordinate == 2) {
			minNoOfSteps = minNoOfSteps + 1;
			coordinate = coordinate - 2;
		}
		else if (coordinate == 1) {
			minNoOfSteps = minNoOfSteps + 1;
			coordinate = coordinate - 1;
		}

	}
	cout << minNoOfSteps;
}
