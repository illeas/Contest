//BISMILLAHIRRAHMANIRRAHIM
//
//

#include <cstring>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <vector>
#include <stack>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <utility>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define LL long long
#define ff first
#define ss second
#define QI queue<int>
#define SI stack<int>
#define MAX 1000000
using namespace std;
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
int main()
{    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int c;
	cin>>c;
	for(int l=1;l<=c;l++)
	{
		int x1,x2,x3,x4,y1,y2,y3,y4;
		double area;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		x4=(x1+x3)-x2;
		y4=(y1+y3)-y2;
		area=.5*(double)(x1*y2+x2*y3+x3*y4+x4*y1-(y1*x2+y2*x3+y3*x4+y4*x1));
		if(area<0)
			area*=(-1);
		printf("Case %d: %d %d %.0lf\n",l,x4,y4,area);
	}

    return 0;
}

