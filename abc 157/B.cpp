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
#define vb vector<bool>
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int vec[4][4];
int main(){
        _ios;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++) cin>>vec[i][j];
	}
	vector<vector<bool>> m(3,vb(3));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(vec[j][k]==x){
					m[j][k]=true;
				}
			}
		}
	}
	bool ok=false;
	for(int i=0;i<3;i++){
		bool okk=true;
		for(int j=0;j<3;j++){
			if(!m[i][j]){
				okk=false;
				break;
			}
		}
		if(okk) ok=true;
	}
	if(ok) cout<<"Yes"<<endl;
	else{
		if((m[0][0] && m[1][1] && m[2][2]) || (m[2][0] && m[1][1] && m[0][2])) cout<<"Yes"<<endl;
		else{
			for(int i=0;i<3;i++){
				bool okk=true;
				for(int j=0;j<3;j++){
					if(!m[j][i]){
						okk=false;
						break;
					}
				}
				if(okk) ok=true;
			}
			if(ok) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}

return 0;
}





