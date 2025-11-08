#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int l = arr[0];
	int j = 1;
	for(int i=0; i<n; i++){
		if(l > arr[i]){
			l = arr[i];
			j = i+1;
		}
	}

	cout << l << " " << j;
}
