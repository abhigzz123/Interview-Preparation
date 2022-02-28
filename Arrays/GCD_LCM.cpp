#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

/* 
    GCD and LCM of two numbers
*/
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num1, num2;
    cin >> num1 >> num2;

    int hcf = gcd(num1, num2);
    int lcm = (num1 * num2) / hcf;

    cout << "GCD IS = " << hcf << " and LCM IS = " << lcm;

    return 0;
}
