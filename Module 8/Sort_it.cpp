#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int eng_marks;
    int math_marks;
};
bool cs(const student &a, const student &b)
{
    int totalmarksA = a.math_marks + a.eng_marks;
    int totalmarksB = b.math_marks + b.eng_marks;

    if (totalmarksA == totalmarksB)
    {
        return a.id < b.id;
    }
    return totalmarksA > totalmarksB;
}

int main()
{
    int N;
    cin >> N;
    student a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm;
        cin >> a[i].cls;
        cin >> a[i].s;
        cin >> a[i].id;
        cin >> a[i].eng_marks;
        cin >> a[i].math_marks;
    }
    sort(a, a + N, cs);
    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].eng_marks << " " << a[i].math_marks << endl;
    }
    return 0;
}