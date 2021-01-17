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
    int arr[n];
    set<double> ans;

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++) {
    	for(int j=i+1;j<n;j++) {
    		double area = (double)((0.5)*(arr[j]-arr[i]));
    		ans.insert(area);
    	}
    }
    // for(auto i:ans) cout<<i<<" ";
    // cout<<e;
    cout<<ans.size()<<e;

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