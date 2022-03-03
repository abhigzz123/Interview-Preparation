#include <bits/stdc++.h>
using namespace std;

/*  Find the next greater element onto the right.
    
Input - 
                4
            3 1 -1 100

Output -    

            The next greater element for -1 will be 100
            The next greater element for 1 will be 100
            The next greater element for 3 will be 100
            No next greater element for 100 so printing -1      
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
    stack<int> stackk;

    stackk.push(vec[0]);

    for (int i = 1; i < n; i++)
    {
        if (stackk.empty())
        {
            stackk.push(vec[i]);
            continue;
        }

        else if (vec[i] > stackk.top())
        {
            while (!stackk.empty())
            {
                cout << "The next greater element for " << stackk.top() << " will be " << vec[i] << endl;
                stackk.pop();
            }
        }

        stackk.push(vec[i]);
    }

    while (!stackk.empty())
    {
        cout << "No next greater element for " << stackk.top() << " so printing -1" << endl;
        stackk.pop();
    }

    return 0;
}
