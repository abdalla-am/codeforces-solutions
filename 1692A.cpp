#include<iostream>
using namespace std;
int main() {
	int noOfRaces = 0;
	int Faster=0;
	int arr[4] = {0};
	cin >> noOfRaces;
	for (int i = 0; i < noOfRaces; i++)
	{
		Faster = 0;
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		for (int j = 1; j < 4; j++)
		{

			if (arr[0] < arr[j]) {
				Faster += 1;
			}
		}
		cout << Faster << endl;
	}
}