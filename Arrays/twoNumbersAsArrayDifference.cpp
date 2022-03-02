#include <bits/stdc++.h>
using namespace std;

/* Subtract two numbers given as an array
    Assumption = "second array is always greater than first one"
Input - 
            1 5
            7
            9 0 0 0 0 
Output - 
            8 9 9 9 3 
    
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int size1, size2;
    cin >> size1 >> size2;

    int num1[size1];
    int num2[size2];

    for (auto &z : num1)
    {
        cin >> z;
    }

    for (auto &z : num2)
    {
        cin >> z;
    }

    int currentindex2 = size2 - 1;
    int currentindex1 = size1 - 1;
    vector<int> result;

    int carry = 0;

    while (currentindex2 >= 0)
    {
        if (currentindex1 < 0)
        {
            int difference = 0;
            if (num2[currentindex2] != 0)
            {
                difference = num2[currentindex2] + carry;
                result.push_back(difference);
            }
            else
            {
                difference = (num2[currentindex2] + 10) + carry;
                result.push_back(difference);
                carry = -1;
            }
        }
        else
        {
            int difference = 0;
            if (num2[currentindex2] >= num1[currentindex1])
            {
                difference = num2[currentindex2] - num1[currentindex1] + carry;
                result.push_back(difference);
            }
            else
            {
                difference = (num2[currentindex2] + 10) - num1[currentindex1] + carry;
                result.push_back(difference);
                carry = -1;
            }
        }
        currentindex2--;
        currentindex1--;
    }

    reverse(result.begin(), result.end());

    for (auto z : result)
    {
        cout << z << " ";
    }

    return 0;
}
