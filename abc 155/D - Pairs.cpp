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
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
const ll inf = ll(1e18)+1;

int main(){
        _ios;
        ll n,k;
        cin>>n>>k;
        vll num(n);
        for(int i = 0; i<n;i++){
            cin>>num[i];
        }
        sort(all(num));
        ll left = -inf, right = inf;
        while(left+1< right){
            ll mid = (left+right)/2;
            ll cnt = 0;
            rep(i,n){
                ll temp = num[i];
                if(temp>0){
                    int l = -1,r=n;
                    while(l+1<r){
                        int c = (l+r)/2;
                        if(num[c]*temp<=mid)l=c;
                        else r = c;

                    }
                    cnt+=r;
                }
                else if(temp==0){
                    if(mid>=0)cnt+=n;
                }
                else {
                    int l = -1,r=n;
                    while(l+1<r){
                        int c = (l+r)/2;
                        if(num[c]*temp<=mid) r= c;
                        else l = c;
                    }
                    cnt+=n-r;
                }
                if(temp*temp<=mid)cnt--;
            }
            cnt/=2;
            if(cnt>=k)right = mid;
            else left = mid;
        }
        cout<<right<<endl;




return 0;
}




