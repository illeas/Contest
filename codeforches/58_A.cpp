#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "hello";
    string cs;
    cin >> cs;
    int c=0, co=0;
    for(int i=0; i<5; i++){
        for(int j=c; j<cs.length(); j++){
            if(s.at(i)==cs.at(j)){
                c = j;
                co++;
            }
        }
    }
    if(co==5){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
