
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



int main(){
        _
        int n,a,b;
        cin >> n >> a >> b;
        string s; cin >> s;
        map<char, int>cnt;
        map<int,int>bth;
        map<char,int>bthcnt;
        for(int i = 0; i<n; i++){
            if(s[i]=='b'){
                bthcnt[s[i]]++;
                bth[i+1] = bthcnt[s[i]];
            }
        }
        int pass =0;
        for(int i = 0; i<n; i++){
            if(s[i]=='a'){
                if(pass<(a+b)){
                    cout<<"Yes"<<endl;
                    pass++;
                }
                else cout<<"No"<<endl;
            }
            else if(s[i]=='b'){
                if(pass<(a+b) and bth[i+1]<=b){
                    cout<<"Yes"<<endl;
                    pass++;
                }
                else cout<<"No"<<endl;
            }
            else cout<<"No"<<endl;
        }

return 0;
}


