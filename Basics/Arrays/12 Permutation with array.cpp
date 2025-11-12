#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];

	int b[n];
	for(int i=0; i<n; i++) cin >> b[i];

	sort(a, a+n);
	sort(b, b+n);

	int c = 0;
	for(int i=0; i<n; i++){
		if(a[i]==b[i]){
			c++;
		}
	}
	(c==n) ? cout << "yes" : cout << "no";
}
