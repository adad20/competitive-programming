#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	ll n;
	cin>>n;

	ll arr[n] = {0};

	for(ll i=0;i<n;i++) cin>>arr[i];

	ll a = 0, b = 1;
	bool executed = false;
		for(ll i=b+1;i<n;i++) {
			if(arr[i] >= arr[a]+arr[b] and !executed) {
				cout<<a+1<<" "<<b+1<<" "<<i+1<<"\n";
				executed = true;
				break;
			}
		}
	
	if(!executed) cout<<"-1\n";
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