#include<iostream>
#include<string>
using namespace std;

string tolowerFirstLetter(string str)
{


	switch (str[0]) {
	case 'a': str[0] = 'A'; break;
	case 'b': str[0] = 'B'; break;
	case 'c': str[0] = 'C'; break;
	case 'd': str[0] = 'D'; break;
	case 'e': str[0] = 'E'; break;
	case 'f': str[0] = 'F'; break;
	case 'g': str[0] = 'G'; break;
	case 'h': str[0] = 'H'; break;
	case 'i': str[0] = 'I'; break;
	case 'j': str[0] = 'J'; break;
	case 'k': str[0] = 'K'; break;
	case 'l': str[0] = 'L'; break;
	case 'm': str[0] = 'M'; break;
	case 'n': str[0] = 'N'; break;
	case 'o': str[0] = 'O'; break;
	case 'p': str[0] = 'P'; break;
	case 'q': str[0] = 'Q'; break;
	case 'r': str[0] = 'R'; break;
	case 's': str[0] = 'S'; break;
	case 't': str[0] = 'T'; break;
	case 'u': str[0] = 'U'; break;
	case 'v': str[0] = 'V'; break;
	case 'w': str[0] = 'W'; break;
	case 'x': str[0] = 'X'; break;
	case 'y': str[0] = 'Y'; break;
	case 'z': str[0] = 'Z'; break;
	default:break;
	}
	return str;
}
int main() {
	string str;
	cin >> str;
	cout << tolowerFirstLetter(str);

}
