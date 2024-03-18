#include<iostream>
#include<string>
using namespace std;
int main() {
	int matrix[5][5];
	int totalNoOfSwaps = 0;
	int rowIndex ;
	int columnIndex ;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
			if (matrix[i][j] == 1) {
				rowIndex = i;
				columnIndex = j;
			}
		}
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

		}
	}





	int rowSwaps=0;
	switch (rowIndex)
	{
	case 0:rowSwaps = 2, matrix[2][columnIndex] = 1, matrix[0][columnIndex] = 0; break;
	case 1:rowSwaps = 1, matrix[2][columnIndex] = 1, matrix[1][columnIndex] = 0; break;
	case 2:rowSwaps = 0, matrix[2][columnIndex] = 1, matrix[2][columnIndex] = 0; break;
	case 3:rowSwaps = 1, matrix[2][columnIndex] = 1, matrix[3][columnIndex] = 0; break;
	case 4:rowSwaps = 2, matrix[2][columnIndex] = 1, matrix[4][columnIndex] = 0; break;
	}

	int columnSwaps=0;
	switch (columnIndex)
	{
	case 0: columnSwaps = 2; break;
	case 1: columnSwaps = 1; break;
	case 2: columnSwaps = 0; break;
	case 3: columnSwaps = 1; break;
	case 4: columnSwaps = 2; break;
	}

	totalNoOfSwaps = rowSwaps + columnSwaps;
	cout << totalNoOfSwaps;
}