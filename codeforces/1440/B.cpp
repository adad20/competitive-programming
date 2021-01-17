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
    int n, k;
    cin>>n>>k;

    ll arr[n*k];

    for(int i=0;i<n*k;i++) {
        cin>>arr[i];
    }

    sort(arr, arr+(n*k));

    ll ans = 0;
    int x = n&1?(n/2)+1:(n/2);
    x = n-x+1;
    int m = 0;

    for(int i=((n*k)-x);i>=0;i-=(x)) {
        if(m==k) break;
        ans += arr[i];
        m++;
    }

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