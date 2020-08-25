#include <bits/stdc++.h>

using namespace std;

// Galang, Mark Jason T.
// 201910574

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == "ABCDEF") {
			v.emplace_back(0);
		} else if (s[i] == "BC") {
			v.emplace_back(1);
		} else if (s[i] == "ABDEG") {
			v.emplace_back(2);
		} else if (s[i] == "ABCDG") {
			v.emplace_back(3);
		} else if (s[i] == "BCFG") {
			v.emplace_back(4);
		} else if (s[i] == "ACDFG") {
			v.emplace_back(5);
		} else if (s[i] == "ACDEFG") {
			v.emplace_back(6);
		} else if (s[i] == "ABCF") {
			v.emplace_back(7);
		} else if (s[i] == "ABCDEFG") {
			v.emplace_back(8);
		} else if (s[i] == "ABCDFG") {
			v.emplace_back(9);
		}
	}
	bool vis[(int) v.size()];
	memset(vis, true, sizeof(vis));
	for (int i = 0; i < n; i++) {
		if (vis[i] == true) {
			for (int j = 0; j < n; j++) {
				if (v[i] == v[j]) {
					vis[j] = false;
					vis[i] = true;
				}
			}
		}
	}
	vector<int> nv;
	for (int i = 0; i < (int) v.size(); i++) {
		if (vis[i] == true) {
			nv.emplace_back(v[i]);
		}
	}
	vector<int> v2;
	for (auto x : nv) {
		if (x == 0) {
			v2.emplace_back(6);
		} else if (x == 1) {
			v2.emplace_back(2);
		} else if (x == 2) {
			v2.emplace_back(5);
		} else if (x == 3) {
			v2.emplace_back(5);
		} else if (x == 4) {
			v2.emplace_back(4);
		} else if (x == 5) {
			v2.emplace_back(5);
		} else if (x == 6) {
			v2.emplace_back(6);
		} else if (x == 7) {
			v2.emplace_back(4);
		} else if (x == 8) {
			v2.emplace_back(7);
		} else if (x == 9) {
			v2.emplace_back(6);
		}
	}
	int mn = *min_element(v2.begin(), v2.end());
	bool vis2[(int) v2.size()];
	memset(vis2, false, sizeof(vis2));
	for (int i = 0; i < (int) v2.size(); i++) {
		if (v2[i] == mn) {
			vis2[i] = true;
		}
	}
	for (int i = 0; i < (int) v2.size(); i++) {
		if (vis2[i] == true) {
			cout << nv[i] << " ";
		}
	}
	cout << '\n';
}
