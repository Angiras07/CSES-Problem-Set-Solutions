#include<bits/stdc++.h>
using namespace std; 
#define ll long long
const ll mod = 1e9+7;
const ll INF = 1LL<<60;
#define fo(i,n) for( ll int i=0;i<n;++i)
#define fos(j,i,n) for(ll int j=i;j<n;++j)
#define n 7
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
bool vis[n][n];
int res[49];
int ans=0;
int steps=0;

void snake(int r, int c)
{
    if (r == n - 1 && c == 0)
    {
        ans += (steps == n * n - 1);
        return;
    }

    if (((r + 1 == n || (vis[r - 1][c] && vis[r + 1][c])) && c - 1 >= 0 && c + 1 < n && !vis[r][c - 1] && !vis[r][c + 1]) ||
        ((c + 1 == n || (vis[r][c - 1] && vis[r][c + 1])) && r - 1 >= 0 && r + 1 < n && !vis[r - 1][c] && !vis[r + 1][c]) ||
        ((r == 0 || (vis[r + 1][c] && vis[r - 1][c])) && c - 1 >= 0 && c + 1 < n && !vis[r][c - 1] && !vis[r][c + 1]) ||
        ((c == 0 || (vis[r][c + 1] && vis[r][c - 1])) && r - 1 >= 0 && r + 1 < n && !vis[r - 1][c] && !vis[r + 1][c]))
        return;

    vis[r][c] = true;

    if (res[steps] != -1)
    {
        switch (res[steps])
        {
        case 0:
            if (r - 1 >= 0)
            {
                if (!vis[r - 1][c])
                {
                    steps++;
                    snake(r - 1, c);
                    steps--;
                }
            }
            break;

        case 1:
            if (c + 1 < n)
            {
                if (!vis[r][c + 1])
                {
                    steps++;
                    snake(r, c + 1);
                    steps--;
                }
            }
            break;

        case 2:
            if (r + 1 < n)
            {
                if (!vis[r + 1][c])
                {
                    steps++;
                    snake(r + 1, c);
                    steps--;
                }
            }
            break;

        case 3:
            if (c - 1 >= 0)
            {
                if (!vis[r][c - 1])
                {
                    steps++;
                    snake(r, c - 1);
                    steps--;
                }
            }
            break;
        }
        vis[r][c] = false;
        return;
    }

    if (r + 1 < n)
    {
        if (!vis[r + 1][c])
        {
            steps++;
            snake(r + 1, c);
            steps--;
        }
    }

    if (c + 1 < n)
    {
        if (!vis[r][c + 1])
        {
            steps++;
            snake(r, c + 1);
            steps--;
        }
    }

    if (r - 1 >= 0)
    {
        if (!vis[r - 1][c])
        {
            steps++;
            snake(r - 1, c);
            steps--;
        }
    }

    if (c - 1 >= 0)
    {
        if (!vis[r][c - 1])
        {
            steps++;
            snake(r, c - 1);
            steps--;
        }
    }
    vis[r][c] = false;
}
void solve(){
	string s;
	cin >> s;
	fo(i,s.length())
	{
	  if (s[i] == '?')
            res[i] = -1;
        else if (s[i] == 'U')
            res[i] = 0;
        else if (s[i] == 'R')
            res[i] = 1;
        else if (s[i] == 'D')
            res[i] = 2;
        else if (s[i] == 'L')
            res[i] = 3;
	}
	snake(0,0);
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



