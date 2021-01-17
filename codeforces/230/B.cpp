#include<bits/stdc++.h>
using namespace std;
using li = long int;
using lli  = long long int;

#define eb emplace_back
#define mt make_tuple
#define mp make_pair
#define pb push_back

bool sieve[1000001];

bool check(lli d){
	double sq = pow((double)d,0.5);
	if(floor(sq) != sq) return false;
	if(sieve[(lli)sq]) return false;
	return true;
}


int main(){
  ios_base::sync_with_stdio(false);
  //building the sieve
  memset(sieve,0,sizeof(sieve));
  sieve[1] = true;
  for(int i = 2; i <= 1000; ++i){
	  if(sieve[i] == false){
		  for(int j = 2; i*j <= 1000000; ++j){
		  sieve[i*j] = true;
	  }
	  }
  }
  
  int n;
  cin >> n;
  while(n--){
	  lli d;
	  cin >> d;
	  if(d == 1){
		  cout << "NO\n";
		  continue;
	  }
	  if(check(d)) cout << "YES\n";
	  else cout << "NO\n";
  }
}