#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int s = 1;
	while(s>0){
		s=0;
		for(int i=0; i<n-1; i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i], arr[i+1]);
				s++;
			}
		}
	}

	for(int i=0; i<n; i++) cout << arr[i] << " ";
}
