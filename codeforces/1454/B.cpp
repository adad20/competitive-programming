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
    ll n;
    cin >> n;
    ll arr[n], t[n];
    map<ll, ll> m;

    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        t[i] = arr[i];
        m[arr[i]]++;
    }
    sort(t, t + n);
    int ans = -1;
    for(int i=0; i<n;i++) {
        if (m[t[i]] == 1) {
            ans = t[i];
            break;
        }
    }

    if (ans == -1){
        cout << -1 << endl;
        return;
    }

    for(int i=0; i<n;i++) {
        if (arr[i] == ans) {
            cout << i + 1 << endl;
        }
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