#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back


bool check(int r, int g, int b, int w) {
	return (r%2+g%2+b%2+w%2 > 1 )? false: true;
}

void solve(){
	// Solve here
	ll r, g, b, w;
	cin>>r>>g>>b>>w;

	if(check(r,g,b,w)) {
		cout<<"YES\n";
	}else if(r>0 and b>0 and g>0 and check(r-1,g-1,b-1,w+1)) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}

	


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