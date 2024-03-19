#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfStops;
	int noOfEntries[1000] = {}, noOfExits[1000] = {};
	int tempEntry;
	int tempExit;
	int capacity = 0;
	int cap = 0;
	cin >> noOfStops;

	int temp2entry;

	for (int i = 0; i < noOfStops; i++)
	{

		cin >> tempExit >> tempEntry;
		if (i == 0) {
			temp2entry = tempEntry;
		}
		if (tempEntry>temp2entry ) {
			temp2entry = tempEntry;
		}
		if (tempExit == 0 && tempEntry == 0) {
			continue;
		}
		else {
			noOfExits[i] = tempExit;
			noOfEntries[i] = tempEntry;
		}

	}

	for (int i = 0; i < noOfStops; i++)
	{

		if (i == 0 && noOfEntries[i] == noOfExits[i + 1] && noOfEntries[i + 1] == 0) {
			capacity = noOfEntries[i];
			continue;
		}

		if (i == 0) {
			cap = noOfEntries[i] - noOfExits[i + 1] + noOfEntries[i + 1];
			capacity = cap;
		}
		else {
			cap += (-noOfExits[i + 1] + noOfEntries[i + 1]);
			if (capacity < cap) {
				capacity = cap;
			}
		}

		if (i == noOfStops - 1 && capacity == 0 && noOfEntries[i] != 0) {
			capacity = noOfEntries[i];

		}

	}

	if (capacity < temp2entry) {
		cout << temp2entry;
	}
	else {
		cout << capacity;
	}

}