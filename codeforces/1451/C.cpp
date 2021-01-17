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
    int a, b;
    cin>>a>>b;

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    array<int, 27> v1{},v2{};

    for(auto i:s1) {
        v1[i-'a']++;
    }

    for(auto i: s2) {
        v2[i-'a']++;
    }

    bool flag = false;

    for(int i=0;i<26;i++) {
        if(v1[i]<v2[i] or (v1[i]-=v2[i])%b) flag = true; 
        v1[i+1] += v1[i];       
    }

    cout<<(flag?"No\n":"Yes\n");
    

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