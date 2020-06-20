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

void solve(){
	string s;
	cin >> s;
	string ans="",z="";
	int a[26];
	setzero(a);
	fo(i,s.length())
		a[s[i]-'A']++;
	fo(i,26)
		if(a[i]%2){
			z=char(i+'A');
			a[i]--;
			break;
		}
	fo(i,26){
		if(a[i]%2==0){
		int c=a[i]/2;
			while(c){
				ans+=char(i+'A');
				c--;
			}
		}
		else{
			if(a[i]){
				dis("NO SOLUTION");
				return;
			}
		}
	}
	cout << ans;
	cout << z;
	reverse(all(ans));
	cout << ans;
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



