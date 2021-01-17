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

    int arr1[n];

    for(int i=0;i<n;i++) {
    	if(i==0) cin>>arr1[i];
    	else {
    		int x;
    		cin>>x;

    		arr1[i] = x+arr1[i-1];
    	}
    }

    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++) {
    	if(i==0) cin>>arr2[i];
    	else {
    		int x;
    		cin>>x;

    		arr2[i] = x+arr2[i-1];
    	}
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    cout<<max(0,max(arr1[n-1]+arr2[m-1], max(arr1[n-1], arr2[m-1])))<<e;

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