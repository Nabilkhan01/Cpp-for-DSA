#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string nm[N];
    string cls[N];
    string s[N];
    string id[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];
    }

    for (int i = 0; i < N / 2; i++)
    {
        string temp = id[i];
        id[i] = id[N - i - 1];
        id[N - i - 1] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }

    return 0;
}
