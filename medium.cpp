#include <bits/stdc++.h>

using namespace std;

// Galang, Mark Jason T.
// 201910574

void transform(unsigned long long int num) {
	string n1[21] = {"zero", "one", "two", "three", "four",
									 "five", "six", "seven", "eight", "nine",
									 "ten", "eleven", "twelve", "thirteen",
									 "fourteen", "fifteen", "sixteen", "seventeen",
									 "eighteen", "nineteen"};
	string n2[11] = {"", "ten", "twenty", "thirty", "forty", "fifty",
									 "sixty", "seventy", "eighty", "ninety"};
	if (num >= 1000000000000000000) {
		transform(num / 1000000000000000000);
		cout << " quintillion";
		if (num % 1000000000000000000) {
			cout << " ";
			transform(num % 1000000000000000000);
		}
	} else if (num >= 1000000000000000) {
		transform(num / 1000000000000000);
		cout << " quadrillion";
		if (num % 1000000000000000) {
			cout << " ";
			transform(num % 1000000000000000);
		}
	} else if (num >= 1000000000000) {
		transform(num / 1000000000000);
		cout << " trillion";
		if (num % 1000000000000) {
			cout << " ";
			transform(num % 1000000000000);
		}
	} else if (num >= 1000000000) {
		transform(num / 1000000000);
		cout << " billion";
		if (num % 1000000000) {
			cout << " ";
			transform(num % 1000000000);
		}
	} else if (num >= 1000000) {
		transform(num / 1000000);
		cout << " million";
		if (num % 1000000) {
			cout << " ";
			transform(num % 1000000);
		}
	} else if (num >= 1000) {
		transform(num / 1000);
		cout << " thousand";
		if (num % 1000) {
			cout << " ";
			transform(num % 1000);
		}
	} else if (num >= 100) {
		transform(num / 100);
		cout << " hundred";
		if (num % 100) {
			cout << " ";
			transform(num % 100);
		}
	} else if (num >= 20) {
		cout << n2[num / 10];
		if (num % 10) {
			cout << " ";
			transform(num % 10);
		}
	} else {
		cout << n1[num];
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	unsigned long long int n;
	cin >> n;
	transform(n);
	cout << '\n';
}
