#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	ll n, k;

	cin>>n>>k;
	vector<ll> v;
	ll max = LONG_MIN;
	for(ll i=0;i<n;i++) {
		ll a;
		cin>>a;

		if(a>max) max = a;
		
		v.pb(a);
	}

	ll i=0;
	ll tmax = LONG_MIN;
	if(k%2 == 0) k = 2;
	else k = 1;
	while(k--) {

		for(int i=0;i<n;i++) {
			v[i] = max-v[i];
			if(v[i]>tmax) tmax = v[i];
		}

		max = tmax;
		tmax = 0;
	}

	for(int i=0;i<n;i++) {
		cout<<v[i]<<" ";
	}
	cout<<"\n";


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