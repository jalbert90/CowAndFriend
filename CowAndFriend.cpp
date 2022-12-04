#include <iostream>
#include <vector>

using namespace std;

int solve() {
	int n, x;
	cin >> n >> x;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	return 0;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cout << solve() << endl;
	}
}