#include<iostream>
#include<string>
using namespace std;
int main() {
	int noOfDominoes;
	int M, N;
	cin >> M >> N;
	int totalSquares = M * N;
	if (totalSquares % 2 == 0) {
		noOfDominoes = totalSquares / 2;
	}
	else {
		noOfDominoes = (totalSquares - 1) / 2;
	}
	cout << noOfDominoes;
}