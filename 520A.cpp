#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	int n = 0;
	string s;
	set<char> sSet;

	cin >> n;
	cin >> s;


	if (s.size() < 26) {
		cout << "NO";
	}
	else {
		for (int i = 0; i < n; i++)
		{

			//change from upper case to lower case
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 'a' - 'A'; 
			}
			sSet.insert(s[i]);
		}

		if (sSet.size() == 26)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


}