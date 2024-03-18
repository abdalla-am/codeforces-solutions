//#include <iostream>
//#include<string>
//using namespace std;
//int main() {
//	int n = 0;   // no of participants
//	int k = 0;   //
//	int playersScores[50];
//	int playersWillAdvance = 0;
//	int noOfZeroes = 0;
//	cin >> n >> k;
//	for (int i = 0; i < n; ++i)
//	{
//		int no;
//		cin >> no;
//		if (no > 0) {
//			playersScores[i]=no;
//
//			for (int j = 0; j < i; j++)
//			{
//				if (playersScores[i] > playersScores[j]) {
//					int biggerNumber = playersScores[i];
//					playersScores[i] = playersScores[j];
//					playersScores[j] = biggerNumber;
//				}
//			}
//		}
//		else {
//
//			noOfZeroes = noOfZeroes + 1;
//			continue;
//
//
//		}
//
//	}
//	int minScoreToAdvance = playersScores[k-1];
//	for (int i = 0; i < n-noOfZeroes; i++)
//	{
//		if (playersScores[i] >= minScoreToAdvance) {
//			playersWillAdvance = playersWillAdvance + 1;
//		}
//
//	}
//	cout << playersWillAdvance;
//}

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}