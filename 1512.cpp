#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n, noOfCases, index;
	cin >> noOfCases;
	for (int i = 0; i < noOfCases; i++)
	{
		index = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int manytimes = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[0] != arr[i]) {
				index = i + 1;
				manytimes += 1;

			}

		}
		if (manytimes > 1) {
			cout << "1" << endl;
		}
		else {
			cout << index << endl;
		}
	}
}
