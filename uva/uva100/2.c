#include <iostream>
using namespace std;
int getnums(int n)
{
    int i=0;
    while (n!=1)
    {
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        ++i;
    }
    return i+1;
}
int main()
{
    int n1,n2,i;
    while (cin>>n1>>n2)
    {
        int max=0,temp=0,n3=n1,n4=n2;
        if(n1>n2)
        {
            n3=n2;
            n4=n1;
        }
        for(i=n3; i<=n4; ++i)
        {
            temp=getnums(i);
            max=max>temp?max:temp;
        }
        cout<<n1<<" "<<n2<<" "<<max<<endl;
    }
    return 0;
}
