
//Fox And Snake
#include<iostream>
#include<string>
using namespace std;
int main() {
	bool hashatFirst = false;
	int row, column;
	cin >> row >> column;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (i % 2 == 0) {
				cout << "#";
			}
			else {
				if (hashatFirst == false) {
					for (int x = 0; x < column - 1; x++)
					{
						cout << ".";
					}
					cout << "#";
					hashatFirst = true;
					break;
				}
				else if (hashatFirst == true) {
					cout << "#";
					for (int x = 0; x < column - 1; x++)
					{
						cout << ".";
					}
					hashatFirst = false;
					break;
				}

			}
		}
		cout << endl;
	}
}