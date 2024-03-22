#include <iostream>
using namespace std;
int main() {
	int n =0 ;
	int noOfUntreated = 0;
	cin >> n ; 
	int officers=0;
	int number=0;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number > 0) {
			officers += number;
		}
		else {
			if (officers == 0) {
				noOfUntreated += 1;
			}
			else {
				officers -= 1;
			}
		}
	}
	cout << noOfUntreated;
}