#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i=1; i<=t; i++){
		int n;
		cin >> n;

		int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];

		int sum = 0;
		int s = 0;
		for(int p=n-1; p>=1; p--) s = s + p;
		// cout << s;
		int sums[s];

		int si = 0;
		for(int i=1; i<=n; i++){
			for(int j=i+1; j<=n; j++){
				sum = arr[i-1] + arr[j-1] + j - i;
				// cout << sum << " ";
				sums[si++] = sum;
			}
		}

		// cout << endl;
		// for(int i=0; i<s; i++) cout << sums[i] << " ";
		int res = *min_element(sums, sums+s);
		cout << res << endl;
	}
}
