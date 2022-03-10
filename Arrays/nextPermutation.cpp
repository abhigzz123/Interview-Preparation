#include <bits/stdc++.h>
using namespace std;

/*          Next Permutation
Input - 
                6 
            1 4 3 2 1 9
Output -    
            1 4 3 2 9 1 
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> vec(n);

    for (auto &z : vec)
    {
        cin >> z;
    }

    int replacableIndex = -1;

    for (int i = n - 1; i > 0; i--)
    {
        if (vec[i] > vec[i - 1])
        {
            replacableIndex = i - 1;
            break;
        }
    }

    if (replacableIndex == -1)
    {
        reverse(vec.begin(), vec.end());
    }
    else
    {
        int toBeReplacedIndex = n - 1;
        while (toBeReplacedIndex > replacableIndex)
        {
            if (vec[toBeReplacedIndex] > vec[replacableIndex])
            {
                break;
            }
            toBeReplacedIndex--;
        }

        swap(vec[replacableIndex], vec[toBeReplacedIndex]);

        reverse(vec.begin() + replacableIndex + 1, vec.end());
    }
    cout << "Next permutation is ";
    for (auto z : vec)
    {
        cout << z << " ";
    }

    return 0;
}
