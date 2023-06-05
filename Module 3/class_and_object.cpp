#include <bits/stdc++.h>
using namespace std;
// Class declaration
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;
};
int main()
{
    // Value neya
    Student s;
    s.roll = 27;
    s.sec = 'a';
    s.cls = 6;
    // name amra evabe direct likhte parbo nh tai arekta string create kore oita te value niya class er name array te copy kore nibo.
    char nm[100] = "Nabil";
    strcpy(s.name, nm);
    Student t;
    t.roll = 4;
    t.sec = 'j';
    t.cls = 9;
    char nm2[100] = "Mahir";
    strcpy(t.name, nm2);
    // print
    cout << t.name;
    return 0;
}