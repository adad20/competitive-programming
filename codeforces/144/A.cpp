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

    int n, arr[105], mi, ma;
 
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        
        if(i==1||arr[mi]>=arr[i]) mi=i;
        if(i==1||arr[ma]<arr[i]) ma=i;
    }
    
    cout<<n-mi+ma-1-(ma>mi)<<endl;
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