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
    ll n, m;
    cin>>n>>m;

    vector<ll> frn(n);
    vector<ll> cst(m);

    for(ll i=0;i<n;i++) cin>>frn[i];
    for(ll i=0;i<m;i++) cin>>cst[i];

    ll ans = 0;

	sort(frn.begin(), frn.end(), cmp);
	ll j=0;
	for(ll i=0;i<n;i++) {
		if(frn[i]-1<j) ans+= cst[frn[i]-1];
		else {
			ans += cst[j];
			j++;
		}
	}

	cout<<ans<<el;

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