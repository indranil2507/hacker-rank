#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;

        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}