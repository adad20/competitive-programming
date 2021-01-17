#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    stringstream ss;
    ss<<n;

    string s;
    ss>>s;
    int l = s.size();
    int x = 0;
    for(int i=0;i<l;i++) {
        if(s[i]-'0' > 0) x++;
    }
    cout<<x<<"\n";

    for(int i=0;i<l;i++) {
        // cout<<s[i]<<" \n";
        if(s[i]-'0'>0) {
            cout<<s[i];
            for(int j=i+1;j<l;j++) cout<<"0";
            cout<<" ";
        }
    }
    cout<<endl;
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