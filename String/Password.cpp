#include <bits/stdc++.h>
#include <string.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password)
{

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    bool num = false;
    bool lc = false;
    bool uc = false;
    bool sc = false;
    int num_c = 1;
    int lc_c = 1;
    int uc_c = 1;
    int sc_c = 1;

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < 26; j++)
        {
            if (password[i] == numbers[j])
            {
                num = true;
                num_c = 0;
                break;
            }
            if (password[i] == lower_case[j])
            {
                lc = true;
                lc_c = 0;
                break;
            }
            if (password[i] == upper_case[j])
            {
                uc = true;
                uc_c = 0;
                break;
            }
            if (password[i] == special_characters[j])
            {
                sc = true;
                sc_c = 0;
                break;
            }
        }
        // char chararacter = password[i];
    }
    cout << num_c << lc_c << sc_c << uc_c;

    if (password.length() >= 6)
    {
        if (num && lc && uc & sc)
        {
            return 0;
        }
        else
        {
            return (num_c + lc_c + sc_c + uc_c);
        }
    }
    else
    {
        return (6 - password.length());
    }
}

int main()
{
    int n;
    string password;
    cin >> n;
    cin >> password;
    cout << minimumNumber(n, password);
}