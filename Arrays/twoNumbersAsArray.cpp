#include <bits/stdc++.h>
using namespace std;

/* Add two numbers given as an array 
Input - 
            1 8 
            1
            9 0 8 6 4 3 2 1
Output - 
            9 0 8 6 4 3 2 2   
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

    int index1 = size1 - 1;
    int index2 = size2 - 1;

    vector<int> vec;
    int carry = 0;

    while (index1 >= 0 && index2 >= 0)
    {
        int sum = num1[index1] + num2[index2] + carry;
        if (sum > 9)
            carry = sum / 10;
        else
            carry = 0;
        vec.push_back(sum % 10);

        index1--;
        index2--;
    }

    while (index1 >= 0)
    {
        int sum = num1[index1] + carry;
        if (sum > 9)
            carry = sum / 10;
        else
            carry = 0;
        vec.push_back(sum % 10);
        index1--;
    }

    while (index2 >= 0)
    {
        int sum = num2[index2] + carry;
        if (sum > 9)
            carry = sum / 10;
        else
            carry = 0;
        vec.push_back(sum % 10);
        index2--;
    }
    reverse(vec.begin(), vec.end());

    for (auto z : vec)
    {
        cout << z << " ";
    }

    return 0;
}
