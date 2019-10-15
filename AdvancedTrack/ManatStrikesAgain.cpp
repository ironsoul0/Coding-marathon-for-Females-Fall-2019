#include <bits/stdc++.h>
  
using namespace std;
 
const int M = 1e9 + 7;
 
int main() {
	int n, k;
	cin >> n >> k;
	vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));
	vector<vector<int> > a(n + 1);
	for (int i = 1; i <= n; i++) {
		dp[1][i] = 1;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				a[i].push_back(j);
			}
		}
	}
	for (int i = 2; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			for (int p = 0; p < int(a[j].size()); p++) {
				int x = a[j][p];
				dp[i][j] += dp[i - 1][x];
				dp[i][j] %= M;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += dp[k][i];
		ans %= M;
	}
	cout << ans << '\n';
	return 0;
}