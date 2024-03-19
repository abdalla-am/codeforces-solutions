#include<iostream>
#include<string>
using namespace std;
int main() {

	int noOfRooms = 0;
	int Lives[100], Capacity[100];
	int noOfRoomsReady=0;
	cin >> noOfRooms;
	for (int i = 0; i < noOfRooms; i++)
	{
		cin >> Lives[i] >> Capacity[i];
		if (Capacity[i] - Lives[i] >=2) {
			noOfRoomsReady += 1;
		}
	}
	cout << noOfRoomsReady;
}