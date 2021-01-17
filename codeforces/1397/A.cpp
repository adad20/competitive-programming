#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    map<char, int> mp;

    for(int i=0;i<n;i++) {
        string s;
        cin>>s;

        for(auto i:s) {
            mp[i]++;
        }
    }

    bool flag = false;
    for(auto i:mp) {
        if(i.second%n) {
            cout<<"NO\n";
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"YES\n";
}

int main() {

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