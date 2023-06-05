#include <iostream>
using namespace std;
int main()
{
    int v;
    cin >> v;
    switch (v)
    {
    case 1:
        cout << "One"
             << "\n";
        break;
    case 2:
        cout << "two"
             << "\n";
        break;
    case 3:
        cout << "three" << endl;
        break;
    default:
        cout << "Did not match" << endl;
    }
    return 0;
}