/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1352/problem/B
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

    ll x = n-(k-1);
    ll y = n-(2*(k-1));

    if(x>0 and x&1) {
        cout<<"YES\n";
        for(int i=0;i<k-1;i++) {
            cout<<"1 ";
        }
        cout<<n-(k-1)<<e;
    }else if(y>0 and !(y&1)) {
        cout<<"YES\n";
        for(int i=0;i<k-1;i++) {
            cout<<"2 ";
        }
        cout<<n-2*(k-1)<<e;
    } else {
        cout<<"NO\n";
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
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}