#include <bits/stdc++.h>
using namespace std;

/*  Stock Span in an array
    
Input - 
                        7
            100 80 60 70 60 75 85

Output -   
            Span for 100 is 1
            Span for 80 is 1
            Span for 60 is 1
            Span for 70 is 2
            Span for 60 is 1
            Span for 75 is 4
            Span for 85 is 6         
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int size;
    cin >> size;

    vector<int> vec(size);

    for (auto &z : vec)
    {
        cin >> z;
    }

    stack<int> st;
    cout << "Span for " << vec[0] << " is " << 1 << endl;

    st.push(0);

    for (int i = 1; i < size; i++)
    {
        while (!st.empty() && (vec[i] > vec[st.top()]))
        {
            st.pop();
        }

        if (st.size() == 0)
        {
            cout << "Span for " << vec[i] << " is " << i + 1 << endl;
        }
        else
        {
            cout << "Span for " << vec[i] << " is " << ((i)-st.top()) << endl;
        }
        st.push(i);
    }

    return 0;
}
