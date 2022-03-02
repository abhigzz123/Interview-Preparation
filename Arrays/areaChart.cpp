#include <bits/stdc++.h>
using namespace std;

/* 
Input - 
           5
        8 0 2 3 6

Output - 
        * - - - - 
        * - - - - 
        * - - - * 
        * - - - * 
        * - - - * 
        * - - * * 
        * - * * * 
        * - * * * 
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int size;
    cin >> size;

    int array[size];

    for (auto &z : array)
    {
        cin >> z;
    }

    int maximum = INT_MIN;

    for (auto current : array)
    {
        if (current > maximum)
        {
            maximum = current;
        }
    }

    for (int i = maximum; i > 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] < i)
            {
                cout << "-"
                     << " ";
            }
            else
            {
                cout << '*' << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
