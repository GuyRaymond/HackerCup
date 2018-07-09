#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (auto i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		string word;
		getline(cin, word);
		int len = word.length();
		vector<int> head;
		head.reserve(len);
		head.push_back(0);
		for (int j = 1; j < len; j++) {
			if (word[0] == word[j]) head.push_back(j);
		}
		int hlen = head.size();
		if (1 == hlen || len == hlen) {
				cout << "Impossible" << endl;
		} else {
			bool possible = false;
			int j = hlen - 1, hjlen;
			while (!possible && 0 < j) {
                                hjlen = len - head[j];
				for (int k = 1; !possible && k < hjlen; k++) possible = word[head[j]+k] != word[k];
				j--;
			}
			if (possible) 	cout << word.substr(0,head[j+1])+ word << endl;
			else cout << "Impossible" << endl;
		}
	}
	return 0;
}
