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
		maxD = max(maxD, a[i]);
	}

	sort(a.begin(), a.end(), [](int x, int y) {return x > y;});

	for (int i = 0; i < n; i++) {
		if (x == a[i]) {
			ans = min(ans, 1);
			break;
		}
	}

	if (2 * a[0] > x) {
		ans = min(ans, 2);
	}

	for (int i = 0; i < n; i++) {
		if (x % a[i] == 0) {
			ans = min(ans, x / a[i]);
			break;
		}
	}

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cout << solve() << endl;
	}
}