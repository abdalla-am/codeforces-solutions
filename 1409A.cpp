#include<iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == b)
            cout << 0 << "\n";
        else
        {
            int greater = (a > b ? a : b);
            int less = (a > b ? b : a);
            cout << abs(greater - less) / 10 + (abs(greater - less) % 10 > 0 ? 1 : 0) << endl;
        }
    }


}