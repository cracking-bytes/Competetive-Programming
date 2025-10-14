#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        long long n;
        cin >> n;
        string s = to_string(n);
        for(int i=s.size()-1; i>=0; i--){
            char c = s[i];
            cout << c << " ";
        }
        cout << endl;
    }
}