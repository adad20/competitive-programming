/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/510/A
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
    int a, b;
    cin>>a>>b;
    bool flag = true;
    for(int i=1;i<=a;i++) {
        for(int j=1;j<=b;j++) {
            if(i&1) {
                cout<<'#';
            } else {
                if(flag) {
                    if(j<b) cout<<".";
                    else cout<<"#";
                } else {
                    if(j==1) cout<<"#";
                    else cout<<".";
                }
               
            }
        }
        cout<<e;
        flag = i&1?flag:!flag;
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