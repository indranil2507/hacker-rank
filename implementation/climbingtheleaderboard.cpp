// Online C++ compiler to run C++ program online
// An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

// The player with the highest score is ranked number 1 on the leaderboard.
// Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int ldr[n];
    int arr[n];
    int s = 1;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        ldr[0] = arr[0];

        if (i >= 1)
        {
            if (arr[i] != arr[i - 1])
            {
                ldr[s] = arr[i];
                s++;
            }
        }
    }
    //  for (int i = 0; i < s; i++)
    // {
    //     cout<< ldr[i];
    // }
    cin >> m;
    int player[m];

    for (int i = 0; i < m; i++)
    {
        cin >> player[i];
    }
    // int sol[m];
    // for (int j = m - 1; j >= 0; j++)
    // {
    //     int current = player[j];
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (current > ldr[i])
    //         {
    //             sol[j] = i + 1;
    //             break;
    //         }
    //         else
    //         {
    //             sol[j] = i + 1;
    //         }
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << sol[i] << " ";
    // }
    // cout << endl;

    // int total = n + 1;
    // int scr[total];
    int sol[m];
    int i = 0;
    int j = m - 1;
    int k = 0;

    while (i < s && j >= 0)
    {
        if (player[j] >= ldr[i])
        {
            // scr[k] = player[j];
            // for(int i=0;i<m;i++){
            //     sol[]=
            // }
            sol[j] = i + 1;
            j--;
            k++;
        }
        if (player[j] < ldr[i])
        {
            // scr[k] = ldr[i];
            // for(int i=0;i<m;i++){
            //     sol[]=
            // }
            // sol[j] = k + 1;
            i++;
            k++;
        }
    }
    while (i < s)
    {
        // scr[k] = ldr[i];
        // for(int i=0;i<m;i++){
        //     sol[]=
        // }
        // sol[j] = k + 1;
        i++;
        k++;
    }
    while (j >= 0)
    {
        // scr[k] = player[j];
        // for(int i=0;i<m;i++){
        //     sol[]=
        // }
        sol[j] = i + 1;
        j--;
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        cout << sol[i] << endl;
    }
    cout << endl;
}
