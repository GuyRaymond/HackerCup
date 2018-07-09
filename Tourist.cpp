#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t,k,n,v,first,last;
	cin >> t;
	for (auto i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		cin >> n >> k >> v;
		last = (k*v-1)%n;
		first = last-k+1;
		vector<string> vec(n);
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		for (auto j = 0; j < n ; j++) getline(cin, vec[j]);
		if (0 <= first ) {
			for (auto j = first;  j < last; j++) cout << vec[j] << " ";
			cout << vec[last] << endl;
		} else {
			for (auto j = 0;  j <= last; j++) cout << vec[j] << " ";
		    first = (k*(v-1))%n;
			last = n-1;
			for (auto j = first;  j < last; j++) 
				cout << vec[j] << " ";
			cout << vec[last] << endl;
		}
		
	}
	return 0;
}
