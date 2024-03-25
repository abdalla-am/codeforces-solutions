#include<iostream>
using namespace std;
int main() {
	int testCasesNo;
	string str;
	cin >> testCasesNo;
	for (int i = 0; i < testCasesNo; i++)
	{
		cin >> str;
			for (int i = 0; i < 3; i++)
			{
				//convert upper to all lower
				if (str[i] >= 'A' && str[i] <= 'Z') {
					str[i] += 'a' - 'A';
				}
			}
			if (str == "yes") {
				cout << "YES"<<endl;
			}
			else {
				cout << "NO"<<endl;
			}
	}
}