/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1433/problem/B
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

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = 0;
    int cnt = 0;
    int temp = 0;
    for(int i=0;i<n;i++) {
        if(v[i]==1) {
            cnt++;
            if(cnt>0) {
                ans += temp;
                temp = 0;
            }
        } else if(cnt>0){
            temp++;
        }   
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