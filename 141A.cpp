#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s1 ,s2 ,sfinal ,S;
	cin >> s1>> s2>> sfinal;
	S = s1 + s2;
	sort(S.begin(), S.end());
	sort(sfinal.begin(), sfinal.end());
	if (S == sfinal)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	
}