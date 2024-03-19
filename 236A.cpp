#include<iostream>
#include<string>
using namespace std;
int main() {
	string name;
	int noOfDistinct = 0;
	int nonDistinct = 0;
	char nonDistinctChars[25] = {};
	bool Distinct = true;
	cin >> name;
	int j = 0;


	for (int i = 0; i < name.length(); i++)
	{
		j = 0;
		for (int x = 0; x < nonDistinct; x++)
		{
			if (name[i] == nonDistinctChars[x]) {
				Distinct = false;
			}
		}

		while (j < name.length() && Distinct == true)
		{
			j++;

			if (i == j) {
				continue;
			}
			else {

				if (name[i] == name[j]) {
					nonDistinctChars[nonDistinct] = name[i];
					nonDistinct += 1;
					break;
				}
			}

			if (j == name.length() - 1 && name[i] != name[j]) {
				//cout << name[i]<<"   " << name[j]<<endl;
				noOfDistinct += 1;
			}

		}
		Distinct = true;
	}




	bool dontAdd = false;
	for (int i = 0; i < nonDistinct; i++)
	{
		if (name[name.length() - 1] == nonDistinctChars[i]) {
			dontAdd = true;
		}

	}
	if (dontAdd == false) {
		noOfDistinct += 1;
	}


	//
	//cout << "nonDistinct=" << nonDistinct << endl;
	//cout <<"noOfDistinct" << noOfDistinct<< endl;

	noOfDistinct = noOfDistinct + nonDistinct;
	if (noOfDistinct % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}

