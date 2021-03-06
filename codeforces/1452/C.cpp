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
    string s;
    cin>>s;

    int a=0, b=0, ans=0;

    for(int i=0;i<(int)s.length();i++) {
        if(s[i] == '[') a+= 1;
        if(s[i] == ']') {
            if(a>0) {
                ans += 1;
                a -= 1;
            }
        }
        if(s[i] =='(') b += 1;
        if(s[i] == ')') {
            if(b>0) {
                ans+=1;
                b-=1;
            }
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