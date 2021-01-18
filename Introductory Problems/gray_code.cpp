//basic template
#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
using namespace std; 
using namespace __gnu_pbds;
#define ll long long
const ll mod = 1e9+7;
const ll mod2= 998244353;
const ll INF = 1ll<<62;
const long double pi=3.1415926535897932384626433832795;
#define fo(i,n) for( ll i=0;i<n;++i)
#define fos(j,i,n) for(ll j=i;j<n;++j)
#define all(v) v.begin(),v.end()
#define endl "\n"
#define dis(k) cout << k << endl
#define ret(k) { dis(k); return;}
#define ror(i,n) for( ll i= n-1;i>=0;--i)
#define ve vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define setz(a) memset(a,0,sizeof(a))
#define seti(a) memset(a,0x7f,sizeof(a))
#define setmi(a) memset(a,0xc0,sizeof(a))
typedef ve< ll > vi;
typedef ve< vi > vvi;
typedef pair< ll ,ll > ii;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indset;

//weird debugging stuff
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
	enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
		sim > struct rge { c b, e; };
		sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
		sim > auto dud(c* x) -> decltype(cerr << *x, 0);
		sim > char dud(...);
		struct debug {
#ifdef LOCAL
			~debug() { cerr << endl; }
			eni(!=) cerr << boolalpha << i; ris; }
		eni(==) ris << range(begin(i), end(i)); }
		sim, class b dor(pair < b, c > d) {
			ris << "(" << d.first << ", " << d.second << ")";
		}
sim dor(rge<c> d) {
	*this << "[";
	for (auto it = d.b; it != d.e; ++it)
		*this << ", " + 2 * (it == d.b) << *it;
	ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define im(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
const ll mxn=3*1e5+5;
//if its hard, remember nothing is harder than 5th sept
ve<string> gen(ll n){
	if(n==0) return {"0"};
	if(n==1) return {"0","1"};
	ve<string> tmp=gen(n-1),ans;
	ll m=tmp.size();
	fo(i,m) ans.pb('0'+tmp[i]);
	ror(i,m) ans.pb('1'+tmp[i]);
	return ans;
}


void solve(){
	ll n;
	cin >> n;
	ve<string> ans=gen(n);
	for(auto e: ans) dis(e);
}

/*Don't just sit and hope that God will solve this
  fucking do something, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	//int tc=1;
	//cin >> t;		
	while(t--){
		//cout << "Case #" << tc << ": " ;
		//tc++;
		solve();}
	return 0;
}
