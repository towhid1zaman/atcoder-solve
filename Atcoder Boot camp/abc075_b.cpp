
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
const int maxn = 2000100;

const int kx[8] = {-2, -2, -1, 1, -1, 1, 2, 2}, ky[8] = {1, -1, -2, -2, 2, 2, -1, 1}; //knight
const int dx8[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy8[8] = {0, 1, 0, -1, -1, 1, -1, 1}; //king
const int dx4[4] = {1,0,-1,0}, dy4[4] = {0,1,0,-1};

bool gridCheck(int x, int y,int n, int m) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

int main(){
        _
        int h,w; cin >> h >> w;
        string board[100];
        for(int i = 0; i<h; i++){
            cin >> board[i];
        }

        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                if(board[i][j]=='#')continue;

                    int cnt = 0;
                    for(int d = 0; d<8; d++){
                        int ni = i+dx8[d];
                        int nj = j+dy8[d];
                        if(gridCheck(ni, nj,h,w) and board[ni][nj]=='#'){
                            cnt++;
                        }
                    }
                board[i][j] = char(cnt+'0');
            }
        }

        for(int i = 0; i<h; i++)cout<<board[i]<<endl;


return 0;
}

