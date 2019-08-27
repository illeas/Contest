#include<bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long n, a, b, res;
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        scanf("%llu", &n);
        a = n & 0xFFFFFFFF;
        b = n & 0x55555555;

        a = a >> 1;
        b = b << 1;

        res = a | b;
        cout << res << endl;
    }
    return 0;
}
