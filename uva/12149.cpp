#include<iostream>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)==1 && n){
        int s = 0;
        for(int i=n; i>0; i--){
            s += i*i;
        }
        printf("%d\n", s);
    }
    return 0;
}
