/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1433/problem/0
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

    ll x = n%10;
    ll y = 0;

    while(n>0) {
        n /= 10;
        y++;
    }

    ll ans = (x-1)*10;
    ans += (y*(y+1))/2;

    cout<<ans<<e;

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