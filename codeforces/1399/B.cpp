#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n;
	cin>>n;
	vector<int> a;
	vector<int> b;
	ll amin = INT_MAX;
	ll bmin = INT_MAX;
	for(int i=0;i<n;i++) {
		ll x;
		cin>>x;
		a.pb(x);
		if(x<amin) amin = x;
	}
	for(int i=0;i<n;i++) {
		ll x;
		cin>>x;
		b.pb(x);
		if(x<bmin) bmin = x;
	}

	ll ans = 0;
	for(int i=0;i<n;i++) {
		a[i] -= amin;
		b[i] -= bmin;

		ans += max(a[i], b[i]);
	}

	cout<<ans<<endl;

}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}