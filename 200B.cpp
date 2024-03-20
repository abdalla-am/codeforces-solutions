#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	int orangePercentageInDrink[100] = {};
	int  sum = 0;
	float volume;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> orangePercentageInDrink[i];
		sum += orangePercentageInDrink[i];

	}
	volume = (float(sum) /(float(n)*100)) * 100;
	cout << volume;

}