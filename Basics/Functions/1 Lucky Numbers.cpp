#include <bits/stdc++.h>
using namespace std;

int ln(int a, int b){
    bool res = true;
    bool found = false;
    for (int i=a; i<=b; i++){
        res = true;
        string n = to_string(i);
        for (char c : n){
            if (c != '4' and c != '7'){
                res = false;
                break;
            }
        }
        if (res == true){
            cout << i << " ";
            found = true;
        }
    }
    if (found == false){
        cout << -1;
    }
    cout << endl;
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;
    ln(a, b);
}