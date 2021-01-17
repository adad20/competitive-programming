/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/432/A
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
    int n, m;
    cin>>n>>m;

    char arr[n][m];

    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        for(int j=0;j<m;j++) {
            arr[i][j] = s[j];
        }
    }

    // cout<<arr[2][0]<<endl;

    int cnt = 0;
    int ans = 0;

    for(int i=0;i<n;i++) {
        int temp = 0;
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 'S') {
                temp = 0;
                break;
            } else if(arr[i][j] == '.') {
                temp++;
                arr[i][j] = '@';
            }
        }
        if(temp == 0) {
            for(int j=0;j<m;j++) {
                if(arr[i][j] == '@') arr[i][j] = '.';
            }
        }
        ans += temp;
    }

    for(int i=0;i<m;i++) {
        int temp = 0;
        for(int j=0;j<n;j++) {
            // cout<<arr[j][i];
            if(arr[j][i] == 'S') {
                temp = 0;
                break;
            } else if(arr[j][i] == '.' ){
                // cout<<j<<i<<e;
                temp++;
                arr[j][i] = '@';
            }
        }
        // cout<<e;
        ans += temp;
    }

    cout<<ans;

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