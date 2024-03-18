#include <iostream>
#include <string>
using namespace std;
int main() {
	int noOfLines = 0 ;
	cin >> noOfLines;
	string words[100];
	for (int i = 0; i < noOfLines; i++)
	{
		cin >> words[i];
	}
	for (int i = 0; i < noOfLines; i++)
	{
		if (words[i].length() > 10) {
			char firstChar = words[i].at(0);
			char LastChar = words[i].back();
			int lenghtBetween = words[i].length() - 2;
			cout << firstChar << lenghtBetween << LastChar <<endl;
			
			

		}
		else {
			cout << words[i] << endl;
			continue;
		}
	}
}