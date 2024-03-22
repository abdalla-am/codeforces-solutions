#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfCandiees = 0;
	//long output[1000];
	long test;
	cin >> noOfCandiees;
	for (int i = 0; i < noOfCandiees; i++)
	{
		cin >> test;
		if (test == 2 || test == 1) {
			cout<< 0 <<endl;
			continue;
		}
		if (test % 2 == 0 && test != 0) {
			cout<< test / 2 - 1 <<endl;
		}
		else if (test % 2 != 0 && test != 0) {
			cout << test / 2 << endl; ;
		}
	}
	
	
}