#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int cnt = 0;
	bool d = true;
	while(d==true){
		int c = 0;
		for(int i=0; i<n; i++){
			if(arr[i]%2==0){
				arr[i] = arr[i]/2;
				c++;
			}
		}
		if(c==n){
			cnt++;
			d = true;
		}
		else if(c!=n){
			d = false;
			break;
		}
	}
	cout << cnt;
}
