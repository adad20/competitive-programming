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
    if(n==1) cout<<0<<e;
    else if(n==2) cout<<1<<e;
    else if(n%2 == 0 or(n==3)) {
        cout<<2<<e;
    } else if(n%3==0) {
        cout<<3<<e;
    } else {
        if((n-1)%2==0) cout<<3<<e;
        else if((n-1)%3==0) cout<<4<<e;
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