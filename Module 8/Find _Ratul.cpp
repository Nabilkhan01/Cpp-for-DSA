#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    stringstream s(S);
    string w;
    int count = 0;
    while (s >> w)
    {
        if (w == "Ratul")
            count++;
    }
    if (count > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}