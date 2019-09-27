#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float b;
    cin >> x >> b;
    cout << setprecision(2) << fixed;
    if((x+.5)>b){
        cout << b << endl;
    }else{
        if(x%5==0){
            cout << b-(x+.5) << endl;
        }else{
            cout << b << endl;
        }
    }
    return 0;
}
