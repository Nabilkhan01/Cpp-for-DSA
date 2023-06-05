#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx1 = max(a, b);
    int mx2 = max(mx1, c);
    int mn1 = min(a, b);
    int mn2 = min(mn1, c);
    (mn1 < mn2) ? cout << mn1 : cout << mn2;
    cout << " ";
    (mx1 > mx2) ? cout << mx1 : cout << mx2;

    return 0;
}