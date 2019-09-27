#include<stdio.h>
#include<string.h>

int lower=0;
int upper =0;
int digit =0;

void get_uppercase(char word[])
{
    for(int i=0;word[i]!=NULL;i++)
    {
        if(word[i]>='A'&&word[i]<='Z'){
            upper++;
        }

        if(word[i]>='a'&&word[i]<='z'){
            lower++;
        }
        if(word[i]>='1'&&word[i]<='9'){
            digit++;
        }
    }
}
int main(){
    char word1[50];
    scanf("%s",word1);
    get_uppercase(word1);
    printf("%d\n", upper);
    printf("%d\n", lower);
    printf("%d\n", digit);
}

