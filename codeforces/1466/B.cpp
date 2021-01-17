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
    set<int> s;
    for(int i=0;i<n;i++) cin>>arr[i];
	// sort(arr, arr+n);
	// s.insert(arr[0]);
   	map<int, bool> m;
	for(int i=0;i<n;i++) {
		if(m[arr[i]] == false){
		 s.insert(arr[i]);
		 m[arr[i]] = true;
		}
		else if (m[arr[i]+1] == false) {
			s.insert(arr[i]+1);
			m[arr[i]+1] = true;
		}
	}
	cout<<s.size()<<e;
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