#include <iostream>
using namespace std;
int main() {
	int noOfKilos = 0;
	cin >> noOfKilos;
	if (noOfKilos%2 == 0 && noOfKilos > 2 ) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}