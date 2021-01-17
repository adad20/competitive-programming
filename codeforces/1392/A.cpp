#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    int arr[n];

    bool flag = 0;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++) {
        if(arr[i]!=arr[i+1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout<<"1\n";
    else cout<<n<<"\n";
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