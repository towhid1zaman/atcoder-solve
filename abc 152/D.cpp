#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(ll i=0; i<a;i++)
#define rep1(i,a,b) for(ll i=(a);i<=(b);++i)
#define irep(i,b,a) for(ll i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const ll mod = 1000000007; // (ll)1e9+7
const ll maxn = 2000100;
ll ans[100][100];
ll FInd(ll x){
    while(x){
        if(x/10==0)return x;
        x/=10;
    }
}

int  main(){
        _ios;

        ll n;
        cin>>n;
        for(ll i = 1; i<=n;i++){
                ans[FInd(i)][i%10]++;
        }
        ll res = 0;
        for(ll i = 1; i<=9;i++){
            for(ll j = 1; j<=9;j++){
                cout<<ans[i][j] * ans[j][i]<<endl;
            }
        }
        cout<<res<<endl;



return 0;
}





