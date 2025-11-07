#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cin >> x;
	bool f = false;
	for(int i=0; i<n; i++){
		if(arr[i]==x){
			cout << i;
			f = true;
			break;
		}
	}

	if(f==false) cout << "-1";

}
