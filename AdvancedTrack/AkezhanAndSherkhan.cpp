#include <bits/stdc++.h>
using namespace std;
 
long long n, x, ans, a[10000000], p[10000000];
 
int main(){
//	freopen("C.in", "r", stdin);
//	freopen("C.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x;
	for (long long i=1; i<=n; i++){
		cin >> a[i];
		ans+=p[a[i]^x];
		p[a[i]]++;          	
	}
  cout << ans;
	return 0;	
}