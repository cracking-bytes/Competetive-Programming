// Find the unique number in a given Array where all the
// elements are being repeated twice with one value
// being unique.

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int &i:arr) cin >> i;

	for(int i=0; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			if(arr[i] == arr[j]){
				arr[i] = -1;
				arr[j] = -1;
			}
		}
	}

	for(int &i:arr) if(i>-1) cout << i;
}
