#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n, m;
	cin>>n>>m;
	if(n==1 and m==1) {
		cout<<"0"<<endl;
		return;
	}
	char arr[n][m];
	for(int i=0; i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>arr[i][j];
		}
	}
	int min = 0;
	for(int i=0; i<n;i++) {
		if(i<n-1) {
			if(arr[i][m-1] == 'R') min++;
		} if(i==n-1) {
			for(int j=0;j<m-1;j++) {
				if(arr[i][j] == 'D') min++;
			}
		}
	}
	cout<<min<<endl;
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