#include <bits/stdc++.h>
using namespace std;

// Inverse of a number

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n;
    cin >> n;

    long long int temp = n;
    long long int index = 1;
    long long int res = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        res += (int)index * pow(10, digit - 1);
        index++;
        temp /= 10;
    }
    cout << res << endl;

    return 0;
}
