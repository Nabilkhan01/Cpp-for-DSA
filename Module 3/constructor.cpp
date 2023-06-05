#include <bits/stdc++.h> //Prblm not solved: terminal problem.
using namespace std;
// class declaration
class student
{
public:
    char name[100];
    int roll;
    char section;
    int cls;
    // coonstructive function
    student(char *n, int r, char s, int c)
    {
        // clarification
        strcpy(name, n);
        roll = r;
        section = s;
        cls = c;
    }
};
int main()
{
    student Nabil("Nabil Khan", 90, 'A', 4);
    student Mahir("Mahir Faysal", 23, 'B', 5);
    // print
    cout << Mahir.name << endl;
    cout << Mahir.section << endl;
    cout << Mahir.roll << endl;
    cout << Mahir.cls << endl;
    return 0;
}