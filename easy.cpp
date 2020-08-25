#include <bits/stdc++.h>

using namespace std;

// Galang, Mark Jason T.
// 201910574

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[45], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int b[45 * 2];
	for (int i = 0; i < n; i++) {
		b[a[i]]++;
	}
	int mx = 0, tmp = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] > mx) {
			mx = b[i];
			tmp = i;
		}
	}
	cout << tmp << '\n';
}
