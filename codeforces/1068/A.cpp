#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define endl "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n
#define cel(n,k) ((n-1)/k+1)

void solve(){
    // Solve here
    ll n, m, k, l;
    cin>>n>>m>>k>>l;

    if(n<m || (l+k)>n){
        cout<<"-1"<<endl;
        return;
    }

    ll ans= cel(l+k,m);

    if(m*ans>n)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;
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