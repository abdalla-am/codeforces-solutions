#include<iostream>
#include<string>
using namespace std;
int main() {
	int k, n, w;
	int totalMoneyNeeded = 0;
	int moneyBorrowed = 0;

	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
	{
		totalMoneyNeeded += (i * k);
	}
	if (totalMoneyNeeded <= n) {
		moneyBorrowed = 0;
	}
	else {
		moneyBorrowed = totalMoneyNeeded - n;
	}

	cout << moneyBorrowed;
}