#include <bits/stdc++.h> //Problem not solved.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = INT_MIN;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        max(m, a[i]);
    }
    cout << a[i];
    return 0;
}