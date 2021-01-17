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

/*----------------Functions---------------*/
void primeSieve(vector<bool> &prime) {
	for(ll i=0;i<prime.size();i++) prime[i] = 1;
	for (ll i=2;i*i<=prime.size();i++) {
		if(prime[i]) {
			for(ll j=i*i;j<=prime.size();j+=i) {
				prime[j] = 0;
			}
		}
	}
}

/*----------------Functions---------------*/


void solve(){
    // Solve here
    ll n;
    cin>>n;
    
    cout<<25<<endl;

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