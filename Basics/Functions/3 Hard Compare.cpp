#include <bits/stdc++.h>
using namespace std;

double test(long long a, long long b){
	double res = b * log(a);
	return res;
}

int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	double x = test(a, b);
	double y = test(c, d);
	(x>y) ? cout << "YES" : cout << "NO";
}
