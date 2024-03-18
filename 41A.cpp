#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	string translationGiven;
	string translationCheck = {};
	cin >> word >> translationGiven;
	for (int i = word.length()-1; i >= 0; i--)
	{
			translationCheck = translationCheck + word[i];
	}

	if (translationCheck == translationGiven) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}