
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200010;



int main(){
        _
        unordered_map<int,int>mp;
        int n; cin >> n;
        vi a(n+2);
        rep1(i,1,n){
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        rep1(i,1,n){
		bool f = true;
		for (ll j = 1; j * j <= a[i]; j++) {
			if (a[i] % j == 0) {
				if (j == a[i] and mp[j] >= 2 or j != a[i] and mp[j] >= 1 or a[i]/j == a[i] and mp[a[i]/j] >= 2 or a[i]/j != a[i] and mp[a[i]/j] >= 1) {
					f = false;
					break;
				}
			}
		}
		if (f) ans++;
	}
    cout<<ans<<endl;



return 0;
}

