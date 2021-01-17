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

    string s;
    cin>>s;

    if(s[0]=='2') {
    	if(s[1]=='0' and s[n-2]=='2' and s[n-1]=='0') cout<<"YES\n";
    	else if(s[1]=='0' and s[2]=='2' and (s[3] == '0' or s[n-1]=='0')) cout<<"YES\n";
    	else if(s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0') cout<<"YES\n";
    	// else if()
    	else cout<<"NO\n";
    } else if(s[n-4]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0'){
    	cout<<"YES\n";
    } else cout<<"NO\n";

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