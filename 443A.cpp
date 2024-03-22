#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	string s;
	set<char> sSet;
	getline(cin, s);
	if (s.size() != 2) {
		for (int i = 1; i < s.size(); i += 3)
		{
			sSet.insert(s[i]);
		}
	}
	cout << sSet.size();
}