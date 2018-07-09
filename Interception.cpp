#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin >> t;
	for (auto i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		cin >> n;
		int coef, npow = 0;
		for (auto j = 0; j < n; j++) {
			cin >> coef;
			if (0 == npow) npow = 1; 
			else npow = 0;
		}
		cin >> coef;
		if (npow != 0) {
			cout << 1 << endl;
			cout << 0 << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}
