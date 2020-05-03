
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
long power(long x,long y){
	long res=1;
	while(y>0){
		if(y&1)
		res=res*x;

		x*=x;
		y>>=1;
	}
	return res;
}
int main(){
        _ios;

	ll x;
	cin>>x;
	for(ll i=1;i<300;i++){
		for(ll j=i-1;j>-300;j--){
			if(pow(i,5)-pow(j,5)==x){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}

return 0;
}

