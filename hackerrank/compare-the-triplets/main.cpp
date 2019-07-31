#include<iostream>

using namespace std;

int main(){
    int a[100], b[100], n, al=0, bo=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int x=0; x<n; x++){
        cin >> b[x];

        if(a[x]>b[x]){
            al++;
        }else if (a[x]<b[x]) {
            bo++;
        }
    }
    cout << al << " " << bo << endl;

    return 0;
}
