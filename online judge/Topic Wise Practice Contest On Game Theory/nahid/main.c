#include <stdio.h>

int main()
{
    int p =10, q;
    q= --p;
    //printf("%d",q);
    printf("%d\n%d\n",q,q==10?p--:--p);
    printf("%d%d\n",p,p==10?q--:--q);

    return -10;
}
