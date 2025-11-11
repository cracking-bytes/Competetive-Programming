#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int max = arr[0];
	int min = arr[0];
	int ax = 0;
	int in = 0;

	for(int i=1; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
			ax = i;
		}
		if(min>arr[i]){
			min = arr[i];
			in = i;
		}
	}

	swap(arr[ax], arr[in]);

	for(int i=0; i<n; i++) cout << arr[i] << " ";

}
