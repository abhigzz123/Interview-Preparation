#include <bits/stdc++.h>
using namespace std;

/*          Next Permutation
Input - 
                8
                1 3 
                2 4
                2 6
                8 9
                8 10
                9 11
                15 18
                16 17
Output -    
        1 6
        8 11
        15 18
            
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b;
    cin >> n;

    vector<pair<int, int>> vop(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        vop[i] = make_pair(a, b);
    }

    sort(vop.begin(), vop.end());

    pair<int, int> currentPair = vop[0];
    vector<pair<int, int>> result;

    for (int i = 1; i < n; i++)
    {
        if (vop[i].first <= currentPair.second)
        {
            currentPair.second = max(vop[i].second, currentPair.second);
        }
        else
        {
            result.push_back(currentPair);
            currentPair = vop[i];
        }
    }

    result.push_back(currentPair);

    for (auto z : result)
    {
        cout << z.first << " " << z.second << endl;
    }

    return 0;
}
