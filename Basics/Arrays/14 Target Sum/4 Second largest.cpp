// Find the second largest element in the given array

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int &i:arr) cin >> i;

	int max = 0;
	for(int i=1; i<=n; i++){
		if(arr[max]<arr[i]){
			max = i;
		}
	}
	arr[max] = -1;

	cout << *max_element(arr, arr+n);
}
