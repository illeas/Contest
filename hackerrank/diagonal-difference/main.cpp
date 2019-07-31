#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a=0, b=0, n;
    cin >> n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int x = 0; x<n; x++){
        a += arr[x][x];
        b += arr[x][n-x-1];
    }

    if(a>b){
        cout << a-b << endl;
    }else{
        cout << b-a << endl;
    }

    return 0;
}
