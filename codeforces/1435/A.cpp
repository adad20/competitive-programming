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

int findlcm(int arr[], int n) 
{ 
    // Initialize result 
    int ans = arr[0]; 
  
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

void solve(){
    // Solve here
    int n;
    cin>>n;

    int arr[n];
    // int temp = 1;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int ans[n];

    for(int i=0;i<n;i+=2) {
        ans[i] = arr[i+1]*-1;
        ans[i+1] = arr[i];
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";

    cout<<e;



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