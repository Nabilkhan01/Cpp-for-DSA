#include <iostream>
using namespace std;
int main()
{
    int v;
    cin >> v;
    switch (v)
    {
    case 'a':
        cout << "Vowel"
             << "\n";
        break;
    case 'e':
        cout << "Vowel"
             << "\n";
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }
    return 0;
}