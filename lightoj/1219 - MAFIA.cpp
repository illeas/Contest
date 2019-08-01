
 //BISMILLAHIRRAHMANIRRAHIM
/*
 manus tar shopner soman boro
 Author :: Shakil Ahmed
.............AUST_CSE27.........
 prob   ::
 Type   ::
 verdict::
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <set>
#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <utility>
#define pf(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pfcs(cs,a) printf("Case %d: %d\n",cs,a)
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define LL long long
#define ss second
#define rep(i,n) for(i = 0; i < n; i++)
#define REP(i,n) for(i=n;i>=0;i--)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
#define re return
#define QI queue<int>
#define SI stack<int>
#define pii pair <int,int>
#define MAX
#define MOD
#define INF 1<<30
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define memo(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))

double const EPS=3e-8;
using namespace std;


template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

const int n=10005;

int par[n],mafia[n],ans;
bool vis[n];
vector <int> adj[n];
int Find_Root(int u)
{
       if(u==par[u]) return u;
       else Find_Root(par[u]);
}
int dfs(int u)
{
       vis[u]=1;
       int total=mafia[u]-1,i,sz=adj[u].size(),v;
       for(i=0;i<sz;i++)
       {      v=adj[u][i];
              if(!vis[v])
              {
                     int x=dfs(v);
                     total+=x;
                     ans+=abs(x);
              }

       }

      return total;

}
int main()
{

    //freopen("in.txt", "r", stdin);
    int cs,t;
    scanf("%d",&t);
    for(cs=1;cs<=t;cs++)
    {
           int i,n;
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
                  adj[i].clear();
                  vis[i]=0;
                  par[i]=i;
           }
           for(i=1;i<=n;i++)
           {      int v,w,j;

                  scanf("%d %d %d",&v,&mafia[i],&w);
                  for(j=0;j<w;j++)
                  {      int a;
                         scanf("%d",&a);
                         adj[v].pb(a);
                         adj[a].pb(v);
                         par[a]=v;
                  }
           }
           int root=Find_Root(1);
           ans=0;
           dfs(root);
           printf("Case %d: %d\n",cs,ans);

    }


}
