#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    string s;
    cin>>s;

    int x = (2*n)-2;
    
    int one = count(s.begin(), s.end(), '1');
    int zero = count(s.begin(), s.end(), '0');

    if(one>=n) {
        for(int i=0;i<n;i++) cout<<"1";
    } else if(zero >= n) {
        for(int i=0;i<n;i++) cout<<"0";
    } else {
        for(int i=0;i<n;i++) {
            if(i%2==0) cout<<"0";
            else cout<<"1";
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