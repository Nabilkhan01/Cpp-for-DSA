#include <iostream>
#include <algorithm> //min_max function use korar jonno algorithm header file dorkar.
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    /*min_max er jonno C++ er built in function:
    min(a,b);
    max(a,b);*/
    int mn = min(a, b);
    int mx = max(a, b);
    cout << mx << " " << mn;
    return 0;
}