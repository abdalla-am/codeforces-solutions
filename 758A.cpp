#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[100];
	int max;
	int numberOfBurles = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i == 0) {
			max = arr[i];
		}
		else {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		numberOfBurles += (max - arr[i]);
	}
	cout << numberOfBurles << endl;
}