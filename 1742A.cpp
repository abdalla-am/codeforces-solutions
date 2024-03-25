#include<iostream>
using namespace std;
int main() {
	int nTests = 0;
	int a=0, b=0, c=0;
	cin >> nTests;
	for (int i = 0; i < nTests; i++)
	{
		cin >> a>> b>> c;
		if (a + b == c || a+c==b || b+c==a) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}