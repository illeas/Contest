
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct student {
    string name;
    int marks;
    int roll;

    bool operator<(const student& a)
    {
        if(marks == a.marks) {
            return roll > a.roll;
        }
        return marks < a.marks;
    }
};



string pad_right(string const& str, size_t s)
{
    if ( str.size() < s )
        return str + string(s-str.size(), ' ');
    else
        return str;
}

string pad_left(string const& str, size_t s)
{
    if ( str.size() < s )
        return string(s-str.size(), ' ') + str;
    else
        return str;
}





int main() {

    vector<student> stdnt;

    int n;

    cin >> n;

    while(n--) {
        student s = student();
        cin >> s.roll >> s.name >> s.marks;
        stdnt.push_back(s);
    }

    sort(stdnt.begin(), stdnt.end());
    reverse(stdnt.begin(), stdnt.end());
    cout << "Roll | Name       | Marks" << endl;
    cout << "-------------------------" << endl;
    for(int i = 0; i < stdnt.size(); i++) {
         cout << pad_left(to_string(stdnt[i].roll), 4) << " | " << pad_right(stdnt[i].name, 10) << " | " << stdnt[i].marks << endl;
    }
    return 0;
}
