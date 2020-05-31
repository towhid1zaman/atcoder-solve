
// </> : towhid1zaman
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
typedef unsigned long long ll;
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
const int maxn = 1e18;



int main(){
        _
        int n; cin >> n;
        cpp_int a[n];
        cpp_int res = 1;
        rep(i,n){
            cin >> a[i];
        }
        sort(a, a+n);
        rep(i,n){
            cin >> a[i];
            res = res*a[i];
            if(res > 1000000000000000000)
            {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << res << endl;


return 0;
}


