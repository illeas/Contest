#include <bits/stdc++.h>
using namespace std;

string gameOfStones(int n) {
    string a;
    if( n % 7 < 2 ){
        a = "T";
    }else{
        a = "S";
    }
    return a;
}

int main()
{
    int t;
    cin >> t;

    for (int i=1;i<=t;i++) {
        int n;
        cin >> n;
        string result = gameOfStones(n);
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}
