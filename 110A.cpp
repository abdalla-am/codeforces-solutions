#include<iostream>
#include<string>

using namespace std;
int main() {

	long long number = 0;
	int numberOfDigits = 0;
	int modulas = 10;
	cin >> number;
	bool done = false;

	while (done == false) {


		if (number % modulas == 7 || number % modulas == 4) {
			numberOfDigits = numberOfDigits + 1;
		}

		if (number / modulas == 0) {
			done = true;
		}
		number /= 10;

	}
	if (done == true && (numberOfDigits == 4 || numberOfDigits == 7)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}


}