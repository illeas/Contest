
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


using namespace std;


template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
int n,k,m;
long long int dp[55][55][55];
bool vis[55][55][55];
long long int DP(int n,int k,int m)
{      if(vis[n][k][m]) return dp[n][k][m];
       vis[n][k][m]=1;
     long long  int &ret=dp[n][k][m];
     if(k==0)
        return ret=n?0:1;
       int i;
       ret=0;
       for(i=1;i<=m;i++)
       {      if(n-i>=0)
              ret+=DP(n-i,k-1,m);
              else
              break;
       }
       return ret;

}
int main()
{

    //freopen("in.txt", "r", stdin);
     int cs,t,i,j;
     scanf("%d",&t);
     for(cs=1;cs<=t;cs++)
     {
            scanf("%d %d %d",&n,&k,&m);

            printf("Case %d: %lld\n",cs,DP(n,k,m));

     }


}
