#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// get the ceil value of n / 2
	// if n is even, then simply divide it by 2
	// otherwise, divide it by 2 and then add 1 (this is like using the ceil function)
	int tmp = (n % 2 == 0 ? n / 2 : n / 2 + 1);
	int pos = 0;
	int neg = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		// count the number of positive and negative numbers
		// we do this to determine if we'll use 1 or -1 as 'd'
		if (a > 0) {
			pos++;
		} else if (a < 0) {
			neg++;
		}
	}
	// check if which one is greater (positive or negative)
	if (pos > neg) {
		// if there are more positive values then we will check if those positive values
		// are greater than ceil(n / 2)
		cout << (pos >= tmp ? 1 : 0);
	} else {
		// if there are more negative values then we will check if those negative values
		// are greater than ceil(n / 2)
		cout << (neg >= tmp ? -1 : 0);
	}
	cout << '\n';
	return 0;
}
