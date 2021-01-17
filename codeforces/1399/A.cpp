#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int c;
		cin>>c;
		v.pb(c);
	}
	sort(v.begin(), v.end());
	bool executed = false;
	for(int i=0;i<v.size()-1;i++) {
		int diff = v[i]>v[i+1]?v[i]-v[i+1]:v[i+1]-v[i];
		if(diff>1) {
			cout<<"NO\n";
			executed = true;
			break;
		}
	}
	if(!executed) cout<<"YES\n";
	v.clear();
}

int main() {

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
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