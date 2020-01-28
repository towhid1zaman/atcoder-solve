//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = 10000;

int modpow(int a,int n,int md)
{
    int res = 1;
    while(n>0)
    {
        if(n%2==1)
        {
                res = res*a % md;
        }
        a = a*a%md;
        n>>1;
    }
}
int main(){
		IO
        int n;
        cin>>n;
        vector<int>v(n);
        unordered_map<int,int>mp;
        for(int i = 0; i<n;i++)
        {
            cin>>v[i];
            mp[v[i]/2]++;
        }
        bool f = true;
        if(n%2==0)
        {
            for(int i = 0; i<n/2;i++)
            {
                if(mp[i]!=2){
                    f = false;
                    break;
                }

            }
        }
        else{
            for(int i = 1; i<=n/2;i++)
            {
                if(mp[i]!=2){
                    f=false;
                    break;
                }
            }
            if(mp[0]!=1)f=false;
        }

        if(f==false)
        {
            cout<<0<<endl;
        }
        else{
                cout<<modpow(2,n/2,mod)<<endl;
        }



return 0;
}
