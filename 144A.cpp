#include <iostream>
using namespace std;

int main() {
	int n;
	int maxValue = 0;
	int minValue = 1000;
	int maxIndex = 0;
	int minIndex = 0;


	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > maxValue) {
			maxIndex = i;
			maxValue = x;
		}
		if (x <= minValue) {
			minIndex = i;
			minValue = x;
		}
	}

	// 10 10 58 31 63 40 76
	if (maxIndex > minIndex) {
		cout << maxIndex + (n - 1 - minIndex) - 1;
	}
	else {
		cout << maxIndex + (n - 1 - minIndex);

	}
}