#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	long totalNoOfFaces = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "Tetrahedron") {
			totalNoOfFaces += 4;
		}
		else if (s =="Cube") {
			totalNoOfFaces += 6;
		}
		else if (s == "Octahedron") {
			totalNoOfFaces += 8;
		}
		else if (s == "Dodecahedron") {
			totalNoOfFaces += 12;
		}
		else if (s == "Icosahedron") {
			totalNoOfFaces += 20;
		}
	}
	cout << totalNoOfFaces;
}