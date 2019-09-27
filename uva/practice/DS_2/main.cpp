#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i=1,n;
    cin >> tc;
    while(i<=tc){
        cin >> n;
        cout << n/2 << " " << n-(n/2) << endl;
        i++;
    }

    return 0;
}
