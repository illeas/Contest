
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
int ans[200][200],now[105];
vector <int> prime;
void pre()
{
       int i,j;
       prime.pb(2);
       for(i=3;i<=100;i+=2)
       {
              if(!now[i])
              {      prime.pb(i);
                     for(j=i*i;j<=100;j+=(2*i))
                     now[j]=1;
              }
       }
       for(i=2;i<=100;i++)
       {
              int n=i;
              for(j=0;j<prime.size();j++)
              {
                     if(n%prime[j]==0)
                     {
                            int ct=0;
                            while(n%prime[j]==0)
                            {
                                   n/=prime[j];
                                   ct++;
                            }
                            ans[i][prime[j]]=ct;
                     }
                     ans[i][prime[j]]+=ans[i-1][prime[j]];
              }
       }
}
int main()
{

    //freopen("in.txt", "r", stdin);
    pre();
    int cs,t,n,i;
    scanf("%d",&t);
    FOR(cs,1,t)
    {
           scanf("%d",&n);
           printf("Case %d: %d =",cs,n);
           int ct=0;
           for(i=0;i<prime.size();i++)
           {
                  if(ans[n][prime[i]])
                  {
                         if(ct++) printf(" *");
                         printf(" %d (%d)",prime[i],ans[n][prime[i]]);
                  }
           }
           printf("\n");
    }



}
