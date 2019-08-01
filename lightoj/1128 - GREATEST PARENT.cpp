
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

//doubleconst EPS=3e-8;
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

vector < pii > question[ NX ];
vector < int > child[ NX ];

int parent[ NX ] , value[ NX ] , n , q , idx ;

pii node[ NX ] ;
int ans[ NX ];

void dfs( int x)
{
    node[idx++] = mp( value[x] , x );
    int sz = question[x].size();
    rep( i , sz )
    {
        int v = question[x][i].ff , pos = question[x][i].ss ;
        int low = 0 , high = idx - 1 , mid , res ;
        while( low <= high )
        {
            mid = ( low + high )/2 ;
            if( node[mid].ff >= v )
            {
                res = node[mid].ss ;
                high = mid - 1;
            }
            else low = mid + 1 ;
        }
        ans[ pos ] = res  ;
    }
    sz = child[x].size();
    rep( i , sz ) dfs( child[x][i] );
    child[x].clear();
    question[x].clear();
    idx--;
}

int main()
{
   // I will always use scanf and printf
   // May be i won't be a good programmer but i will be a good human being

    int cs , t = II ;
    for ( cs = 1 ; cs <= t ; cs++ )
    {
        n = II , q = II ;
        for ( int i = 1 ; i < n ; i++ )
        {
            parent[i] = II , value[ i ] = II ;
            child[ parent[i] ].pb( i );
        }
        parent[0] = 0 ;
        value[0] = 1 ;
        rep( i , q )
        {
            int x = II , val = II ;
            question[x].pb(mp(val,i));
        }
        idx = 0 ;
        dfs( 0 );
        printf("Case %d:\n",cs);
        rep( i , q )
        {
            printf("%d\n",ans[i]);
        }
    }

    return 0 ;

}
