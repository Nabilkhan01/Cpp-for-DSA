#include <bits/stdc++.h> //Problem not solved.
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i > j)
            {
                if (ar[i] > ar[j])
                {
                    swap(ar[i], ar[j]);
                }
            }
            cout << ar[i];
            cout << " ";
        }
    }

    return 0;
}