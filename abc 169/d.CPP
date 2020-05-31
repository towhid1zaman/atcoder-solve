
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
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int MAXN = 100001;

int prime[MAXN];

void sieve(){
    prime[1] = 1;
    for (int i=2; i<MAXN; i++)
        prime[i] = i;

    for (int i=4; i<MAXN; i+=2)
        prime[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        if (prime[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (prime[j]==j)
                    prime[j] = i;
        }
    }
}

vector<int> getFactorization(ll x){
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(prime[x]);
        x = x / prime[x];
    }
    return ret;
}

vector<ll> primeFactors(ll n)  {
	vector<ll> res;
    while (n % 2 == 0)  {
    	res.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i * i <= n; i = i + 2)  {
        while (n % i == 0)  {
            res.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        res.push_back(n);
    return res;
}


int main(){
        _
        ll n; cin >> n;
        vll fac = primeFactors(n);
        sort(all(fac));
        int m = fac.size();
        int i=0;
        int res = 0;
        while (i < m) {
            ll cur = fac[i];
            int ct = 0;
            while (i < m && cur == fac[i]) {
                ct++;
                i++;
            }
            int sum = 0, c = 0;
            while (true) {
                sum += c;
                if (sum  > ct) {
                    c--;
                    break;
                }
                c++;
            }
            res += c;
        }
        cout << res;




return 0;
}

