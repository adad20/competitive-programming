/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1433/problem/C
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

    vector<int> v(n);

    for(int i=0;i<n;i++) {
    	cin>>v[i];
    }

    bool flag = false;
    int max = -1;
    for(int i=0;i<n;i++) {
    	if(v[i]>max) max = v[i];
    	if((v[i]>v[i-1] or v[i]<v[i-1]) and i>0) flag = true;
    }

    if(flag) {
    	int ans = -1;
    	for(int i=0;i<n;i++) {
    		if(v[i] == max and ((v[i]>v[i-1] and i>0) or (v[i]>v[i+1] and i<n-1))) ans = i;
    	}
    	cout<<ans+1<<e;
    } else {
    	cout<<-1<<e;
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