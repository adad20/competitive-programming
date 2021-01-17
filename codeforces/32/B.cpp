/*
    Author: Zeno_orz
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define el "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    string s;
    cin>>s;
    vector<int> ans;
    for(int i=0;i<s.length();) {
    	if(s[i]=='.') {
    		ans.pb(0);
    		i++;
    	} else if(s[i]=='-') {
    		if(s[i+1]=='-') {
    			ans.pb(2);
    			i+=2;
    		} else if(s[i+1]=='.') {
    			ans.pb(1);
    			i+=2;
    		}
    	}
    }

    for(auto i:ans) cout<<i;

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