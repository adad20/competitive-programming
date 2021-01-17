#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n;
	cin>>n;

	ll arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr, arr+n);

	ll max = ll(1e14);
	ll smax = max;
	ll itr = 1;

	while(1) {
		ll v = 0, pow_val = 1;
		bool falg = 0;
		for(ll i=0;i<n;i++) {
			if(pow_val >= max) {
				falg = 1;
				break;
			}
			v += abs(pow_val-arr[i]);
			pow_val *= itr;
		}
		if(falg) break;
		smax = min(smax, v);
		itr++;
	}


	cout<<smax<<endl;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}