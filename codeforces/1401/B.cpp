#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	ll a, b,c;
	cin>>a>>b>>c;

	ll x, y, z;
	cin>>x>>y>>z;

	int ans=0;

	ans += 2*min(c,y);
	c -= min(c,y); y -= min(c,y);
	if(z>a+c) {
		z -= (a+c);
		ans -= 2*(min(b,z));
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