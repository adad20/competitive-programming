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
    int n, q;
    cin>>n>>q;

    string s;
    cin>>s;

    for(int i=0;i<q;i++) {
        int a, b;
        cin>>a>>b;
        int temp = 0;
        for(int j=0;j<a-1;j++) {
            if(s[j] == s[a-1]) temp=1;
        }
        for(int j=b;j<n;j++) {
            if(s[j] == s[b-1]) temp=1;
        }
        if(temp) cout<<"YES\n";
        else cout<<"NO\n";
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