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


		for(int t=0; t<n; t++){ // start index
			int s = 1;

			for(int i=t; i<n; i++){ // end index
				int sa[s++]; // size of sa with s
				int k = 0;
				// cout << "s " << (sizeof(sa)/sizeof(sa[0])) << endl << "i " << i;

				for(int j=t; j<=i; j++){ // elements
					// cout << endl << "j "<< j << endl;
					sa[k++] = arr[j];
					// cout << sa[j] << " ";
				}
				cout << *max_element(sa, sa+s-1) << " ";
			}
		}
		cout << endl;
	}
}
