// A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by  unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return 0 .
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maximum = max(arr[i], maximum);
    }
    if (maximum - k > 0)
    {
        cout << (maximum - k);
    }
    else
    {
        cout << 0;
    }
}