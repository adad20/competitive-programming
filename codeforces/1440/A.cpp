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
    int n, c0, c1, h;
    cin>>n>>c0>>c1>>h;

    string s;
    cin>>s;

    int cost = 0;

    for(int i=0;i<n;i++) {
        int temp, temp1;
        temp = s[i]=='0'?c0:c1;
        temp1 = s[i]=='0'?(h+c1):(h+c0);

        cost += min(temp, temp1);
    }

    cout<<cost<<e;
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