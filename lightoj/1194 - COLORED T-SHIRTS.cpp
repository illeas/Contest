
//BISMILLAHIRRAHMANIRRAHIM
/*
 manus tar shopner soman boro
 all my suceesses are dedicated to my parents
 Author :: Shakil Ahmed
.............AUST_CSE27.........
 prob   ::
 Type   ::
 verdict::
 */

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define re return
#define QI queue<int>
#define SI stack<int>
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define ms(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))
#define II ( { int a ; read(a) ; a; } )
#define LL ( { Long a ; read(a) ; a; } )
#define DD ({double a; scanf("%lf", &a); a;})

double const EPS=3e-8;
using namespace std;

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)

typedef long long Long;
typedef long long int64;
typedef unsigned long long ull;
typedef vector<int> vi ;
typedef set<int> si;
typedef vector<Long>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<Long,Long>pll;
typedef pair<double,double>pdd;
typedef vector<pii> vpii;

// For loop

#define forab(i, a, b)  for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n)       forab (i, 0, (n) - 1)
#define For(i, n)       forab (i, 1, n)
#define rofba(i, a, b)  for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n)       rofba (i, 0, (n) - 1)
#define rof(i, n)       rofba (i, 1, n)
#define forstl(i, s)    for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

//Fast Reader
template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction

/* **************************************  My code start here ****************************************** */


const int NX = 1e5 + 10 ;



Long dp[ NX ] , pre[ NX ][ 18 ] , freq[ NX ];

int n , m ;
int main()
{
   // I will always use scanf and printf
   // May be i won't be a good programmer but i will be a good human being

     int cs , t = II ;
     for ( cs = 1 ; cs <= t ; cs++ )
     {
         n = II , m = II ;
         ms( pre , 0 );
         ms( freq , 0 );
         for ( int i = 0 ; i < n ; i++ )
         {
             int x = II ;
             x-- ;
             for ( int j = 0 ; j < m ; j++ )
             {
                 pre[x][j] += freq[j];
             }
             freq[x]++;
         }
         int lim = ( 1 << m ) ;
         for( int i = 0 ; i < lim ; i++ )
         {
             dp[i] = 1e17 ;
         }
         dp[0] = 0 ;
         for ( int i = 0 ; i < lim ; i++ )
         {
             for ( int j = 0 ; j < m ; j++ )
             {
                 if( i & ( 1 << j ) ) continue ;
                 Long add = 0 ;
                 for ( int k = 0 ; k < m ; k++ )
                 {
                     if( i & ( 1 << k ) ) continue ;
                     if( j == k ) continue ;
                     add += pre[j][k];
                 }
                 dp[ i | ( 1 << j ) ] = min( dp[  i | ( 1 << j ) ] , dp[i] + add );
             }
         }
         printf("Case %d: %lld\n",cs,dp[lim-1]);
     }

    return 0 ;

}
