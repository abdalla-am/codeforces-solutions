#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfSubtractions;
	int number=0;
	int tempnumber;
	cin >> number >> noOfSubtractions;
	for (int i = 0; i < noOfSubtractions; i++)
	{
		if (number % 10 == 0) {
			number = number / 10;
		}
		else {
			number = number - 1;
		}
	}
	cout << number;
}