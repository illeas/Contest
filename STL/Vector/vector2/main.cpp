#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec(3, 1); // 3 element and value is 1 1 1
    vector <int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }

    //cout << v.size() <<endl;

    for(int j=0; j<v.size(); j++){
        cout << v[j] << "\t";
    }

    return 0;
}
