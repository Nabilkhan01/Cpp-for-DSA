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
    char name[100] = "Rahim Mia";
    // dynamic object create.
    student *Rahim = new student(name, 20, 'A', 9);
    (*Rahim).roll = 10001;
    (*Rahim).cls = 12;

    // print by dreference in manual process
    /*cout << (*Rahim).name << endl
         << (*Rahim).roll << endl
         << (*Rahim).section << endl
         << (*Rahim).cls;*/

    // print in shortcut by arrow-sign.
    cout << Rahim->name << endl
         << Rahim->roll << endl
         << Rahim->section << endl
         << Rahim->cls << endl;

    // delete
    delete Rahim;

    return 0;
}