#include <iostream>
using namespace std;

int check(int arr[], int v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v == arr[i])
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int n, v;
    int arr[n];
    cin >> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << check(arr, v, n) << endl;
    return 0;
}