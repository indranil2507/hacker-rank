//Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count[100] = {0};
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if ((count[i] + count[i + 1]) > max)
        {
            max = count[i] + count[i + 1];
        }
    }
    cout << max;
}