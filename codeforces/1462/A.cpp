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

    vector<ll> v(n);
    ll mid;
    for(int i=0;i<n;i++) cin>>v[i];
    if(n&1) {
    	mid = (n/2)+1;
    	for(int i=0;i<mid-1;i++) {
    		cout<<v[i]<<" "<<v[n-i-1]<<" ";
    	}
    	cout<<v[mid-1]<<e;
    } else {
    	mid = (n/2);
    	for(int i=0;i<mid;i++) {
    		cout<<v[i]<<" "<<v[n-i-1]<<" ";
    	}
    	cout<<e;
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