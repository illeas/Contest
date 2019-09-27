#include <stdio.h>

int main()
{
    int i, array[9], c;
    for(i=0; i<9; i++){
        scanf("%d", array[i]);
    }
    c = array[0]+array[4];
    if(c==array[8]){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
