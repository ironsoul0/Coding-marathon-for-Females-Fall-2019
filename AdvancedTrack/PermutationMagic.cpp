#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const int INF = 2e9;
const int SIZE = 2e5 + 100;
 
#define sz(s) int(s.size())
 
#define pii pair<int, int>
 
#define mp make_pair
#define pb push_back
 
#define fi first
#define se second
 
#define all(c) c.begin(),c.end()
 
 
int main() {
 
	//freopen("a.out", "w", stdout);
 
 
	int n;
 
	cin >> n;
 
	ll a[n];
 
	for (int i = 0; i < n; i++)
		cin >> a[i];
 
	ll ans = 0;
 
	sort(a, a + n);
 
	for (int i = 0; i < n; i++) {
		ans += abs(a[i] - i - 1);	
	}
 
	cout << ans;
 
	return 0;
 
 
}