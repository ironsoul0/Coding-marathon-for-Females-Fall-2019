#include <bits/stdc++.h>
 
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define gold 0
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define freopen(x) freopen(x".in", "r", stdin), freopen (x".out", "w", stdout);
#define ex exit(0)
 
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
 
typedef long long ll;
typedef pair<int, int> pii;
 
const int N = (int) 1e6 + 7;
const int MOD = (int) 1e9 + 7;
const int INF = 2e9;
const ll BIG = 1e5;
const int P = 700;
 
vector<int> l;
 
void gen(int val = 0) {
	if (val <= 100000 && val != 0) {
		l.pb(val);
	}
	if (val > 100000)
		return;
	gen(val * 10 + 4), gen(val * 10 + 7);
}
 
int main() {	
	gen();
	int n;
	cin >> n;
	for (auto x : l)
		if (n % x == 0) return puts("YES");
	puts("NO");	
	return 0;
}