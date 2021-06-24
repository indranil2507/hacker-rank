#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int h[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> h[i];
    }

    string s;
    cin >> s;
    int i = 0;
    int maximum = 0;
    int d = 0;

    while (s[i] != '/0')
    {
        int val = s[i] - 'a';
        maximum = max(h[val], maximum);
        d++;
        i++;
    }
    cout << (d * maximum);
}