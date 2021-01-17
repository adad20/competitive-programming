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

vector<ll> v;

void tempFunc(ll n) {

    while (n % 2 == 0) {
        v.pb(2);
        n = n / 2;
    }

    for (ll i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            v.pb(i);
            n = n / i;
        }
    }
    if (n > 2) v.pb(n);
}

bool primeNum(ll n) {
    if (n == 1) return false;
    else if (n == 2) return true;
    if (n % 2 == 0) return false;
    ll i;
    for (i = 3; i <= sqrt(n); i = i + 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve(){
    // Solve here
    ll n, i, j, k, x, y;
    cin >> n;
    if (primeNum(n))
    {
        cout << 1 << endl;
        cout << n << endl;
    }

    else
    {
        v.clear();
        tempFunc(n);
        map<ll, ll> m;
        for (i = 0; i < v.size(); i++)
            m[v[i]]++;
        k = 0;
        j = 0;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second > k) {
                k = it->second;
                j = it->first;
            }
        }
        if (m.size() < 2) {
            auto it = m.begin();
            if (it->second == 1) {
                cout << 1 << endl;
                cout << n << endl;
            }
            else {
                cout << it->second << endl;
                for (i = 1; i <= it->second; i++)
                    cout << it->first << " ";
                cout << endl;
            }
        }
        else  {
            cout << k << endl;
            for (i = 1; i < k; i++)
                cout << j << " ";
            x = 1;
            while (k != 1)
            {
                x = x * j;
                --k;
            }
            cout << n / x << endl;
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