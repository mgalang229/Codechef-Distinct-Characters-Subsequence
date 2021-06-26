#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// store the first character of string 's' to string 'cur' (keep track of characters)
		string cur = string(1, s[0]);
		// set 'cnt' to 1
		int cnt = 1;
		for (int i = 1; i < (int) s.size(); i++) {
			// check if the current letter is not found in the 'cur' string (distinct)
			if (cur.find(s[i]) == string::npos) {
				// if yes, then concatenate the current letter to string 'cur'
				cur += s[i];
				// increment 'cnt'
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
