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
    student(int r, char s, int c, char *n)
    {
        // clarification
        strcpy(name, n);
        roll = r;
        section = s;
        cls = c;
    }
};
student fun()
{
    char name[100] = "Nabil Khan";
    student Nabil(90, 'A', 4, name);
    return Nabil;
}
int main()
{
    student Nabil = fun();
    //  print
    cout << Nabil.name << endl
         << Nabil.section << endl
         << Nabil.roll << endl
         << Nabil.cls << endl;
    return 0;
}