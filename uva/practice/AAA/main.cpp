#include <iostream>
using namespace std;

int main()
{
    int i, c;
    char array[9];
    for(i=0; i<9; i++){
        cin >> array[i];
    }
    c = array[0]+array[4];
    if(c==array[8]){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
