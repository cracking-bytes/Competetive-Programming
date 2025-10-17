#include <bits/stdc++.h>
using namespace std;

int ss(int n, int a, int b){
    int fsum = 0;
    for (int i=1; i<=n; i++){
        string d = to_string(i);
        int sum = 0;
        for (char c : d){
            sum = sum + (c-'0');
        }
        if (a<=sum and sum<=b){
            fsum = fsum + i;
        }
    }
    cout << fsum;
    return 0;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    ss(n, a, b);
}
