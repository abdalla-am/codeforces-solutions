#include<iostream>
#include<string>
using namespace std;

int main() {
	string operation;
	cin >> operation;
	for (int i = 0; i < operation.length(); i+=2)
	{
		for (int j = i; j > 0; j-=2)
		{
			if (operation[j] < operation[j - 2]) {
				int bigger = operation[j - 2];
				operation[j - 2] = operation[j];
				operation[j] = bigger;
			}
		}
	}
	
	cout << operation;
}