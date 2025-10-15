#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        // converting decimal to binary
        int o = n;
        int r;
        string b;
        while (o != 0)
        {
            r = o % 2;
            o = o / 2;
            b = to_string(r) + b;
        }

        // counting 1s in binary
        int cnt = count(b.begin(), b.end(), '1');

        // converting 1s binary to decimal
        int res = 0;
        for (int i = 0; i <= cnt - 1; i++)
        {
            res = res + pow(2, i);
        }

        cout << res << endl;
    }
}