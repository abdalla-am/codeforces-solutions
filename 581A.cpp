#include<iostream>
using namespace std;
int main() {
	int red, blue;
	int fashionable=0;
	int nonFashionable=0;
	cin >> red>> blue;
	while (red + blue != 0 && red + blue != 1) {
		if (red != 0 && blue != 0) {
			red--;
			blue--;
			fashionable += 1;
		}
		else if (red!=0 && blue==0) {
			red -= 2;
			nonFashionable += 1;
		}
		else if (red == 0 && blue != 0) {
			blue -= 2;
			nonFashionable += 1;
		}
	}
	cout << fashionable << " " << nonFashionable << endl;
}