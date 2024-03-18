#include<iostream>
#include<string>
using namespace std;


string toUpper(string str)
{

	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i]) {
		case 'a': str[i] = 'A'; break;
		case 'b': str[i] = 'B'; break;
		case 'c': str[i] = 'C'; break;
		case 'd': str[i] = 'D'; break;
		case 'e': str[i] = 'E'; break;
		case 'f': str[i] = 'F'; break;
		case 'g': str[i] = 'G'; break;
		case 'h': str[i] = 'H'; break;
		case 'i': str[i] = 'I'; break;
		case 'j': str[i] = 'J'; break;
		case 'k': str[i] = 'K'; break;
		case 'l': str[i] = 'L'; break;
		case 'm': str[i] = 'M'; break;
		case 'n': str[i] = 'N'; break;
		case 'o': str[i] = 'O'; break;
		case 'p': str[i] = 'P'; break;
		case 'q': str[i] = 'Q'; break;
		case 'r': str[i] = 'R'; break;
		case 's': str[i] = 'S'; break;
		case 't': str[i] = 'T'; break;
		case 'u': str[i] = 'U'; break;
		case 'v': str[i] = 'V'; break;
		case 'w': str[i] = 'W'; break;
		case 'x': str[i] = 'X'; break;
		case 'y': str[i] = 'Y'; break;
		case 'z': str[i] = 'Z'; break;
		default:break;
		}
	}
	
	return str;
}

string toLower(string str)
{

	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i]) {
		case 'A': str[i] = 'a'; break;
		case 'B': str[i] = 'b'; break;
		case 'C': str[i] = 'c'; break;
		case 'D': str[i] = 'd'; break;
		case 'E': str[i] = 'e'; break;
		case 'F': str[i] = 'f'; break;
		case 'G': str[i] = 'g'; break;
		case 'H': str[i] = 'h'; break;
		case 'I': str[i] = 'i'; break;
		case 'J': str[i] = 'j'; break;
		case 'K': str[i] = 'k'; break;
		case 'L': str[i] = 'l'; break;
		case 'M': str[i] = 'm'; break;
		case 'N': str[i] = 'n'; break;
		case 'O': str[i] = 'o'; break;
		case 'P': str[i] = 'p'; break;
		case 'Q': str[i] = 'q'; break;
		case 'R': str[i] = 'r'; break;
		case 'S': str[i] = 's'; break;
		case 'T': str[i] = 't'; break;
		case 'U': str[i] = 'u'; break;
		case 'V': str[i] = 'v'; break;
		case 'W': str[i] = 'w'; break;
		case 'X': str[i] = 'x'; break;
		case 'Y': str[i] = 'y'; break;
		case 'Z': str[i] = 'z'; break;
		default:break;
		}
	}

	return str;
}

int main() {
	string  str;
	int noOfUpper = 0;
	int noOfLower = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i]) {
		case 'a': noOfLower += 1; break;
		case 'b': noOfLower += 1; break;
		case 'c': noOfLower += 1; break;
		case 'd': noOfLower += 1; break;
		case 'e': noOfLower += 1; break;
		case 'f': noOfLower += 1; break;
		case 'g': noOfLower += 1; break;
		case 'h': noOfLower += 1; break;
		case 'i': noOfLower += 1; break;
		case 'j': noOfLower += 1; break;
		case 'k': noOfLower += 1; break;
		case 'l': noOfLower += 1; break;
		case 'm': noOfLower += 1; break;
		case 'n': noOfLower += 1; break;
		case 'o': noOfLower += 1; break;
		case 'p': noOfLower += 1; break;
		case 'q': noOfLower += 1; break;
		case 'r': noOfLower += 1; break;
		case 's': noOfLower += 1; break;
		case 't': noOfLower += 1; break;
		case 'u': noOfLower += 1; break;
		case 'v': noOfLower += 1; break;
		case 'w': noOfLower += 1; break;
		case 'x': noOfLower += 1; break;
		case 'y': noOfLower += 1; break;
		case 'z': noOfLower += 1; break;

		case 'A': noOfUpper += 1; break;
		case 'B': noOfUpper += 1; break;
		case 'C': noOfUpper += 1; break;
		case 'D': noOfUpper += 1; break;
		case 'E': noOfUpper += 1; break;
		case 'F': noOfUpper += 1; break;
		case 'G': noOfUpper += 1; break;
		case 'H': noOfUpper += 1; break;
		case 'I': noOfUpper += 1; break;
		case 'J': noOfUpper += 1; break;
		case 'K': noOfUpper += 1; break;
		case 'L': noOfUpper += 1; break;
		case 'M': noOfUpper += 1; break;
		case 'N': noOfUpper += 1; break;
		case 'O': noOfUpper += 1; break;
		case 'P': noOfUpper += 1; break;
		case 'Q': noOfUpper += 1; break;
		case 'R': noOfUpper += 1; break;
		case 'S': noOfUpper += 1; break;
		case 'T': noOfUpper += 1; break;
		case 'U': noOfUpper += 1; break;
		case 'V': noOfUpper += 1; break;
		case 'W': noOfUpper += 1; break;
		case 'X': noOfUpper += 1; break;
		case 'Y': noOfUpper += 1; break;
		case 'Z': noOfUpper += 1; break;
		default:break;
		}
	}

	if (noOfUpper > noOfLower) {
		str=toUpper(str);
	}
	else if (noOfUpper < noOfLower) {
		str=toLower(str);
	}
	else {
		str=toLower(str);
	}

	cout << str;
}