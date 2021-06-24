// Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just 1 character at 1 index in the string, and the remaining characters will occur the same number of times. Given a string , determine if it is valid. If so, return YES, otherwise return NO.
//aabbccddeefghi
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int temp = 0;

    int count[26] = {0};
    int maximum = 0;
    int minimum = 1;
    int flag = 1;
    int max_index, min_index;

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {

        for (int j = i + 1; j < 26; j++)
        {
            if (count[i] > count[j])
            {
                temp = count[j];
                count[j] = count[i];
                count[i] = temp;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            for (int j = i + 1; j < 24; j++)
            {

                if (count[j] != count[j + 1])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}