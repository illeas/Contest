#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int , int > p;
    p.first = 10l;
    p.second = 50;

    cout << p.first << " " << p.second << endl;

    pair <int, int> p1(1, 2);
    pair <int, int> p2(p1);

    cout << p2.first << " " << p2.second <<endl;

    pair < string , pair < int, pair < int , char > > > student ;

    student = make_pair("Babu", make_pair(39, make_pair(70, 'A')));

//    student.first = "illeas";
//    student.second.first = 39;
//    student.second.second.first = 70;
//    student.second.second.second = 'A';

    cout << student.first << " " << student.second.first << " " << student.second.second.first << " " << student.second.second.second << endl;

    return 0;
}
