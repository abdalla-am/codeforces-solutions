#include<iostream>
#include<string>
using namespace std;



int main() {
	long long n = 0;
	long long answer = 0;
	cin >> n;
	long long tempn = n;
	long long initialvalue = 0;


	//one function can be done instead of all this while loops .... give it a try :)
	while (tempn >= 1000000000000000) {
		tempn -= 1000000000000000;
		answer += 500000000000000;
		initialvalue += 1000000000000000;
	}

	while (tempn >= 1000000000)
	{
		tempn -= 1000000000;
		answer += 500000000;
		initialvalue+= 1000000000;
	}

	while (tempn >= 100000000)
	{
		tempn -= 100000000;
		answer += 50000000;
		initialvalue += 100000000;
	}

	while (tempn >= 10000000)
	{
		tempn -= 10000000;
		answer += 5000000;
		initialvalue += 10000000;
	}

	for (long long i = initialvalue + 1; i <= n; i++)
	{
		if (i % 2 != 0) {
			answer += (-i);
		}
		else {
			answer += i;
		}

	}

	cout << answer;
}