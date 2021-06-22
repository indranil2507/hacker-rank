#include <iostream>
using namespace std;

bool isPallindrome(int n)
{
    int num = n;
    int digit = 0, newnum = 0;
    while (num != 0)
    {
        digit = num % 10;
        newnum = newnum * 10 + digit;
        num = num / 10;
    }
    // cout<<newnum;
    if (newnum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[5] = {1, 111, 1211, 252, 22};

    int maximum = 0;

    for (int i = 0; i < 5; i++)
    {

        if (isPallindrome(arr[i]))
        {
            maximum = max(maximum, arr[i]);
        }
    }
    cout << maximum;
    // cout << isPallindrome(1221);
    // cout << 1;
}
