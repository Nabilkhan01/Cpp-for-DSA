#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum, mul, sub;
    sum = a + b;
    mul = a * b;
    sub = a - b;
    cout << a << " "
         << "+"
         << " " << b << " "
         << "="
         << " " << sum << endl;
    cout << a << " "
         << "*"
         << " " << b << " "
         << "="
         << " " << mul << endl;
    cout << a << " "
         << "-"
         << " " << b << " "
         << "="
         << " " << sub;

    return 0;
}