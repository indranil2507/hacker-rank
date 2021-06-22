//We define super digit of an integer  using the following rules:

// Given an integer, we need to find the super digit of the integer.

// If  has only  digit, then its super digit is .
// Otherwise, the super digit of  is equal to the super digit of the sum of the digits of .

#include <iostream>
#include <string>
using namespace std;

int sumDigit(long long number)
{
    if (number <= 9)
    {
        return number;
    }
    int sum = 0;
    int digit = 0;
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    return sumDigit(sum);
}

int superDigit(string n, int k)
{
    long long int sum = 0;
    long long int m;
    for (int i = 0; i < n.size(); i++)
    {
        sum += n[i] - '0';
    }
    // cout << (sum * k);

    return sumDigit(sum * k);
}

int main()
{
    string n;
    int k;
    cin >> n;
    cin >> k;
    cout << superDigit(n, k) << endl;
    // superDigit("143", 3);
}
