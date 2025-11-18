// Count the no. of triplets whose sum is equal to the given value x

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;

	int arr[n];
	for(int &i : arr) cin >> i;

	int c = 0;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				if(arr[i] + arr[j] + arr[k] == x) c++;
			}
		}
	}

	cout << c;
}
