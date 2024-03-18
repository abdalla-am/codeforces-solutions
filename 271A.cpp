#include<iostream>
#include<string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	int year;
	cin >> year;
	bool found = false;

	int tempYear = year;
	int unit = tempYear % 10;
	tempYear = tempYear / 10;
	int tenth = tempYear % 10;
	tempYear = tempYear / 10;
	int hundred = tempYear % 10;
	tempYear = tempYear / 10;
	int thousand = tempYear % 10;

	int counter = 0;

	do {
		//1987
		counter++;
		if (unit != 9) {
			unit = unit + 1;
		}
		else {
			unit = 0;
			if (tenth != 9) {
				tenth = tenth + 1;
			}
			else {
				tenth = 0;
				if (hundred != 9) {
					hundred = hundred + 1;
				}
				else {
					hundred = 0;
					thousand = thousand + 1;
				}
			}
		}
		if (thousand != hundred && thousand != tenth && thousand != unit && hundred != tenth && hundred != unit && tenth != unit) {
			found = true;
		}
		year = year + 1;
	} while (found == false);


	if (counter == 1) {
		cout << year;
	}
	else {
		cout << year;
	}

}