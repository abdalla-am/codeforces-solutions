#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b;
	int noOfYears = 0;
	cin >> a >> b;
	while (a < b || a == b) {
		a = a * 3;
		b = b * 2;
		noOfYears = noOfYears + 1;

	}

	cout << noOfYears;
}