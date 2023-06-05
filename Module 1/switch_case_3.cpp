#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch (a % 2)
    {
    case 0:
        cout << "Even"
             << "\n";
        break;
    default:
        cout << "Odd" << endl;
    }
    return 0;
}