#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
const int max_n = 1e5;
const ll mod = 1000000007;
const ll INF = 1LL<<60;
#define fo(i,n) for( ll int i=0;i<n;++i)
#define fos(j,i,n) for(ll int j=i;j<n;++j)
#define N 100004
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
//#define abs(x) (x<0?(-x):x)
#define dis(k) cout << k << endl
#define forr(i,n) for( ll int i= n-1;i>=0;--i)
#define dbg(vari) cerr<<#vari<<" = "<<(vari)<<endl;
typedef vector< ll > vi;
typedef vector< vi > vvi;
typedef pair< ll ,ll > ii;
void solve(){
	int n;
	cin >> n;
	int a[n];
	ll ni=INF,tot=0;
	fo(i,n) cin >> a[i],tot+=a[i];
	fo(mask,(1LL<<n)){
		ll sum=0;
		fo(i,n)
			if(mask&(1LL<<i))
				sum+=a[i];
		ni=min(ni,llabs(2*sum-tot));
	}
	dis(ni);
}
int main(){
	fast;
	int t;
	t=1;
	//cin >> t;

	while(t--){	
		solve();	
	}
	return 0;
}
