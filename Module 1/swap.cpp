#include <iostream>
#include <utility> //swap func er header file.
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b); // Swap er built in function.

    cout << a << " " << b;
    return 0;
}