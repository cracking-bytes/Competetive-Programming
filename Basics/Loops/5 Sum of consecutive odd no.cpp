#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int x, y;
        cin >> x >> y;
        if(x>y){
            int e = x;
            x = y;
            y = e;
        }
        int s = 0;
        for(int i=x; i<y; i++){
            if(i%2!=0 and i!=x and i!=y) s = s+i;
        }
        cout << s << endl;
    }
}