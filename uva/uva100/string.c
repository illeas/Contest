#include<stdio.h>
#include<string.h>
int get_uppercase(char word[])
{
    int cnt=0;
    for(int i=0;word[i]!=NULL;i++)
    {
        if(word[i]>='A'&&word[i]<='Z')cnt++;
    }
    return cnt;
}
int main(){
    char word1[10],word2[10];
    scanf("%s %s",word1,word2);
    int cnt1=get_uppercase(word1);
    int cnt2=get_uppercase(word2);
    if(cnt1>cnt2)
    {
        printf("%s\n",word1);
    }
    else
    {
        printf("%s\n",word2);
    }
}
