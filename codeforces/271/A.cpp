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
    
    int n;
    cin>>n;

    int ans = n+1;
    bool flag = true;
    while (flag) {
    	bool arr[10] = {false};
    	int temp = ans;
    	bool tt = false;
    	while(temp>0) {
    		int x = temp%10;
    		temp/=10;
    		if(arr[x]==false) arr[x] = true;
    		else {
    			tt = true;
    		}
    	}
    	if(!tt) {
    		break;
    	}
    	ans++;
    }

    cout<<ans<<el;

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