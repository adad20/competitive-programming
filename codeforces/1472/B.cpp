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

// int ifPossible(int arr[], int n) {
// 	int ls = 0;
// 	for(int i=0;i<n;i++) {
// 		ls += arr[i];
// 		int rs = 0;
// 		for(int j=i+1;j<n;j++) {
// 			rs += arr[j];
// 		}

// 		if(ls==rs) return i+1;
// 	}

// 	return -1;
// }

bool cmp(int a, int b) {return a>b;}

void solve(){
    // Solve here
    int n;
    cin>>n;

    int arr[n], sum = 0;

    for(int i=0;i<n;i++) {
    	cin>>arr[i];
    	sum += arr[i];
    }

    if(sum&1) {
    	cout<<"NO\n";
    	return;
    }
    
    int ls=0, rs=0;
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;i++) {
    	if(ls>rs) rs+=arr[i];
    	else ls+=arr[i];
    }

    cout<<(ls==rs?"YES\n":"NO\n");

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