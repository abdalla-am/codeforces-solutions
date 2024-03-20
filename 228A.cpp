#include<iostream>
#include<string>
using namespace std;
int main() {
	long colors[4];
	int similarColors = 0;
	for (int i = 0; i < 4; i++)
	{

		cin >> colors[i];
		for (int j = 0; j < i; j++)
		{
			if (colors[i] == colors[j] ) {
				similarColors += 1;
				break;
			}
		}
	}
	cout << similarColors << endl;
}