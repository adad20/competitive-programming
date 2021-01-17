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
    int n;
    cin>>n;

    unordered_map<int, int> m;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    // v.pb(v[n-1]);
    for(int i=1;i<n;i++) {
        if(v[i]!=v[i-1]) m[v[i]]++;
    }

    for(auto i:m) {
        if(i.first != v[n-1]) {
            // cout<<i.second<<e;
            m[i.first]++;
        }
    }

    if(m.size()==0) cout<<0<<e;
    else if(m[v[0]]==0) cout<<1<<e;
    else {
        int min = INT_MAX;
        for(auto i:m) {
            // cout<<i.first<<" ";
            if(i.second <min) min = i.second;
        }
        cout<<min<<e;
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