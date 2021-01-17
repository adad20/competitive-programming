#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int a, b;
    cin>>a>>b;

    if(a==b) cout<<"0"<<"\n";
    else if(a>b) {
        if((a+b)%2 != 0) cout<<"1\n";
        else cout<<"0\n";
    } else cout<<b-a<<"\n";
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