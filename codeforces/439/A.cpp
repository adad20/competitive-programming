/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/439/A
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

    int arr[a];
    int sum = 0;

    for(int i=0;i<a;i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    // sum -= 10;
    int x = b-(sum+((a-1)*10));
    // cout<<x<<e;
    if(x<0) cout<<-1<<e;
    else {
        cout<<(b-sum)/5<<e;
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