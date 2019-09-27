#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=2; i<=n; i++){
        int c=0;
        for(int j=2; j<=i; j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==1){
            printf("%d ", i);
        }
    }

    return 0;
}
