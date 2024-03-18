#include<iostream>
#include<string>
using namespace std;
int main() {
	int n=0, h=0;
	int heights[1000];
	int totalWidth=0;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> heights[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (heights[i] > h) {
			totalWidth += 2;
		}
		else {
			totalWidth += 1;
		}
	}
	cout << totalWidth;
}
