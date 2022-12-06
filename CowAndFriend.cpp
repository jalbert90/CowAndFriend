#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
	int n, x, ans = 1e9 + 5, maxD = 0;
	cin >> n >> x;

	vector<int> a(n);

	bool oneHop = false;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] == x) oneHop = true;

		maxD = max(maxD, a[i]);
	}

	if (oneHop) return 1;

	//sort(a.begin(), a.end(), [](int x, int y) {return x > y;});

	int count = 0;
	
	if (x % maxD == 0) {
		ans = x / maxD;
		return ans;
	}
	else if (maxD < x) {
		count = x / maxD;
	}
	else {
		count = 1;
	}

	ans = count + 1;

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cout << solve() << endl;
	}
}