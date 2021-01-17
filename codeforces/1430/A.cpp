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

    if(n<=4 and n!=3) {
        cout<<"-1\n";
    } else if(n==3) {

        cout<<"1 0 0\n";
    }

    else {
        int x = n%10;
        if(x==9) {
            n -= 9;
            int a = n/5;
            cout<<"3 "<<a<<" 0\n";
        } else if(x==8) {
            n -= 8;
            int a = n/5;
            cout<<"1 "<<a+1<<" 0\n";
        } else if(x==7) {
            n -= 7;
            int a = n/5;
            cout<<"0 "<<a<<" 1\n";
        } else if(x==6) {
            n -= 6;
            int a = n/5;
            cout<<"2 "<<a<<" 0\n";
        } else if(x==5) {
            n -= 5;
            int a = n/5;
            cout<<"0 "<<a+1<<" 0\n";
        } else if(x==4) {
            n -= 14;
            int a = n/5;
            cout<<"0 "<<a<<" 2\n";
        } else if(x==3) {
            n -= 13;
            int a = n/5;
            cout<<"2 "<<a<<" 1\n";
        } else if(x==2) {
            n -= 12;
            int a = n/5;
            cout<<"4 "<<a<<" 0\n";
        } else if(x==1) {
            n -= 11;
            int a = n/5;
            cout<<"2 "<<a+1<<" 0\n";
        } else {
            int a = n/5;
            cout<<"0 "<<a<<" 0\n";
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