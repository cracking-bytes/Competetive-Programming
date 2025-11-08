#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int arr2[n];
	int j = 0;
	for(int i=n-1; i>=0; i--){
		arr2[j] = arr[i];
		j++;
	}

	int c = 0;
	for(int i=0; i<n; i++){
		// cout << arr[i] << "=" << arr2[i] << endl;
		if(arr[i] == arr2[i]) c++;
	}

	(c==n) ? cout << "YES" : cout << "NO";
}
