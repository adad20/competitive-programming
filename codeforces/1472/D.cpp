/*
    Author: Zeno_orz
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define el "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n

bool cmp(ll a, ll b) {
	return a>b;
}

void solve(){
    // Solve here
    ll n;
    cin>>n;

    vector<ll> v(n);

    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(), v.end(), cmp);
	ll a_s = 0, b_s = 0;
	for(ll i=0;i<n;i++) {
		if((i&1) and v[i]&1) {
			b_s += v[i];
		} else if(!(v[i]&1) and !(i&1)) {
			a_s+=v[i];
		}
	}
	// cout<<a_s<<" "<<b_s<<" ";
	if(a_s>b_s) cout<<"Alice\n";
	else if(a_s<b_s) cout<<"Bob\n";
	else cout<<"Tie\n";

}

int32_t main() {

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