#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
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
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
int cnt[maxn];
bool chekp[maxn];
int main(){
        _ios;

        int n,m;
        cin>>n>>m;
        int ac = 0;
        int pena = 0;
        for(int i = 1; i<=n;i++){
            cnt[i] = 0;
            chekp[i] = false;
        }
        int x;
        string a;
        while(m--){

            cin>>x>>a;
            if(chekp[x])continue;
            if(a=="AC"){
                ac++;
                chekp[x] = true;
                pena+=cnt[x];
            }
            else if(a=="WA"){
                cnt[x]++;
            }
        }
        cout<<ac<<" "<<pena<<endl;




return 0;
}





