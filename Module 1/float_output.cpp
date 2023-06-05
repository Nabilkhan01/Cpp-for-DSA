#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cin >> a;
    // float number e doshomik er por koto ghor rakhbo oita korar process:
    cout << fixed << setprecision(2) << a;
    return 0;
}