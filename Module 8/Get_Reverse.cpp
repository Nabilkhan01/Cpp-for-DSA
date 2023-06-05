#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string nm[N];
    string cls[N];
    string s[N];
    int math_marks[N];
    int eng_marks[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nm[i] >> cls[i] >> s[i] >> math_marks[i] >> eng_marks[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << math_marks[i] << " " << eng_marks[i] << endl;
    }

    return 0;
}
