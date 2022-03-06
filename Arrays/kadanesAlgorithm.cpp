#include <bits/stdc++.h>
using namespace std;

/*                       Maximum subarray sum  (Kadane's Algorithm)
Input - 
                              8
            -2 -3 4 -1 -2 1 5 -3
Output -    

           Maximum subarray sum is 7
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

    int sum = 0, maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += vec[i];
        if (sum > maximum)
        {
            maximum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum subarray sum is " << maximum << endl;

    return 0;
}
