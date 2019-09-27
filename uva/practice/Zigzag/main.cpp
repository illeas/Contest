#include <iostream>
using namespace std;

int main()
{
    int i, j, n, m;
    cin >> n;
    int array[n];

    for(i=0; i<n; i++){
        cin >> array[i];
    }
    for(j=0; j<n; j++){
        if(array[j]>array[j+1]){
            m = array[j];
        }
    }
    cout << m;

    return 0;
}
