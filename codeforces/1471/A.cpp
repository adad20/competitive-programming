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
    ll n, k;
    cin>>n>>k;

    vector<ll> v(n);
    ll sum = 0;
    ll temp;
    ll max = 0;
    for(ll i=0;i<n;i++) {
    	cin>>v[i];
    	sum += v[i];
    	max += ceil((double)v[i]/(double)k);
    }

    ll min = ceil((double)(sum)/(double)(k));
    
    cout<<min<<" "<<max<<el;

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