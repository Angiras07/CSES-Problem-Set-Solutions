#include<bits/stdc++.h>
using namespace std; 
#define ll long long
const ll mod = 1e9+7;
const ll INF = 1LL<<60;
#define fo(i,n) for( ll int i=0;i<n;++i)
#define fos(j,i,n) for(ll int j=i;j<n;++j)
#define N 100004
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define abs(x) ((x)<0?(-(x)):(x))
#define dis(k) cout << k << endl
#define forr(i,n) for( ll int i= n-1;i>=0;--i)
#define dbg(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define ve vector
#define first fi
#define second se
#define setzero(a) memset(a,0,sizeof(a))
#define setinf(a) memset(a,0x7F,sizeof(a))
typedef ve< ll > vi;
typedef ve< vi > vvi;
typedef pair< ll ,ll > ii;
string board[8];
int ans=0;
bool tc[8], td1[16], td2[16];

void nqueen(int r){
    if (r == 8){
        ans++;
        return;
    }
    fo(c,8){
        if (board[r][c] == '.'){
            if (!tc[c] && !td1[r - c + 8 - 1] && !td2[r + c]){
                tc[c] = td1[r - c + 8 - 1] = td2[r + c] = true;
                nqueen(r+1);
                tc[c] = td1[r - c + 8 - 1] = td2[r + c] = false;
            }
        }
    }
}


void solve(){
	fo(i,8)	cin >> board[i];
	nqueen(0);
	
	dis(ans);

}

int main(){
	fast;
	int t=1;
	//cin >> t;

	while(t--){
		solve();
	}
	return 0;
}



