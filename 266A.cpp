#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfStones = 0;
	string Sequence;
	int minimumNumberOfStones = 0;

	cin >> noOfStones;
	cin >> Sequence;

	for (int i = 0; i < noOfStones; i++)
	{
		if (Sequence[i]==Sequence[i+1]) {
			minimumNumberOfStones++;
		}
	}
	cout << minimumNumberOfStones;
}