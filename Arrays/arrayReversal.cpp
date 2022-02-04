#include <bits/stdc++.h>
using namespace std;

void reverseTheArray(int a[], int start, int end)
{
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
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

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int start = 0;
    int end = n - 1;

    reverseTheArray(array, start, end);

    for (auto itr : array)
    {
        cout << itr << " ";
    }

    return 0;
}
