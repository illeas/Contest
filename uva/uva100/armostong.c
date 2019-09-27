#include<stdio.h>

void main()
{
    int digit,i,sum;

    printf("The armstrong numbers are: ");

    for(i=1; i<= 10000; i++)
    {
        int temporary = i;
        sum = 0;

        while(temporary > 0){
            digit = temporary % 10;
            sum = sum + (digit * digit * digit);
            temporary = temporary / 10;
        }

        if(sum == i){
            printf("%d ",i);
        }
    }
}
