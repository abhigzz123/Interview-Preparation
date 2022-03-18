#include <bits/stdc++.h>
using namespace std;

/*        Set Matrix Zeros  
Input - 
                 3 3
                1 1 1
                1 0 1
                1 1 1
Output -    
                1 0 1 
                0 0 0 
                1 0 1 
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int rows, columns, columnFlag = 1;

    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            columnFlag = 0;
        for (int j = 1; j < columns; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = columns - 1; j >= 0; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (columnFlag == 0)
    {
        matrix[0][0] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
