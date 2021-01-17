/*
    Author: saiyan_01
    Problem Statement : 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define e "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    ll n;
    cin>>n;

    vector<ll> v(n);

    ll sum = 0;

    for(ll i=0;i<n;i++) {
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    ll x = n-1;
    ll y = ceil((double)sum/(double)x);
    ll z = x*y;

    if(v[n-1]>y){
        z = v[n-1]*x;
    }

    cout<<z-sum<<e;

    // if()
    // if(sum == 0) {
    //     cout<<0<<e;
    //     return;
    // }
    // if(sum<=max) {
    //     sum *= 2;
    //     ll x = sum-max;
    //     cout<<x<<e;

    // } else {
    //     cout<<(sum%max)<<e;
    // }
    // v.clear();
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