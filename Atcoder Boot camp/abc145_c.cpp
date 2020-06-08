
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
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;

long double dif(int x1,int y1, int x2, int y2){
    return (long double)(sqrt( pow((x1-x2),2) + pow((y1-y2),2) ));
}

int main(){
        _
        sp(10);
        long double res = 0.0;
        int n; cin >> n;
        int X[n+1],Y[n+1];
        for(int i = 0; i<n; i++){
            cin >> X[i] >> Y[i];
        }
        int cnt =0;
        long double tot = 0.0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                    if(i==j)continue;
                    res =(dif(X[i],Y[i],X[j],Y[j]))*2/n;
                    tot+=res;
            }

        }
        cout<<tot/2<<endl;

return 0;
}


