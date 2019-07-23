#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    vector <int> :: reverse_iterator ri;

    for(int i=1; i<=10; i++){
        v.push_back(i);
    }
    for(it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    //Reverse
    for(ri=v.rbegin(); ri!=v.rend();ri++){
        cout << *ri << " ";
    }
    cout << endl;

    return 0;
}
