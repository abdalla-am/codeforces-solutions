#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int rank = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> rank;
		if (rank >= 1900) {
			cout << "Division 1" << endl;
		}
		else if (rank<1900 &&rank >=1600) {
			cout << "Division 2" << endl;
		}
		else if (rank < 1600 && rank >= 1400) {
			cout << "Division 3" << endl;

		}
		else if (rank < 1400 ) {
			cout << "Division 4" << endl;

		}
	}
}