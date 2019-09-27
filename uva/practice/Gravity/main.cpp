#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int m,n;
    char map[50][50];
    int begin[50][50];
 
    cin >> m >> n;
    memset(begin,0,sizeof(begin));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%c",&map[i][j]);
            if(map[i][j] == 'o')
               begin[i][j] = 1;
               if(map[i][j] == '#')
               begin[i][j] = 2;
        }
    }
    for(int i=m-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int a = i;
            int b = j;
            while((begin[a][b] == 1) && (begin[a+1][b] ==0) && (a<m-1)){
                begin[a][b] = 0;
                a++;
                begin[a][b] = 1;
               }
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
           if(begin[i][j] == 0)
                printf(".");
           if(begin[i][j] == 1)
                printf("o");
           if(begin[i][j] == 2)
                printf("#");
         }
        printf("\n");
    }
    return 0;
}
