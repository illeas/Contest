#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)==3 && a && b && c){
        if(a<1 || b<1 || c<1){
            printf("wrong\n");
        }else if((((a*a)+(b*b))==c*c) || (((a*a)+(c*c))==b*b) || (((b*b)+(c*c))==a*a)){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
    return 0;
}
