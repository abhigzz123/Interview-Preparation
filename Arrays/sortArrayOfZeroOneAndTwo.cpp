
// Sort an array of 0's , 1's , 2's

// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

// Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
// Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

#include <bits/stdc++.h>
using namespace std;

// Simple individual counting approach
void countingTheNumbers(int a[], int size)
{
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    int idx = 0;
    while (zero--)
    {
        a[idx] = 0;
        idx++;
    }

    while (one--)
    {
        a[idx] = 1;
        idx++;
    }

    while (two--)
    {
        a[idx] = 2;
        idx++;
    }
}

// TODO
void linearApproach(int a[], int size)
{
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int array[n];

    for (auto &itr : array)
    {
        cin >> itr;
    }

    countingTheNumbers(array, n);

    for (auto z : array)
    {
        cout << z << " ";
    }

    return 0;
}
