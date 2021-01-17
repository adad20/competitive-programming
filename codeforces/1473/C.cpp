/*
    Author: Zeno_orz
*/

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(0); \
             cout.tie(0); \
             cin.tie(0);   
#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define el "\n"
#define len(x) x.size()
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n
#define vll  vector<ll>
#define vpll vector<pair<ll, ll>>
#define vc   vector<char> 
#define mll  map<ll, ll>
#define sll  set<ll>


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
	int n, k;
	cin>>n>>k;

	int x = n-k;
	// cout<<x<<endl;
	int y = k-x-1;
	int i=1;
	while(y--) {
		cout<<i<<" ";
		i++;
	}
	i = k;
	x++;
	while(x--) {
		cout<<i<<" ";
		i--;
	}

	cout<<endl;
    
}

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    FAST
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}