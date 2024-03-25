#include<iostream>
using namespace std;
int main() {
	int noOfContests=0;
	cin >> noOfContests;
	int arr[1000];
	int min, max;
	int amazing = 0;
	for (int i = 0; i < noOfContests; i++)
	{
		cin >> arr[i];
		if (i == 0) {
			min = max = arr[i];
		}
		else {
			if (arr[i] > max) {
				max = arr[i];
				amazing += 1;
			}
			else if (arr[i] < min) {
				min = arr[i];
				amazing += 1;
			}
			else {
				continue;
			}
		}
	}
	cout << amazing << endl;

}