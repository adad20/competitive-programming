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

    string a, b;
    int a_g = 0, b_g = 0;

    cin>>a>>b;

    for(int i=0;i<n;i++) {
    	if(a[i]>b[i]) a_g++;
    	else if(b[i]>a[i]) b_g++;
    }

    if(a_g>b_g) cout<<"RED"<<e;
    else if(a_g<b_g) cout<<"BLUE"<<e;
    else cout<<"EQUAL"<<e;

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