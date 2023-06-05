#include <bits/stdc++.h>
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
    // sort(a, a + n, greater<int>());  //Dessending order er jonno.
    sort(a, a + n); // n er jaygay 2/3/4 emn thakle 1st 2/3/4 ta ghorer moddhei sort korbe.
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}