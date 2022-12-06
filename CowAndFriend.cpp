#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
	int n, x, ans = 1e9 + 5, maxD = 0;
	cin >> n >> x;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		if (a[i] == x) return 1;

		maxD = max(maxD, a[i]);
	}

	//sort(a.begin(), a.end(), [](int x, int y) {return x > y;});

	int count = 0;
	while (x - 2 * maxD > 0) {
		x = x - maxD;
		count++;
	}

	ans = count + 2;

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cout << solve() << endl;
	}
}