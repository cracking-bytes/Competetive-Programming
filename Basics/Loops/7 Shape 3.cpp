#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}