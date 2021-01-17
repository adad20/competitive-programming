#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n;
	cin>>n;

	vector<ll> arr;
	for(int i = 0;i<n;i++) {
		ll a;
		cin>>a;
		arr.pb(a);
	}
	vector<pair<ll, ll>> p;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]) {
			p.pb(make_pair(i, arr[i]));
		}
	}

	ll ans = 0;
	arr.pb(INT_MAX);
	p.pb(make_pair(n, INT_MAX));
	ll min = INT_MAX;
	for(int i=0;i<p.size()-1;i++) {
		int max = p[i].second;
		for(int j=p[i].first;j<=p[i+1].first;j++) {
			// cout<<arr[j]<<" ";
			if(arr[j]<min) min = arr[j];
			// cout<<min<<" ";
		}
		ans += (max-min);
		min = INT_MAX;
	}

	cout<<ans<<"\n";
	arr.clear();
	p.clear();
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