#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	int n;
	cin>>n;
	vector<int> v(100001, 0), b(100001, 0);
	while(n--){
	    int x;
	    cin>>x;
	    v[x]++;
	    b[v[x]]++;
	}
	 
	int q;
	cin>>q;
	while(q--){
	    char ch;
	    int x;
	    cin>>ch>>x;
	    if(ch == '+') v[x]++, b[v[x]]++;
	    else b[v[x]]--, v[x]--;
	    cout<<(((b[2]>1&&b[6]>0)||b[4]>1||(b[4]>0&&b[2]>2)||b[8]>0)?"YES":"NO")<<"\n";
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	solve();	
	return 0;
}