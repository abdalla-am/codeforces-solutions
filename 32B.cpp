#include<iostream>
using namespace std;
int main() {
	string str;
	int counter=0;
	cin >> str;
	string output = "";
	while (counter < str.length()) {
		if (str[counter] == '.') {
			output = output + '0';
			counter += 1;
		}
		else if (str[counter] == '-') {
			if (str[counter+1] == '-') {
				output = output + '2';
				counter += 2;
			}
			else if (str[counter + 1] == '.') {
				output = output + '1';
				counter += 2;
			}
		}
	}
	cout << output << endl;
}