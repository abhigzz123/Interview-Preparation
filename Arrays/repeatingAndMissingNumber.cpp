#include <bits/stdc++.h>
using namespace std;

/*  Repeating and missing number in an array. 
Input - 
                   7
                1 7 5 3 2 2 4
Output -    

            Missing number is 6
            Repeating number is 2
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    map<int, int> map;
    int repeating = 0, missing = 0;

    vector<int> vec(n);

    for (auto &z : vec)
    {
        cin >> z;
        map[z]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (map[i] > 1)
        {

            repeating = i;
        }
        else if (map[i] == 0)
        {
            missing = i;
        }
    }

    cout << "Missing number is " << missing << endl
         << "Repeating number is " << repeating << endl;

    return 0;
}
