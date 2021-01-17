/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1436/problem/B
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

    if(!(n&1)) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i==j or (j==(n-i-1))) cout<<1<<" ";
                else cout<<0<<" "; 
            }
            cout<<e;
        }
    } else {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i==j or (j==(n-i-1))) cout<<1<<" ";
                else if(i==0 and j==((n/2))) cout<<1<<" ";
                else if(i==((n/2)) and j==0) cout<<1<<" ";
                else cout<<0<<" "; 
            }
            cout<<e;
        }
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