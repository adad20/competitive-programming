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


void solve(){
    // Solve here
    int n, k;
    cin>>n>>k;

    bool flag = false;
    for(int i=0;i<n;i++) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(b==c) {
            flag = true;
        }
    }

    if(!flag or (k&1)) {
        cout<<"NO\n";
    } else cout<<"YES\n";

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