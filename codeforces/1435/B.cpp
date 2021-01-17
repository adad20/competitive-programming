/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/contest/1435/problem/B
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

    int row[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>row[i][j];
        }
    }

    int col[m][n];
    int temp = -1;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>col[i][j];

            if(j==0) {
                for(int k=0;k<n;k++) {
                    if(row[k][0] == col[i][j]) {
                        temp = i;
                    }
                }
            }
        }
    }


    for(int l=0;l<n;l++) {
        int temp1 = col[temp][l];
        for(int j=0;j<n;j++) {
            if(row[j][0] == temp1) {
                for(int k=0;k<m;k++) cout<<row[j][k]<<" ";
                cout<<e;
            }
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