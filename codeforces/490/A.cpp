/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/490/A
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

    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    int a = count(v.begin(), v.end(), 1);
    int b = count(v.begin(), v.end(), 2);
    int c = count(v.begin(), v.end(), 3);
    int ans = min(a,min(b,c));
    cout<<ans<<e;
    while(ans--) {
        auto xi = find(v.begin(), v.end(), 1);
        int x = distance(v.begin(), xi);
        auto yi = find(v.begin(), v.end(), 2);
        int y = distance(v.begin(), yi);
        auto zi = find(v.begin(), v.end(), 3);
        int z = distance(v.begin(), zi);

        v[x] = -1;
        v[y] = -1;
        v[z] = -1;

        cout<<x+1<<" "<<y+1<<" "<<z+1<<" "<<e;

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
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}