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


void solve(){
    // Solve here
    ll w, h, n;
    cin>>w>>h>>n;
    ll ans = 1;

    while(!(w&1)) {
    	w/=2;
    	ans*=2;
    }

    while(!(h&1)) {
    	h/=2;
    	ans*=2;
    }
    // cout<<ans<<el;
    if(ans>=n) cout<<"YES\n";
    else cout<<"NO\n";
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