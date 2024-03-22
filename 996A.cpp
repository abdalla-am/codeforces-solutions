#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int output = 0;
	while (n != 0) {
		if (n >= 100) {
			output += 1;
			n -= 100;
		}
		else if (n >= 20) {
			output += 1;
			n -= 20;
		}
		else if (n >= 10) {
			output += 1;
			n -= 10;
		}
		else if (n >= 5) {
			output += 1;
			n -= 5;
		}
		else if (n >= 1) {
			output += 1;
			n -= 1;
		}
	}
	cout << output;
}
