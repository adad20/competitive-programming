/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/432/A
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
    ll n, k;
    cin>>n>>k;
    set<ll> s;
    for(ll i=1;i<=n;i++) {
        ll x;
        cin>>x;
        bool flag = 0;
        for(ll j=0;j<x;j++) {
            ll a;
            cin>>a;

            if(k>a) flag = 1;
        }

        if(flag) s.insert(i);
    }

    cout<<s.size()<<e;
    for(auto i:s) {
        cout<<i<<" ";
    }
}

int32_t main() {

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